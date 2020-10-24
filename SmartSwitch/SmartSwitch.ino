#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char auth[] = "AuthToken";
char ssid[] = "SSID";
char pass[] = "PW";
Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(D5);
  servo.write(90);
  delay(200);
  servo.detach();
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}

BLYNK_WRITE(V0) {
  int pinData = param.asInt();
  if (pinData == 1)
    moveServo(true);
}

BLYNK_WRITE(V1) {
  int pinData = param.asInt();
  if (pinData == 1)
    moveServo(false);
}

void moveServo(bool state) {
  servo.attach(D5);
  servo.write(90);

  if(state)
    servo.write(40);
  else
    servo.write(140);

  delay(800);
  servo.write(90);
  delay(200);
  servo.detach();
}