#include <Arduino.h>

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  digitalWrite(D0, HIGH);
  digitalWrite(D1, HIGH);
}

void loop()
{
  if (Serial.available())
  {
    String inputString = Serial.readString();
    Serial.print("I received: ");
    Serial.println(inputString);
    // 这块开发板是低电平触发，低电平灯亮
    if (inputString == "ON")
    {
      digitalWrite(LED_BUILTIN, LOW); // 灯亮
    }
    else if (inputString == "OFF")
    {
      digitalWrite(LED_BUILTIN, HIGH); // 灯灭
    }

    if (inputString == "D0ON")
    {
      digitalWrite(D0, HIGH); // D0口高电平
    }
    else if (inputString == "D0OFF")
    {
      digitalWrite(D0, LOW); // D0口低电平
    }
  }
}
