#include <Arduino.h>

#define H_BRIDGE_IN1 7
#define H_BRIDGE_IN2 8
#define H_BRIDGE_PWM 9

// put function declarations here:
void setup() {
    Serial.begin(9600);
    Serial.println("Hello ASI!");
    pinMode(H_BRIDGE_IN1, OUTPUT);
    pinMode(H_BRIDGE_IN2, OUTPUT);
    pinMode(H_BRIDGE_PWM, OUTPUT);
    analogWrite(H_BRIDGE_PWM, 255);
    digitalWrite(H_BRIDGE_IN1, HIGH);
    digitalWrite(H_BRIDGE_IN2, LOW);
}

void loop() {

}
