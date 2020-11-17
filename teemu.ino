/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
#define LED1 3
#define LED2 4
#define LED3 5
#define LED4 6
#define LED5 7
#define Y HIGH
#define N LOW
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}
int viive = 100;

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED1, N);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED1, Y);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second

  digitalWrite(LED2, N);   // turn the LED on (HIGH is the voltage level)
  delay(150);                       // wait for a second
  digitalWrite(LED2, Y);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second

  digitalWrite(LED3, N);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED3, Y);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second

  digitalWrite(LED4, N);   // turn the LED on (HIGH is the voltage level)
  delay(150);                       // wait for a second
  digitalWrite(LED4, Y);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second

  digitalWrite(LED5, N);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED5, Y);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second

  digitalWrite(LED4, N);   // turn the LED on (HIGH is the voltage level)
  delay(150);                       // wait for a second
  digitalWrite(LED4, Y);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second

  digitalWrite(LED3, N);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED3, Y);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second

  digitalWrite(LED2, N);   // turn the LED on (HIGH is the voltage level)
  delay(150);                       // wait for a second
  digitalWrite(LED2, Y);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second

  
}
