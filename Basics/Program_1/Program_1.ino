#define timeBetweenBlinks 1500

void setup() {
  pinMode(13,OUTPUT);

}

void loop() {
  digitalWrite(13,HIGH);
  delay(timeBetweenBlinks);
  digitalWrite(13,LOW);
  delay(timeBetweenBlinks);
}
