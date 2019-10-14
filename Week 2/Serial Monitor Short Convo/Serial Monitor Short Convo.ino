void setup() {
  Serial.begin(9600); //9600 is the baudrate = speed of bits per second
  // while the serial stream is not open, do nothing:
  while (!Serial); //// this line waits to be loaded until the serial monitor is open
  Serial.println("Do you like chili?");
}

void loop() {
  if(Serial.available()) { //reply only when you receive data
    String inputText = Serial.readString(); //inputText is a variable
    Serial.println(inputText);
    delay(2000);
    Serial.println("That's great!"); //this will read serial data
  }
}
