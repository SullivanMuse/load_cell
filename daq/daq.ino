#include "HX711.h"

#define DOUT 13
#define CLK 12

#define DOUT1 11
#define CLK1 10

HX711 scale;
HX711 scale1;

float calibration_factor = 84600;

void setup() {
  Serial.begin(9600);

  scale.begin(DOUT, CLK);
  scale.set_scale();
  scale.tare();

  scale1.begin(DOUT1, CLK1);
  scale1.set_scale();
  scale1.tare();
}

void loop() {
  scale.set_scale(calibration_factor);
  scale1.set_scale(calibration_factor);

  Serial.print("Reading scale 0: ");
  Serial.print(scale.get_units(), 1);
  Serial.print(" lbs, Reading scale 1: ");
  Serial.print(scale1.get_units(), 1);
  Serial.print(" lbs");
  Serial.println();
}
