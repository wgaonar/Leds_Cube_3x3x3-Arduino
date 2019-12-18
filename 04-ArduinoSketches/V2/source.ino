int Leds[] = {2,3,4,5,6,7,8,9,10};
int Levels[] = {13,12,11};

int interval = 50;

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
  digitalWrite(Leds[0], HIGH);   // turn ON the LED on column 0
  digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
  digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
  digitalWrite(Levels[2], HIGH);   // turn ON the LED on Level 2
  delay(interval);               // wait for a second
  digitalWrite(Leds[0], LOW);   // turn OFF the LED on (HIGH is the voltage level)
  digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
  digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
  digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
  delay(interval);               // wait for a second

  digitalWrite(Leds[1], HIGH);   // turn ON the LED on column 0
  digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
  digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
  digitalWrite(Levels[2], HIGH);   // turn ON the LED on Level 2
  delay(interval);               // wait for a second
  digitalWrite(Leds[1], LOW);   // turn OFF the LED on (HIGH is the voltage level)
  digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
  digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
  digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
  delay(interval);               // wait for a second

  digitalWrite(Leds[2], HIGH);   // turn ON the LED on column 0
  digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
  digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
  digitalWrite(Levels[2], HIGH);   // turn ON the LED on Level 2
  delay(interval);               // wait for a second
  digitalWrite(Leds[2], LOW);   // turn OFF the LED on (HIGH is the voltage level)
  digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
  digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
  digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
  delay(interval);               // wait for a second

  digitalWrite(Leds[5], HIGH);   // turn ON the LED on column 0
  digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
  digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
  digitalWrite(Levels[2], HIGH);   // turn ON the LED on Level 2
  delay(interval);               // wait for a second
  digitalWrite(Leds[5], LOW);   // turn OFF the LED on (HIGH is the voltage level)
  digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
  digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
  digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
  delay(interval);               // wait for a second

  digitalWrite(Leds[8], HIGH);   // turn ON the LED on column 0
  digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
  digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
  digitalWrite(Levels[2], HIGH);   // turn ON the LED on Level 2
  delay(interval);               // wait for a second
  digitalWrite(Leds[8], LOW);   // turn OFF the LED on (HIGH is the voltage level)
  digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
  digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
  digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
  delay(interval);

  digitalWrite(Leds[7], HIGH);   // turn ON the LED on column 0
  digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
  digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
  digitalWrite(Levels[2], HIGH);   // turn ON the LED on Level 2
  delay(interval);               // wait for a second
  digitalWrite(Leds[7], LOW);   // turn OFF the LED on (HIGH is the voltage level)
  digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
  digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
  digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
  delay(interval);

  digitalWrite(Leds[6], HIGH);   // turn ON the LED on column 0
  digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
  digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
  digitalWrite(Levels[2], HIGH);   // turn ON the LED on Level 2
  delay(interval);               // wait for a second
  digitalWrite(Leds[6], LOW);   // turn OFF the LED on (HIGH is the voltage level)
  digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
  digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
  digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
  delay(interval);

  digitalWrite(Leds[3], HIGH);   // turn ON the LED on column 0
  digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
  digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
  digitalWrite(Levels[2], HIGH);   // turn ON the LED on Level 2
  delay(interval);               // wait for a second
  digitalWrite(Leds[3], LOW);   // turn OFF the LED on (HIGH is the voltage level)
  digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
  digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
  digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
  delay(interval);


}
