#include <CapacitiveSensor.h>

/*
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Uses a high value resistor e.g. 10M between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50K - 50M. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 */
 
CapacitiveSensor   cs_4_2 = CapacitiveSensor(4,2);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired

void setup() {
   cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
   Serial.begin(9600);
}

void loop() {
  
    long total =  cs_4_2.capacitiveSensor(10);

    Serial.print(total);                  // print sensor output 1
    Serial.print("     "); 
    delay(500);                             // arbitrary delay to limit data to serial port 
    
    if (total < 30) {
      analogWrite(6, 0);
      Serial.println("hello");
    } else if (total > 30 && total < 100) {
      analogWrite(6, 50);
      Serial.println("it's very nice to meet you");
    } else {
      Serial.println("you are invading my personal space");
      analogWrite(6, 255);
    }
    
}
