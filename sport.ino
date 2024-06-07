const int lampuMerah1Pin = 1;
const int lampuMerah3Pin = 3;
const int lampuMerah5Pin = 5;
const int lampuMerah7Pin = 7;
const int lampuHijau9Pin = 9;
const int buzzerAudio11Pin = 11;

void setup()
{
  pinMode(lampuMerah1Pin, OUTPUT);
  pinMode(lampuMerah3Pin, OUTPUT);
  pinMode(lampuMerah5Pin, OUTPUT);
  pinMode(lampuMerah7Pin, OUTPUT);
  pinMode(lampuHijau9Pin, OUTPUT);
  pinMode(buzzerAudio11Pin, OUTPUT);
}

void loop()
{
  digitalWrite(lampuMerah1Pin, HIGH);
  tone(buzzerAudio11Pin, 400);
  delay(400);
  noTone(buzzerAudio11Pin);
  digitalWrite(lampuMerah1Pin, HIGH);

  delay(600);

  digitalWrite(lampuMerah3Pin, HIGH);
  tone(buzzerAudio11Pin, 400);
  delay(400);
  noTone(buzzerAudio11Pin);
  digitalWrite(lampuMerah3Pin, HIGH);

  delay(600);

  digitalWrite(lampuMerah5Pin, HIGH);
  tone(buzzerAudio11Pin, 400);
  delay(400);
  noTone(buzzerAudio11Pin);
  digitalWrite(lampuMerah5Pin, HIGH);

  delay(600);

  digitalWrite(lampuMerah7Pin, HIGH);
  tone(buzzerAudio11Pin, 400);
  delay(400);
  noTone(buzzerAudio11Pin);
  digitalWrite(lampuMerah7Pin, HIGH);

  delay(600);

  digitalWrite(lampuHijau9Pin, HIGH);
  tone(buzzerAudio11Pin, 1200);
  delay(2000);
  noTone(buzzerAudio11Pin);
  digitalWrite(lampuHijau9Pin, HIGH);

  digitalWrite(lampuHijau1Pin, LOW);
  digitalWrite(lampuHijau3Pin, LOW);
  digitalWrite(lampuHijau5Pin, LOW);
  digitalWrite(lampuHijau7Pin, LOW);
  digitalWrite(lampuHijau9Pin, LOW);

  while (true)
  {
  }
}