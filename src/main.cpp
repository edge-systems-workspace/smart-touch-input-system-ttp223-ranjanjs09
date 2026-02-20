#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author Purendra Ranjan [ranjanjs09]
 * @date 19-02-2026
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

int led = 13;
int touchPin = 3;

void setup() {
    pinMode(touchPin, INPUT);
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int state = digitalRead(touchPin);

    if (state == HIGH) {
        digitalWrite(led, HIGH);
        Serial.println("Touch");
    } else {
        digitalWrite(led, LOW);
        Serial.println("NOT Touch");
    }
}