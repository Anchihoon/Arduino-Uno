#include "DHT.h"       
#include <SoftwareSerial.h>    

SoftwareSerial BTserial(10,11); 
#define DHTPIN 2      
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);  

void setup() {
  Serial.begin(9600);    
  BTserial.begin(9600);   
}

void loop() {
  int h = dht.readHumidity();  
  int t = dht.readTemperature();  
  BTserial.print("습도: ");
  BTserial.print(h);
  BTserial.print("% ");
  BTserial.print("온도: ");
  BTserial.print(t);
  BTserial.print(" C");                           
}
