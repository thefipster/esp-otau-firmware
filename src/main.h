#ifndef MAIN_H
#define MAIN_H

#include <Arduino.h>
#include <AsyncElegantOTA.h>
#include <Credentials.h>
#include <OtauHandler.h>
#include <WifiHandler.h>

OtauHandler Otau;
WifiHandler Wifi(WIFI_SSID, WIFI_PASS);

void setup();
void loop();

#endif