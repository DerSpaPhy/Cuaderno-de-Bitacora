void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
void apagar(){
  for (int x=1; x<=13; x++){
    digitalWrite(x,0);
  }
}
void loop() {
   for (int y=1; y<=9; y++){
     int randNumber = 0;
   randNumber = random(1,9);
   digitalWrite(randNumber,1);
   for (int x=13; x>=11; x--){
      digitalWrite(x,1);
      delay(100);
      digitalWrite(x,0);     
}
apagar();
}
apagar();
}


