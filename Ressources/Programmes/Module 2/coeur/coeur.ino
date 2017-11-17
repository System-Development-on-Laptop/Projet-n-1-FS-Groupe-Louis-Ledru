void setup() {
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);
pinMode(A4,OUTPUT);
pinMode(A5,OUTPUT);

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

}

void loop()
{
  /* toutes les leds en même temps*/
digitalWrite(A1,HIGH);
digitalWrite(A2,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(A5,HIGH);

digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);

delay(1000);

digitalWrite(A1,LOW);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,LOW);
digitalWrite(A5,LOW);

digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);

delay(3000);


/* 1 Leds sur 2 */

digitalWrite(A1,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(3,HIGH);
digitalWrite(5,HIGH);

delay(1000);

digitalWrite(A2,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(2,HIGH);
digitalWrite(4,HIGH);
digitalWrite(6,HIGH);

digitalWrite(A1,LOW);
digitalWrite(A3,LOW);
digitalWrite(A5,LOW);
digitalWrite(3,LOW);
digitalWrite(5,LOW);

delay(1000);


digitalWrite(A1,LOW);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,LOW);
digitalWrite(A5,LOW);

digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);

delay(3000);

/* chenillard */

digitalWrite(A1,HIGH);
delay(100);
digitalWrite(A1,LOW);

digitalWrite(A2,HIGH);
delay(100);
digitalWrite(A2,LOW);

digitalWrite(A3,HIGH);
delay(100);
digitalWrite(A3,LOW);

digitalWrite(A4,HIGH);
delay(100);
digitalWrite(A4,LOW);

digitalWrite(A5,HIGH);
delay(100);
digitalWrite(A5,LOW);

digitalWrite(2,HIGH);
delay(100);
digitalWrite(2,LOW);

digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);

digitalWrite(4,HIGH);
delay(100);
digitalWrite(4,LOW);

digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);

digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
delay(3000);

digitalWrite(A1,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(3,HIGH);

delay(1000);

digitalWrite(A1,LOW);
digitalWrite(A4,LOW);
digitalWrite(3,LOW);


delay(3000);



}
