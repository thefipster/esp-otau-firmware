#ifndef WIFIHANDLER_H
#define WIFIHANDLER_H

#include <WiFi.h>

class WifiHandler
{

public:
    WifiHandler(char *ssid, char *key);
    WifiHandler(char *hostname, char *ssid, char *key);

    bool Connect();
    bool Loop();

private:
    char* ssid;
    char* key;
};

#endif