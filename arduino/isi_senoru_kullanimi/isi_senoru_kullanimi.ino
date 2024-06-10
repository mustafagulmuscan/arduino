void setup() {
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  int isi=0;
  isi=analogRead(A0);
  isi=(isi*500)/1023;
  if(isi>15)
  {
      digitalWrite(13, HIGH);
  }
  else
  {
      digitalWrite(13, LOW);
  }

}
