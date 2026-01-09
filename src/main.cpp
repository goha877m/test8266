#include <Arduino.h>

// pwm test

void setup() {
    pinMode(D0, OUTPUT);
}

void loop() {
    // 建立循环，实现D0口PWM输出
    for (int i = 0; i < 255; i++) {
        analogWrite(D0, i);
        delay(500);
    }
}
