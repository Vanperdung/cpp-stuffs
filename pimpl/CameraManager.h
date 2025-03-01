#ifndef __CAMERA_MANAGER_H__
#define __CAMERA_MANAGER_H__

#include <memory>

class CameraManager
{
public:
    class Private; // Forward declaration

    CameraManager();
    ~CameraManager();

    void start();
    void getInfo();
    void stop();
private:

    // Keep a pointer to access the private implementation
    // Ensure the private implementation is destroyed when the CameraManager is destroyed
    std::unique_ptr<Private> m_Private;
};

#endif // __CAMERA_MANAGER_H__