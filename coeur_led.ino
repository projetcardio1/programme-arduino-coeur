void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}
void loop(){
  double bpm = 60;
for(int a = 2; a<11; a++){
  digitalWrite(a, HIGH);
}
  delay(30000/bpm); 
  for(int a = 2; a<11; a++){
    digitalWrite(a, LOW);
  }
  delay(30000/bpm);
  
  }
