#ifndef __CAMERA_MANAGER_PRIVATE_H__
#define __CAMERA_MANAGER_PRIVATE_H__

#include <memory>

#include "CameraManager.h"

class CameraManager::Private
{
public:
    Private();

private:
    void init();
    void start();
    void stop();

    void doSomething();
    void doSomethingElse();
    void done();

    friend class CameraManager;
};

#endif // __CAMERA_MANAGER_PRIVATE_H__