#include <WiFi.h>

const char* ssid     = "ESP32";
const char* password = "password";

void setup() {
	
	// Create access point
	Serial.begin(115200);
	WiFi.mode(WIFI_AP);
	WiFi.setHostname(ssid);
	WiFi.softAP(ssid);
	//WiFi.softAP(ssid, password);
	Serial.println("");
	Serial.print("IP address: ");
	Serial.println(WiFi.softAPIP());
	
	// change the beginning to this if you want to join an existing network
	/*
	Serial.begin(115200);
	WiFi.begin(ssid, password);
	Serial.println("");
	// Wait for connection
	while (WiFi.status() != WL_CONNECTED) {
	delay(500);
	Serial.print(".");
	}
	Serial.println("");
	Serial.print("IP address: ");
	Serial.println(WiFi.localIP());
	*/
}

void loop() {
  // put your main code here, to run repeatedly:

}
