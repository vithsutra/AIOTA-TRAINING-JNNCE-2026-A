#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "vithsutra";
const char* password = "sathwikkd";

// Your PC IP address (very important)
const char* serverName = "http://SERVER_IP:3000/data";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {

    HTTPClient http;

    // Fake temperature (random)
    float temperature = random(250, 350) / 10.0;

    http.begin(serverName);
    http.addHeader("Content-Type", "application/json");

    String jsonData = "{\"temperature\": " + String(temperature) + "}";

    int httpResponseCode = http.POST(jsonData);

    Serial.print("Temp Sent: ");
    Serial.println(temperature);
    Serial.print("Response: ");
    Serial.println(httpResponseCode);

    http.end();
  }

  delay(2000); // send every 2 sec
}