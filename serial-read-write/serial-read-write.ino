int ledpin = 5;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledpin, OUTPUT);
//  Serial.flush();
}
bool x = false;
byte bytey = 0;
void loop() {
  //  if (Serial.available() > 0) {
  //    // read the incoming byte:
  //    byte bytex = Serial.read();
  //
  //    // say what you got:
  //    if (bytex != bytey && bytex != 10) {
  //      x = !x ;
  //    }
  //    Serial.print("I received: \n");
  //  //  Serial.println(bytex, DEC);
  //  }
  if (x == true) {
    digitalWrite(ledpin, LOW);
    x = false;
  } else {
    digitalWrite(ledpin, HIGH);
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(500);
    digitalWrite(ledpin, HIGH);
    x = true;
  }
  // digitalWrite(ledpin,LOW);
  delay(1000);
  //  digitalWrite(ledpin,HIGH);
  //  delay(1000);
  // put your main code here, to run repeatedly:

}
