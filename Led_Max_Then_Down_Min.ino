void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  for(int i = 2 ; i < 9;i++){
    digitalWrite(i, HIGH);
    
  }

}
void loop(){
  delay(1000);
  for(int i = 8 ; i>0;i--){
    digitalWrite(i, LOW);
    delay(1000);
  }
  for(int i = 0 ; i < 9;i++){
    digitalWrite(i, HIGH);
    delay(1000);
  }

}