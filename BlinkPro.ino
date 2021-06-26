/********************
 * Program: Blink
 * Description: Turns on an LED on for one second, then off for one second, repeatedly.
 * This example code is in the public domain.
 ********************/

// Pin 13 has an LED connected on most Arduino boards.
int green = 6;
int led10 = 10;
int led9 = 9;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(green, OUTPUT);   
  pinMode(led10, OUTPUT); 
  pinMode(led9, OUTPUT);  
   
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(green, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);               // wait for a second
  digitalWrite(green, LOW);    // turn the LED off by making the voltage LOW
  delay(0);               // wait for a second

  digitalWrite(led10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led10, LOW);    // turn the LED off by making the voltage LOW
  delay(0);               // wait for a second

  digitalWrite(led9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);               // wait for a second
  digitalWrite(led9, LOW);    // turn the LED off by making the voltage LOW
  delay(0);               // wait for a second
}