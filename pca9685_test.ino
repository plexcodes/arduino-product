#include "Wire.h"
#include "Adafruit_PWMServoDriver.h"


Adafruit_PWMServoDriver PCA9685 = Adafruit_PWMServoDriver(0x40, Wire);

void setup() {
  Serial.begin(9600);
  Wire.begin();
  PCA9685.begin();
  PCA9685.setPWMFreq(490);
}

void loop() {
  PCA9685.setPWM(0, 0, 1000);
  PCA9685.setPWM(1, 0, 0);
  PCA9685.setPWM(2, 0, 4095);
}
