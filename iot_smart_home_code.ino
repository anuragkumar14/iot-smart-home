#include <ThingSpeak.h>
#include <ESP8266WiFi.h>
const char* ssid = "samsung a30s";
const char* password = "asdfghjkl";
char* server = "api.thingspeak.com";
unsigned long channelID = 274391;
char* readAPIKey = "A7PVQUI56RWOMJNE";
unsigned int dataFieldOne = 1;
float cnst;
WiFiClient client;
void setup() {
Serial.begin(115200);
pinMode(1,OUTPUT);
Serial.println("Start");
connectWiFi();
delay(1000);
}

void loop() {
delay(1000);
Serial.println("connecting");
cnst = readTSData( channelID, dataFieldOne );
Serial.println(aConst);

if(cnst==0)
{
digitalWrite(1,LOW);
}
else if(cnst==1)
{
digitalWrite(1,HIGH);
}
delay(1000);
}
int connectWiFi() {
WiFi.begin( ssid, password );
while (WiFi.status() != WL_CONNECTED) 
{
delay(500);
Serial.print(".");
}
Serial.println( "Connected" );
ThingSpeak.begin( client );
}
float readTSData( long TSChannel, unsigned int TSField ) {
float data = ThingSpeak.readFloatField( TSChannel, TSField, readAPIKey );
Serial.println( "Data read from ThingSpeak: " + String( data, 9 ) );
return data;
}
