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
void apagar() {
  for(int z=1; z<=9; z++){
    digitalWrite(z, LOW);
  }
}
void apagartodo() {
  for(int z=1; z<=13; z++){
    digitalWrite(z, LOW);
  }
}

void loop() {
  for (int x=11; x<=13; x++){
    for (int y=1; y<=9; y++){
    
    digitalWrite(x, 1);
    digitalWrite(y, 1);
    delay(50);  
    }
    digitalWrite(x, 0);
    apagar();
    }
apagartodo();
for (int x=13; x>=11; x--){
    for (int y=9; y>=1; y--){
    
    digitalWrite(x, 1);
    digitalWrite(y, 1);
    delay(50);  
    }
    digitalWrite(x, 0);
    apagar();
    }
}
