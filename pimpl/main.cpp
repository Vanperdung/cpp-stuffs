#include <iostream>
#include <memory>

// Only include the CameraManager header file

#include "CameraManager.h"

int main()
{
    CameraManager cameraManager;
    cameraManager.start();
    cameraManager.getInfo();
    cameraManager.stop();

    return 0;
}