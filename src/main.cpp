#include <main.h>

void setup()
{
  Wifi.Connect();
  Otau.Begin();
  AsyncElegantOTA.begin(Otau.server);
}

void loop()
{
  if (!Wifi.Loop())
    ESP.restart();
}