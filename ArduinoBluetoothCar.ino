/*
Author: Danny van den Brande. Arduinosensors.nl, BlueCore Tech.
This code is written as example for my Serial Monitor APP on Google Play.
The app simply displays any value or text on your android smartphone.
 */

void setup() {
  Serial.begin(9600);
  Serial.println("BlueCore Tech Serial Monitor APP for Arduino");
  delay(2500);
  

}

void loop() {

  Serial.println("0");
  Serial.println("1");
  Serial.println("0");
  Serial.println("0");
  Serial.println("1");
  Serial.println("0");
  Serial.println("1");
  Serial.println("1");
  Serial.println("Created by: Danny van den Brande ");
  
}
