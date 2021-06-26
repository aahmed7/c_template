#include <Arduino.h>
#include <debug_print.h>
#include <sensors.h>

#define LED_PIN LED_BUILTIN

void setup() {
    Serial.begin(9600);
    DEBUG_STATUS("TESTING SERIAL PRINT...");
    ledInit(LED_PIN);
}

void loop() {
    ledOn(LED_PIN);
    delay(500);
    ledOff(LED_PIN);
    delay(500);
}