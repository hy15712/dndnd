#include <Servo.h>

Servo myservo;   

int sensorpin = A0;
int val = 0;

void setup() {
  myservo.attach(9); 
  Serial.begin(9600);
}

void loop() {
  val = analogRead(sensorpin);
    Serial.println(val); 

    val = map(val, 0, 800, 0, 180);
    myservo.write(val);
    delay(500);

  
}
