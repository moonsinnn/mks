int (*osub_172B0C)(__int64 a1);
int hsub_172B0C(__int64 a1)
{
  return 0;
}

HOOK_LIB("libgcloud.so","0x172b0c",hsub_172B0C,osub_172B0C);