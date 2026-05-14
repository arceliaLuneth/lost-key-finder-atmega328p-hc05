int led = 8;
int buzzer = 9;
int btState = 7;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(btState, INPUT);

  digitalWrite(led, LOW);
  noTone(buzzer);
}

void loop() {
  if (digitalRead(btState) == HIGH) {
    digitalWrite(led, LOW);
    noTone(buzzer);
  } else {
    digitalWrite(led, HIGH);
    tone(buzzer, 1000);
  }
}
