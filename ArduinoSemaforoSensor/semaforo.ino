const int trigPin = 9;
const int echoPin = 10;
const int ledVermelho = 3;
const int ledVerde = 4;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duracao = pulseIn(echoPin, HIGH);
  float distancia = duracao * 0.034 / 2;

  Serial.print("Distância: ");
  Serial.println(distancia);

  if (distancia < 10.0) {
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
  } else {
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
  }

  delay(200);
}
