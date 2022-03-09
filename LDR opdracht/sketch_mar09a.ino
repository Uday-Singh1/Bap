// A0 is de inputpin voor de lichtgevoelige weerstand LDR 
// A0 is een analoge ingang
int LDR_In = A0; // de spanningsdeler wordt aangesloten op A0

// variable lichtHoeveelheid
int lichtHoeveelheid;
int hoogsteLDR = 1000;
int laagsteLDR = 400;

uint8_t Led1 = D3;
uint8_t Led2 = D5;
uint8_t Led3 = D6;

/*
 * 70 % is 0.7 * hoosgte LDR
 * 
 */


int Hoog1 = (0.75 * hoogsteLDR); 
int Hoog2 = (0.50 * hoogsteLDR); 
int Hoog3 = (0.25 * hoogsteLDR); 

void setup() {
  Serial.begin(9600); // start de serial monitor 9600 Baud
  pinMode (Led1,OUTPUT);
  pinMode (Led2,OUTPUT);
  pinMode (Led3,OUTPUT);
}

void loop() {
  // lees de input waarde van de LDR
  lichtHoeveelheid = analogRead(LDR_In);

  // schrijf de waarde naar de Serial Monitor
 Serial.println(lichtHoeveelheid);

  if ( lichtHoeveelheid < Hoog1){
    digitalWrite(Led1,HIGH);
  }
  else{
    digitalWrite(Led1,LOW);
  }

  if ( lichtHoeveelheid < Hoog2){
    digitalWrite(Led2,HIGH);
  }
  else{
    digitalWrite(Led2,LOW);
  }

  if ( lichtHoeveelheid < Hoog3){
    digitalWrite(Led3,HIGH);
  }
  else{
    digitalWrite(Led3,LOW);
  }



  delay(1000);
}
