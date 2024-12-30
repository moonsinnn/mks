#include <string>
#include <sys/mman.h>
#include <fcntl.h>
#include <dirent.h>
#include <unistd.h>

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <pthread.h>
#include <sys/socket.h>
#include <malloc.h>
#include <math.h>
#include <thread>
#include <iostream>
#include <sys/stat.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <iostream>
#include <locale>
#include <string>
#include <codecvt>
#include <sys/syscall.h>
#include <unistd.h>
#include <sys/uio.h>
int handle,scwq;;
typedef char PACKAGENAME;
int 获取PID(const char *包名)    // 获取PID函数
{
    int id;
    pid_t pid = -1;
    DIR *dir;
    FILE *fp;
    char filename[32];
    char cmdline[256];
    struct dirent *entry;
    if (包名 == NULL)
        return -1;
    dir = opendir("/proc");
    if (dir == NULL) {
        return -1;
    }
    while ((entry = readdir(dir)) != NULL) {
        id = atoi(entry->d_name);
        if (id != 0) {
            sprintf(filename, "/proc/%d/cmdline", id);
            fp = fopen(filename, "r");
            handle = open(filename, O_RDWR);
            if (fp) {
                fgets(cmdline, sizeof(cmdline), fp);
                fclose(fp);
                if (strcmp(包名, cmdline) == 0) {
                    pid = id;
                    break;
                }
            }
        }
    }
    closedir(dir);
    return pid;
}

unsigned long getModuleBase(char *module_name)
{
	char*phgsr;
	char jjjj_N[64];
	long startaddr = 0;
	char path[256],line[1024];
	bool bssOF = false,LastIsSo = false;
	strcpy(jjjj_N,module_name);
	phgsr = strtok(jjjj_N,":");
	module_name = phgsr;
	phgsr = strtok(NULL,":");
	if(phgsr)
	{
		if(strcmp(phgsr,"bss")==0)
		{
			bssOF = true;
		}
	}
	sprintf(path,"/proc/%d/maps",getpid());
	FILE*p = fopen(path,"r");
	if(p)
	{
		while(fgets(line,sizeof(line),p))
		{
			if(LastIsSo)
			{
				if(strstr(line,"[anon:.bss]")!=NULL)
				{
					sscanf(line,"%lx-%*lx",&startaddr);
					break;
				}
				else
				{
					LastIsSo = false;
				}
			}
			if(strstr(line,module_name)!=NULL)
			{
				if(!bssOF)
				{
					sscanf(line,"%lx-%*lx",&startaddr);
					break;
				}
				else
				{
					LastIsSo = true;
				}
			}
		}
		fclose(p);
	}
	return startaddr;
}






int 修改FLOAT(long int addr, float value) {
    char lj[64];
    int handle;
    sprintf(lj, "/proc/%d/mem", getpid());
    handle = open(lj, O_RDWR);
    lseek(handle, 0, SEEK_SET);
    pwrite64(handle, &value, 4, addr);
    close(handle);
    return 0;
}


int 修改DWORD(long int addr, int value) {
    char lj[64];
    int handle;
    sprintf(lj, "/proc/%d/mem", getpid());
    handle = open(lj, O_RDWR);
    lseek(handle, 0, SEEK_SET);
    pwrite64(handle, &value, 4, addr);
    close(handle);
    return 0;
}

int 修改WORD(long int addr,  int16_t value) {
    char lj[64];
    int handle;
    sprintf(lj, "/proc/%d/mem", getpid());
    handle = open(lj, O_RDWR);
    lseek(handle, 0, SEEK_SET);
    pwrite64(handle, &value, 4, addr);
    close(handle);
    return 0;
}

int 修改QWORD(long int addr,  int64_t value) {
    char lj[64];
    int handle;
    sprintf(lj, "/proc/%d/mem", getpid());
    handle = open(lj, O_RDWR);
    lseek(handle, 0, SEEK_SET);
    pwrite64(handle, &value, 8, addr);
    close(handle);
    return 0;
}

