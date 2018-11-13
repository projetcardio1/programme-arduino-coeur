int led;

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
  Serial.begin(9600);
  Serial.println("Veuillez saisir le numéro de la led a allumer");
  led = 0;
}

void loop() {
 //led = Serial.read();
 led = (led + 1) %15;
 Serial.println(led);
   digitalWrite(led, HIGH);
  delay(2000);
digitalWrite(led, LOW);
}
