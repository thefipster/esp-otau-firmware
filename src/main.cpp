#include <main.h>

void setup()
{
  wifi.Connect();
  otau.Begin();
  AsyncElegantOTA.begin(otau.server);
}

void loop()
{
  if (!wifi.Loop())
    ESP.restart();
}