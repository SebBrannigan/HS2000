/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 hes the LED on Teensy 2.0
// Pin 6 hes the LED on Teensy++ 2.0
// give it a name:
int led = 13;

//int sdelay = 1000;
//int odelay = 250;

int sos[2] = {250,1000};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  
  digitalWrite(led, HIGH);
    delay(sos[1000]);               // wait for a second

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
