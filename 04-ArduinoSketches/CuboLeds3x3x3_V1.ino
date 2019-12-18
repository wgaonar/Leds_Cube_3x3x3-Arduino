int Leds[] = {2,3,4,5,6,7,8,9,10};
int Levels[] = {13,12,11};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for (int i = 0; i < 9 ; i++)
  {
     pinMode(Leds[i], OUTPUT);   
  }
  
  for (int i = 0; i < 3 ; i++)
  {
     pinMode(Levels[i], OUTPUT);   
  }
     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(Leds[0], HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Levels[2], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(Leds[0], LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Levels[2], LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second

  digitalWrite(Leds[1], HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Levels[2], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(Leds[1], LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Levels[2], LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second

  digitalWrite(Leds[4], HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Levels[2], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(Leds[4], LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Levels[2], LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second

  digitalWrite(Leds[7], HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Levels[2], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(Leds[7], LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Levels[2], LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
}
