
int LED_PIN1 = 12; //0~13
int LED_PIN2 = 13; //0~13

void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN2, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(400);                       // wait for a second
}
