/*********************************************
  Chiang Mai Maker Club
  ESPresso Lite V2.0
  HC-SR04 Ultrasonic module
*********************************************/

#define ECHO 4  // Espresso lite pin 04
#define TRIG 5  // Espresso lite pin 05

void setup() {
  Serial.begin (115200);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  long duration, distance;

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = (duration / 2) / 29.1;

  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(100);
}
