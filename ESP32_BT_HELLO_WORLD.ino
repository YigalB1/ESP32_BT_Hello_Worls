// from: https://techtutorialsx.com/2018/03/09/esp32-arduino-serial-communication-over-bluetoth-hello-world/


#include "BluetoothSerial.h"
 
BluetoothSerial SerialBT;
 
void setup() {
  SerialBT.begin("BZ-ESP32");
}
 
void loop() {
 
  SerialBT.println("Hello World");
  delay(1000);
}
