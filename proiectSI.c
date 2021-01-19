#define trigpin 6 
#define echopin 5

#define R 7

#define G 8

#define B 9

void setup()

 {  
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT); 
   pinMode(echopin,INPUT);
   pinMode(R,OUTPUT);
   pinMode(G,OUTPUT);
   pinMode(B,OUTPUT);
   
   

}
void loop() 

{
  
  int duration, distance;
  digitalWrite(trigpin,HIGH);
  _delay_ms(1000);
  digitalWrite(trigpin, LOW);
  
  duration=pulseIn(echopin,HIGH);
  distance=(duration/2)/29.1; 
  
  if(distance > 0 && distance <= 20){
    digitalWrite(G,LOW);
    digitalWrite(B,LOW)
     _delay_ms(500);
    digitalWrite(R,HIGH);
  _delay_ms(500);
  }
  else if(distance > 20 && distance <= 80){
        digitalWrite(R,LOW);
         digitalWrite(G,LOW);
         _delay_ms(500);
    digitalWrite(B,HIGH);
    
      }
      
       else if(distance > 80 && distance <= 120 ){
        digitalWrite(R,LOW);
        digitalWrite(B,LOW);
         _delay_ms(500);
    digitalWrite(G,HIGH);
      }
   Serial.print("cm");
  Serial.println(distance);
  _delay_ms(100);
}