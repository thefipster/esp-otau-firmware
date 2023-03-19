#ifndef OTAUHANDLER_H
#define OTAUHANDLER_H

#include <Arduino.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>

class OtauHandler
{
public:
    AsyncWebServer *server;
    OtauHandler();
    void Begin();
};
#endif