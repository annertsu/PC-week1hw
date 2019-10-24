const int motor = 2;

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {
  digitalWrite(motor, HIGH);   // set the motor on
  delay(1000);                  // wait
  digitalWrite(motor, LOW);    // set the motor off
  delay(1000);                  // wait
}

