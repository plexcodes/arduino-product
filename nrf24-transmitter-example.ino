/*
* NRF24 Trasmitter Example
* Library: https://github.com/tmrh20/RF24/
*/

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(13, 14); // CE, CSN -> 7, 8 for Arduino Uno/Nano
const byte address[6] = "00001";

void setup() {
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

void loop() {
  const char text[] = "PLEX Master Hub";
  radio.write(&text, sizeof(text));
  delay(1000);
}