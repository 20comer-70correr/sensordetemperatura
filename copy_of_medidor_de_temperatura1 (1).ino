//temperature sensor (LM35) controlled LED
int tempsensor = 0;
int LED1 = 3;
int LED2= 4;
int LED3 = 5;
int LED4= 6;
int L-ED5 = 7;
int LED6 = 8;
int LED7 = 9;
int LED8= 10;
int LED9 = 11;
int LED10= 12;
void setup()
{
Serial.begin(9600);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);
pinMode(LED6,OUTPUT);
pinMode(LED7,OUTPUT);
pinMode(LED8,OUTPUT);
pinMode(LED9,OUTPUT);
pinMode(LED10,OUTPUT);
}
void loop()
{
tempsensor=analogRead(0);
if(tempsensor<=2)
{
digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
digitalWrite(LED5,LOW);
digitalWrite(LED6,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED9,LOW);
digitalWrite(LED10,LOW);
}
  else if(tempsensor>=3&&tempsensor<20)
  {
digitalWrite(LED1,HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
digitalWrite(LED5,LOW);
digitalWrite(LED6,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED9,LOW);
digitalWrite(LED10,LOW);
}
    
else if(tempsensor>=21&&tempsensor<59)
{
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
digitalWrite(LED5,LOW);
digitalWrite(LED6,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED9,LOW);
digitalWrite(LED10,LOW);
}
else if(tempsensor>=59&&tempsensor<105)
{
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,LOW);
digitalWrite(LED6,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED9,LOW);
digitalWrite(LED10,LOW);
}
else if(tempsensor>=105&&tempsensor<165)
{
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,HIGH);
digitalWrite(LED6,HIGH);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED9,LOW);
digitalWrite(LED10,LOW);
}
else if(tempsensor>=165&&tempsensor<180)
{
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,HIGH);
digitalWrite(LED6,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED9,LOW);
digitalWrite(LED10,LOW);
}
else if(tempsensor>=180&&tempsensor<200)
{
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,HIGH);
digitalWrite(LED6,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED9,HIGH);
digitalWrite(LED10,LOW);
}
else if(tempsensor>200)
{
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,HIGH);
digitalWrite(LED6,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED9,HIGH);
digitalWrite(LED10,HIGH);
}
Serial.println(tempsensor);
delay(150);
}