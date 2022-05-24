int firstLight[]={13,12,11};
int secondLight[]={7,6,5};
int delayT=7000;


void setup() {
for(int i=0;i<3;i++){
  pinMode(firstLight[i],OUTPUT);
}
for(int i=0;i<3;i++){
  pinMode(secondLight[i],OUTPUT);
}
}

void loop() {
  digitalWrite(secondLight[0],LOW);
  digitalWrite(secondLight[1],LOW);
  digitalWrite(secondLight[2],HIGH);
  
  digitalWrite(firstLight[0],HIGH);
  digitalWrite(firstLight[1],LOW);
  digitalWrite(firstLight[2],LOW);
  
delay(delayT);
   digitalWrite(secondLight[1],HIGH);
  digitalWrite(secondLight[2],LOW);
 
  
  digitalWrite(firstLight[1],HIGH);
 
delay(delayT/3);
    digitalWrite(secondLight[0],HIGH);
    digitalWrite(secondLight[1],LOW);
    
  digitalWrite(firstLight[0],LOW);
  digitalWrite(firstLight[1],LOW);
  digitalWrite(firstLight[2],HIGH);
 
delay(delayT);
 digitalWrite(secondLight[1],HIGH);
 delay(delayT/3);


  
}
