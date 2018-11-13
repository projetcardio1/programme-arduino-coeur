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
  pinMode(11, OUTPUT);
}

void loop() {
int i = 2;
while (i != 14)
{
digitalWrite(i, HIGH);
i = i + 2;
}
delay(1000);
int a = 2;
while (a != 12){
  digitalWrite(a, LOW);
  a++;
}
delay(1000);
}
