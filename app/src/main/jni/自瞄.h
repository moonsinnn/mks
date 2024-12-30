bool isObjectPlayer(UObject *Object) {
	if (!Tools::IsPtrValid(Object)) {
		return false;
	}
	for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
		if (super == ASTExtraPlayerCharacter::StaticClass()) {
			return true;
		}
	}
	return false;
}

bool isInsideFOV(int x, int y) {
	if (!自动瞄准)
		return true;
	int circle_x = screenWidth / 2;
	int circle_y = screenHeight / 2;
	int rad = FOV;
	return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
	
	
FVector 骨骼漏打判断(ASTExtraPlayerController *localController,ASTExtraPlayerCharacter *Target) {
	FVector targetAimPos={0,0,0};
	if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("Head", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("Head", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("neck_01", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("neck_01", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("upperarm_r", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("upperarm_r", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("upperarm_l", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("upperarm_l", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("lowerarm_r", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("lowerarm_r", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("lowerarm_l", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("lowerarm_l", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("Pelvis", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("Pelvis", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("hand_l", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("hand_l", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("hand_r", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("hand_r", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("thigh_l", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("thigh_l", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("thigh_r", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("thigh_r", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("calf_l", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("calf_l", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("calf_r", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("calf_r", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("foot_l", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("foot_l", {});
		return targetAimPos;
	} else if(localController->LineOfSightTo(localController->PlayerCameraManager,Target->GetBonePos("foot_r", {
	}
	),false)) {
		targetAimPos = Target->GetBonePos("foot_r", {});
		return targetAimPos;
	}
	
	return targetAimPos;
}
///////////
template <class T>
void GetAllActors(std::vector<T *> &Actors)
{
	UGameplayStatics *gGameplayStatics = (UGameplayStatics *)gGameplayStatics->StaticClass();
	auto GWorld = GetWorld();
	if (GWorld)
	{
		TArray<AActor *> Actors2;
		gGameplayStatics->GetAllActorsOfClass((UObject *)GWorld, T::StaticClass(), &Actors2);
		for (int i = 0; i < Actors2.Num(); i++)
		{
			Actors.push_back((T *)Actors2[i]);
		}
	}
}


auto GetTargetByCrossDist() {
	ASTExtraPlayerCharacter *result = 0;
	float max = std::numeric_limits<float>::infinity();
	auto Actors = getActors();
	auto localPlayer = g_LocalPlayer;
	auto localController = g_LocalController;
	if (localPlayer&&localController) {
		auto GWorld = GetWorld();
		if (GWorld) {
			ULevel *PersistentLevel = GWorld->PersistentLevel;
			if (PersistentLevel) {
				TArray<AActor *> Actors = *(TArray<AActor *> *)((uintptr_t)PersistentLevel + Actors_Offset);
				if (localPlayer && localController) {
					for (int i = 0; i < Actors.Num(); i++) {
						if (Actors[i] && isObjectPlayer(Actors[i])) {
							auto Player = (ASTExtraPlayerCharacter *) Actors[i];
							if (Player->bDead)
																			continue;
							float dist = localPlayer->GetDistanceTo(Player) / 100.0f;
							if (dist > 自瞄距离)
																			continue;
							if (忽略倒地) {
								if (Player->Health == 0.0f)
																					    continue;
							}
							if (Player->PlayerKey == localPlayer->PlayerKey)
																				continue;
							if (Player->TeamID == localPlayer->TeamID)
																				continue;
							if (Player->bDead)
																				continue;
							if (忽略人机) {
								if (Player->bEnsure)
																					    continue;
							}
							auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
							if (WeaponManagerComponent) {
								auto CurrentWeaponReplicated =(ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
								if (CurrentWeaponReplicated) {
									auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
									std::string Weapon_Name = CurrentWeaponReplicated->GetWeaponName().ToString();
									int 枪械ID=CurrentWeaponReplicated->GetWeaponID();
									if (枪械ID==106007100||枪械ID==1060071||
																									枪械ID==10600700||枪械ID==106007||
																									枪械ID==10600900||枪械ID==106009||
																									枪械ID==10610100||枪械ID==106101||
																									枪械ID==10610300||枪械ID==106103||
																									枪械ID==10610600||枪械ID==106106||
																									枪械ID==10510800||枪械ID==105108) {
									} else {
										auto Root = Player->GetBonePos("Root", {
										}
										);
										auto Head = Player->GetBonePos("Head", {
										}
										);
										FVector RootSc = WorldToScreen(Root);
										FVector HeadSc = WorldToScreen(Head);
										if (RootSc.Z > 0 && HeadSc.Z > 0) {
											float height = abs(HeadSc.Y - RootSc.Y);
											float width = height * 0.65f;
											FVector middlePoint = {
												HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0
											}
											;
											if ((middlePoint.X >= 0 && middlePoint.X <= screenWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= screenHeight)) {
												FVector2D v2Middle = FVector2D((float) (screenWidth / 2), (float) (screenHeight / 2));
												FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
												if (isInsideFOV((int)middlePoint.X, (int)middlePoint.Y)) {
													float dist = FVector2D::Distance(v2Middle, v2Loc);
													if (dist < max) {
														max = dist;
														result = Player;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}





