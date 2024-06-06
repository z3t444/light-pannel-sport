const int lampuMerah2Pin = 2;
const int lampuMerah3Pin = 3;
const int lampuMerah4Pin = 4;
const int lampuMerah5Pin = 5;
const int lampuHijau8Pin = 8;
const int buzzerAudio9Pin = 9;

void setup() {
  pinMode(lampuMerah2Pin, OUTPUT);
  pinMode(lampuMerah3Pin, OUTPUT);
  pinMode(lampuMerah4Pin, OUTPUT);
  pinMode(lampuMerah5Pin, OUTPUT);
  pinMode(lampuHijau8Pin, OUTPUT);
  pinMode(buzzerAudio9Pin, OUTPUT);
}

void loop() {
  digitalWrite(lampuMerah2Pin, HIGH);
  tone(buzzerAudio9Pin, 400);
  delay(400);
  noTone(buzzerAudio9Pin);
  digitalWrite(lampuMerah2Pin, LOW);

  delay(1000);

  digitalWrite(lampuMerah3Pin, HIGH);
  tone(buzzerAudio9Pin, 400);
  delay(400);
  noTone(buzzerAudio9Pin);
  digitalWrite(lampuMerah3Pin, LOW);

  delay(1000);

  digitalWrite(lampuMerah4Pin, HIGH);
  tone(buzzerAudio9Pin, 400);
  delay(400);
  noTone(buzzerAudio9Pin);
  digitalWrite(lampuMerah4Pin, LOW);

  delay(1000);

  digitalWrite(lampuMerah5Pin, HIGH);
  tone(buzzerAudio9Pin, 400);
  delay(400);
  noTone(buzzerAudio9Pin);
  digitalWrite(lampuMerah5Pin, LOW);

delay(1000);

  digitalWrite(lampuHijau8Pin, HIGH);
  tone(buzzerAudio9Pin, 1600);
  delay(2000);
  noTone(buzzerAudio9Pin);
  digitalWrite(lampuHijau8Pin, LOW);

  while (true) {

  }
}