void readBuffer(long addr, void *buffer, int size)	// 读取核心函数
{
	struct iovec iov_ReadBuffer, iov_ReadOffset;
	iov_ReadBuffer.iov_base = buffer;
	iov_ReadBuffer.iov_len = size;
	iov_ReadOffset.iov_base = (void *)addr;
	iov_ReadOffset.iov_len = size;
	syscall(SYS_process_vm_readv, getpid(), &iov_ReadBuffer, 1, &iov_ReadOffset, 1, 0);
}

int readDword(long address)// 传输地址(读)一个int D类型
{
	int value = 0;
	int*p = &value;
	readBuffer(address,p,sizeof(int));
	return value;
}

float readFloat(long address)// 传输地址(读)一个int F类型
{
	float value = 0.0;
	float*p = &value;
	readBuffer(address,p,sizeof(float));
	return value;
}


long readValueL(long address)	// 传输地址(读) 指针跳转
{
	long addr = 0;
	long *p = &addr;
	readBuffer(address, p, sizeof(long));
	return addr & 0xFFFFFFFFFF;
}

long ValueLmultiple(long address, long Offset[], char bytelength[])
{
	for (int i = 0; i < (int)atoi(bytelength); i++)
	{
		address = readValueL(address) + Offset[i];
	}
	delete(Offset);
	return address;
}

struct MAPS
{
	long int addr;
	long int taddr;
	struct MAPS *next;
};

#define LEN sizeof(struct MAPS)
typedef struct MAPS *PMAPS;    //定义结构体
typedef int COUNT;

PMAPS readmaps_c_alloc()
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[256], buff[1024];
	sprintf(lj, "/proc/%d/maps", getpid());
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("分析失败");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);//读取一行
		//[anon:scudo:primary]
		if (strstr(buff,"[anon:libc_malloc]"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			//这里使用lx是为了能成功读取特别长的地址
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);//分配内存
		}
	}
	free(pNew);//将多余的空间释放
	free((PMAPS)malloc(LEN));
	fclose(fp);//关闭文件指针
	return pHead;
}
/*

PMAPS MemorySearch_DWORD(int value,COUNT *gs, int values)
{
	*gs=0;
	PMAPS pTemp=NULL;
	pTemp=readmaps_c_alloc();//设置内存
	PMAPS n,e;
	e=n=(PMAPS)malloc(LEN);
	PMAPS pBuff;
	pBuff=n;
	int handle;//句柄
	int iCount=0;//链表长度
	int c;
	char lj[256];//路径
	int buff[1024]={0};//缓冲区
	memset(buff,0,4);
	sprintf(lj, "/proc/%d/mem", getpid());
	handle = open(lj, O_RDWR);//打开mem文件
	lseek(handle, 0, SEEK_SET);
	while (pTemp != NULL)//读取maps里面的地址
	{
		c=(pTemp->taddr-pTemp->addr)/4096;
		for (int j=0;j<c;j++)
		{
		    pread64(handle,buff,0x1000,pTemp->addr+j*4096);
		    for (int i=0;i<1024;i++)
	    	{
		    	if (buff[i]==value)
		    	{
		    		iCount++;
		    		*gs+=1;
		    	int	ResCount+=1;
			    	n->addr=(pTemp->addr)+(j*4096)+(i*4);
			    	//printf("addr:%lx,val:%d,buff=%d\n",n->addr,value,buff[i]);
			    	//===开始修改===//
			    	修改DWORD(n->addr, values);
			    	if (iCount==1)
		            {
		            	n->next=NULL;
		            	e=n;
		            	pBuff=n;
	            	}
	            	else
	                {
	                	n->next=NULL;
	            		e->next=n;
		            	e=n;
	                }
	            	n=(PMAPS)malloc(LEN);
		    	}
	    	}
		}
		pTemp = pTemp->next;
	}
	printf("\n搜索%d\n发现%d个\n修改为%d\n",value,*gs,values);
	free(n);
	free((PMAPS)malloc(LEN));
	free(pTemp);
	close(handle);
	return pBuff;
}
*/