#include <Arduino.h>
#define MA_BROCHE_ANGLE 32

#include <FastLED.h>
CRGB monPixel;

void setup() {
 Serial.begin(115200);
 FastLED.addLeds<WS2812, 27, GRB>(&monPixel, 1);
}

void loop() {
  int maLectureAnalogique;
 
  maLectureAnalogique = analogRead(MA_BROCHE_ANGLE);

  Serial.print(maLectureAnalogique);
  Serial.println();
  delay(100);


  if (maLectureAnalogique > 2000) {
    FastLED.show(true);
    monPixel = CRGB(193, 84, 255);
  } else {
    FastLED.clear(true);
  }



}

