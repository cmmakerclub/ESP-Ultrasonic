/*********************************************
Chiang Mai Maker Club
ESPresso Lite V2.0
HC-SR04 Ultrasonic module
*********************************************/

#define ECHO    4  // Espresso lite pin 04
#define TRIGGER 5  // Espresso lite pin 05
 
void setup() {
  Serial.begin (115200);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
}
 
void loop() {
  long duration, distance;
  
  digitalWrite(TRIGGER, LOW);  
  delayMicroseconds(2); 
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIGGER, LOW);
  
  duration = pulseIn(ECHO, HIGH);
  // ความเร็วเสียงเท่ากับ 340 m/s หรือ 29 ไมโครวินาทีต่อเซนติดเมตร
  distance = (duration/2) / 29.1;
  Serial.print("Centimeter = ");
  Serial.println(distance);
  delay(100);
}
