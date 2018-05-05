int led = 13; //variable for LED pin
int unit = 200; //variable for delay of 1 unit in milliseconds

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //S
    //dot
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit);
    //dot
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit);
    //dot
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit*3);
  //O
    //dash
    digitalWrite(led, HIGH);
    delay(unit*3);
    digitalWrite(led, LOW);
    delay(unit);
    //dash
    digitalWrite(led, HIGH);
    delay(unit*3);
    digitalWrite(led, LOW);
    delay(unit);
    //dash
    digitalWrite(led, HIGH);
    delay(unit*3);
    digitalWrite(led, LOW);
    delay(unit*3);
  //S
    //dot
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit);
    //dot
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit);
    //dot
    digitalWrite(led, HIGH);
    delay(unit);
    digitalWrite(led, LOW);
    delay(unit*7);

}
