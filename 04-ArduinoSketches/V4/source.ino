int Leds[] = {2,3,4,5,6,7,8,9,10};
int Levels[] = {13,12,11};
int Edge[] = {0,1,2,5,8,7,6,3};
int Snake[] = {6,3,0,1,4,7,8,5,2};

int interval = 30;

void DrawEdge () {
  for (int column = 0; column < 8; column++) {
    digitalWrite(Leds[Edge[column]], HIGH);   // turn ON the LED on column 0
    digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
    digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
    digitalWrite(Levels[2], HIGH);   // turn ON the LED on Level 2
    delay(interval);               // wait for a second
    digitalWrite(Leds[Edge[column]], LOW);   // turn OFF the LED on (HIGH is the voltage level)
    digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
    digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
    digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
    delay(interval);               // wait for a second
  }

}

void DrawSnake() {
  for (int column = 0; column < 9; column++) {
    digitalWrite(Leds[Snake[column]], HIGH);   // turn ON the LEDs on columns 0-9
    digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
    digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
    digitalWrite(Levels[2], HIGH);   // turn ON the LED on Level 2
    delay(interval);               // wait for a second
    digitalWrite(Leds[Snake[column]], LOW);   // turn OFF the LEDs on columns 0-9(HIGH is the voltage level)
    digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
    digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
    digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
    delay(interval);               // wait for a second
  }
}

void DrawFloors() {
  for (int column = 0; column < 9; column++) {
    digitalWrite(Leds[Snake[column]], HIGH);   // turn ON the LEDs on columns 0-9
  }

  for (int level = 0; level < 3; level++) {
    switch (level) {
    case 0:
      digitalWrite(Levels[0], HIGH);   // turn ON the LED on Level 0
      digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
      digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
      delay(interval*10);               // wait for a second
      break;
    case 1:
      digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
      digitalWrite(Levels[1], HIGH);   // turn ON the LED on Level 1
      digitalWrite(Levels[2], LOW);   // turn OFF the LED on Level 2
      delay(interval*10);               // wait for a second
      break;
    case 2:
      digitalWrite(Levels[0], LOW);   // turn OFF the LED on Level 0
      digitalWrite(Levels[1], LOW);   // turn OFF the LED on Level 1
      digitalWrite(Levels[2], HIGH);   // turn on the LED on Level 2
      delay(interval*10);               // wait for a second
      break;
    default:
      break;
    }
  }
}

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for (int i = 0; i < 9 ; i++) {
     pinMode(Leds[i], OUTPUT);   
  }
  
  for (int i = 0; i < 3 ; i++) {
     pinMode(Levels[i], OUTPUT);   
  }
     
}

// the loop routine runs over and over again forever:
void loop() {
  
  DrawFloors ();

}
