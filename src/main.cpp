#include <WiFi.h>
#include <WebServer.h>

WebServer server(80)

const char *ssid = "ESP32";
const char *password = "12345678";

void setup() {
  Serial.begin(115200);

  WiFi.softAP(ssid, password);

  server.begin();
  Serial.println("Webserver gestartet, IP: " + WiFi.softAPIP().toString());
}

void loop() {
  server.handleClient();
}
