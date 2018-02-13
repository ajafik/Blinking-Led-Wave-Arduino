/*
Knight Rider/ Blinking Led Wave
27th of Jan., 2015
@ajafik
*/

int delayTime  = 500;

void setup(){
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);

}

void loop(){
  
  //======LINEAR FLOW============
  digitalWrite(2, HIGH);
delay(delayTime);
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
delay(delayTime);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
delay(delayTime);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
delay(delayTime);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
delay(delayTime);
digitalWrite(6, LOW);
delay(delayTime);
digitalWrite(6, HIGH);
delay(delayTime);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
delay(delayTime);
digitalWrite(6, HIGH);
digitalWrite(5, LOW);
delay(delayTime);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
delay(delayTime);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
delay(delayTime);
digitalWrite(3, LOW);


//=======WITH FOR LOOP=======
for(int i=2; i<7; i++)
{
digitalWrite(i,HIGH);
delay(delayTime);
digitalWrite(i,LOW);
delay(delayTime);
}//Forward
for(int i=6; i>=2; i--)
{
digitalWrite(i,HIGH);
delay(delayTime);
digitalWrite(i,LOW);
delay(delayTime);
}//Backward



}

