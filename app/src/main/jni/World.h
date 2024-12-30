

FVector WorldToScreen(FVector world) 
{
    if (!g_LocalController->PlayerCameraManager)
        return {0, 0, 0};
    
    FMinimalViewInfo camViewInfo = g_LocalController->PlayerCameraManager->CameraCache.POV;
    
    auto CameraLocation = camViewInfo.Location;
    auto CameraRotation = camViewInfo.Rotation;
    
    FMatrix tempMatrix = RotatorToMatrix(CameraRotation);

    FVector vAxisX(tempMatrix.M[0][0], tempMatrix.M[0][1], tempMatrix.M[0][2]);
    FVector vAxisY(tempMatrix.M[1][0], tempMatrix.M[1][1], tempMatrix.M[1][2]);
    FVector vAxisZ(tempMatrix.M[2][0], tempMatrix.M[2][1], tempMatrix.M[2][2]);

    FVector vDelta = world - CameraLocation;

    FVector vTransformed(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

    auto FovAngle = camViewInfo.FOV;
    float screenCenterX = g_screenWidth / 2;
    float screenCenterY = g_screenHeight / 2;

    float X = (screenCenterX + vTransformed.X * (screenCenterX / tanf(FovAngle * ((float)PI / 360.0f))) / vTransformed.Z);
    float Y = (screenCenterY - vTransformed.Y * (screenCenterX / tanf(FovAngle * ((float)PI / 360.0f))) / vTransformed.Z);
    float Z = vTransformed.Z;
    
    return {X, Y, Z};
}




//NECESSARY
//××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××

