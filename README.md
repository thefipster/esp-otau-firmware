# ESP32 Blank OTAU Firmware

Blank firmware just exposing an OTAU endpoint to update the firmware remotely. Every http address will redirect to `/update`.

## Setup

Copy `Credentials.h.sample` to `Credentials.h` and supply appropriate wifi credentials.