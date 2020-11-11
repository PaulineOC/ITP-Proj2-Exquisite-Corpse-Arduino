void setup() {
  // configure the serial connection:
  Serial.begin(9600);
  // configure the digital input:
  pinMode(7, INPUT);
  pinMode(8, INPUT);
}

void loop() {


  int player1X = analogRead(A3);
  Serial.print(player1X);
  Serial.print(",");
  int player1Y = analogRead(A4);
  Serial.print(player1Y);
  Serial.print(",");
  //P1 Button
  int player1Button = digitalRead(7);
  Serial.print(!player1Button);
  Serial.print(",");
  Serial.println("P1");

  int player2X = analogRead(A0);
  Serial.print(player2X);
  Serial.print(",");
  int player2Y = analogRead(A1);
  Serial.print(player2Y);
  Serial.print(",");
  //P2 Button
  int player2Button = digitalRead(8);
  Serial.print(player2Button);
  Serial.print(",");
  Serial.println("P2");
  delay(100);
}
