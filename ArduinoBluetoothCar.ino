#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(3, 4);

int izqA = 5; 
int izqB = 6; 
int derA = 8; 
int derB = 9; 
int deger = 255;

int data = '3';

void setup() { 
Bluetooth.begin(9600);   
Serial.begin(9600);
Serial.println("Waiting for command...");
Bluetooth.println("Send 1 to turn on the LED. Send 0 to turn Off");
pinMode(derA, OUTPUT);
pinMode(derB, OUTPUT);
pinMode(izqA, OUTPUT);
pinMode(izqB, OUTPUT);

pinMode(LED_BUILTIN, OUTPUT);

} 

void loop() {

    if(Bluetooth.available())
        { data=Bluetooth.read();
        }

if(data == '1') {//ileri
analogWrite(derB, 0); 
analogWrite(izqB, deger); 
analogWrite(derA, deger); 
analogWrite(izqA, 0);

}else if(data == '2'){
analogWrite(derB, 0); 
analogWrite(izqB, 0); 
analogWrite(derA, deger); 
analogWrite(izqA, deger);

}else if(data == '3'){
analogWrite(derB, 0); 
analogWrite(izqB, 0); 
analogWrite(derA, 0); 
analogWrite(izqA, 0); 

}else if(data == '4'){
analogWrite(derB, deger); 
analogWrite(izqB, deger); 
analogWrite(derA, 0); 
analogWrite(izqA, 0); 

}else if(data == '5'){
analogWrite(derB, deger); 
analogWrite(izqB, 0); 
analogWrite(derA, 0); 
analogWrite(izqA, deger); 

}
    
}
