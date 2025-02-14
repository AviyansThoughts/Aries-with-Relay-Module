// Welcome to Aviyan's Thoughts

const int RelayIN1 = 3;

void setup() {
  pinMode(RelayIN1, OUTPUT);
}

void loop() {
  digitalWrite(RelayIN1, HIGH);
  delay(1000);
  digitalWrite(RelayIN1, LOW);
  delay(1000);
}