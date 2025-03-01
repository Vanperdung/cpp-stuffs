#include <iostream>
#include <memory>

#include "CameraManager.h"
#include "CameraManagerPrivate.h"

CameraManager::CameraManager()
    : m_Private(std::make_unique<Private>())
{
    std::cout << "CameraManager::CameraManager()" << std::endl; 
}

CameraManager::~CameraManager()
{
    std::cout << "CameraManager::~CameraManager()" << std::endl;
}

void CameraManager::start()
{
    m_Private->start();
}

void CameraManager::getInfo()
{
    m_Private->doSomething();
    m_Private->doSomethingElse();
    m_Private->done();
}

void CameraManager::stop()
{
    m_Private->stop();
}

CameraManager::Private::Private()
{
    std::cout << "CameraManager::Private::Private()" << std::endl;
}

void CameraManager::Private::init()
{
    std::cout << "CameraManager::Private::init()" << std::endl;
}

void CameraManager::Private::start()
{
    init();
    std::cout << "CameraManager::Private::start()" << std::endl;
}

void CameraManager::Private::stop()
{
    std::cout << "CameraManager::Private::stop()" << std::endl;
}

void CameraManager::Private::doSomething()
{
    std::cout << "CameraManager::Private::doSomething()" << std::endl;
}

void CameraManager::Private::doSomethingElse()
{
    std::cout << "CameraManager::Private::doSomethingElse()" << std::endl;
}

void CameraManager::Private::done()
{
    std::cout << "CameraManager::Private::done()" << std::endl;
}