int Led = 13;
int Tombol = 2;
boolean LedOn = false;

void setup() {
  pinMode(Led, OUTPUT);
  pinMode(Tombol, INPUT_PULLUP);
}

void loop() {
  int kondisi = digitalRead(Tombol);

  if(kondisi==LOW)
  {
    delay(50);
    LedOn =! LedOn;
    digitalWrite(Led, LedOn);
  }
  
}
