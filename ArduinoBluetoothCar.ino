#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(10, 11); // RX, TX

int izqA = 5;
int izqB = 6;
int derA = 8;
int derB = 9;
int vel = 255; // Velocidad de los motores (0-255)
int gelenVeri = '7'; // inicia detenido

void setup() {
  Bluetooth.begin(9600);
  Serial.begin(9600);  //Bluetooth için bu porta ile connection veriyoruz
  Serial.println("Waiting for command...");
  pinMode(derA, OUTPUT);
  pinMode(derB, OUTPUT);
  pinMode(izqA, OUTPUT);
  pinMode(izqB, OUTPUT);
}

void loop() {

  if (Bluetooth.available()) { //bluetooth bağlanmışsa
    gelenVeri = Bluetooth.read();
 

  if (gelenVeri == '1') { // sag
    analogWrite(derB, 0);
    analogWrite(izqB, 0);
    analogWrite(derA, vel);
    analogWrite(izqA, vel);
  }
  if (gelenVeri == '2') { // ileri
    analogWrite(derB, vel);
    analogWrite(izqB, 0);
    analogWrite(derA, 0);
    analogWrite(izqA, vel);
  }
  if (gelenVeri == '3') { // Stop
    analogWrite(derB, 0);
    analogWrite(izqB, 0);
    analogWrite(derA, 0);
    analogWrite(izqA, 0);
  }
  if (gelenVeri == '4') { // geri
    analogWrite(derB, 0);
    analogWrite(izqB, vel);
    analogWrite(izqA, 0);
    analogWrite(derA, vel);
  }

  if (gelenVeri == '5') { // sol
    analogWrite(derA, 0);
    analogWrite(izqA, 0);
    analogWrite(derB, vel);
    analogWrite(izqB, vel);
  }
  if (gelenVeri == '6') { 

  }
  if (gelenVeri == '7') {

  }
}
}
