#include <WifiHandler.h>

WifiHandler::WifiHandler(char *ssid, char *key)
{
  this->ssid = ssid;
  this->key = key;
}

WifiHandler::WifiHandler(char *hostname, char *ssid, char *key)
    : WifiHandler(ssid, key)
{
  WiFi.setHostname(hostname);
}

bool WifiHandler::Connect()
{
  WiFi.begin(ssid, key);
  int tries = 0;
  while (tries < 5 && WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    tries++;
  }

  return tries < 5 ? true : false;
}

bool WifiHandler::Loop()
{
  if (WiFi.status() == WL_CONNECTED)
    return true;

  WiFi.disconnect();
  WiFi.mode(WIFI_OFF);
  WiFi.mode(WIFI_STA);

  return Connect();
}