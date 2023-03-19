#include <OtauHandler.h>

OtauHandler::OtauHandler()
{
    server = new AsyncWebServer(80);
}

void OtauHandler::Begin()
{
    server->onNotFound([](AsyncWebServerRequest *request)
                       { request->redirect("/update"); });

    server->begin();
}
