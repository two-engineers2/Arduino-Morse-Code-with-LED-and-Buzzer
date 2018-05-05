int led = 13; //variable for LED pin
int buzzer = 9; //variable for buzzer pin

int unit = 200; //variable for delay of 1 unit in milliseconds
int tonefreq = 262; //freq in Hertz
//this note has 262 vibrations per second, also know as "middle C"

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //S
    //dot
    digitalWrite(led, HIGH);
    tone(buzzer, tonefreq);
    delay(unit);
    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(unit);
    //dot
    digitalWrite(led, HIGH);
    tone(buzzer, tonefreq);
    delay(unit);
    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(unit);
    //dot
    digitalWrite(led, HIGH);
    tone(buzzer, tonefreq);
    delay(unit);
    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(unit*3);
  //O
    //dash
    digitalWrite(led, HIGH);
    tone(buzzer, tonefreq);
    delay(unit*3);
    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(unit);
    //dash
    digitalWrite(led, HIGH);
    tone(buzzer, tonefreq);
    delay(unit*3);
    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(unit);
    //dash
    digitalWrite(led, HIGH);
    tone(buzzer, tonefreq);
    delay(unit*3);
    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(unit*3);
  //S
    //dot
    digitalWrite(led, HIGH);
    tone(buzzer, tonefreq);
    delay(unit);
    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(unit);
    //dot
    digitalWrite(led, HIGH);
    tone(buzzer, tonefreq);
    delay(unit);
    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(unit);
    //dot
    digitalWrite(led, HIGH);
    tone(buzzer, tonefreq);
    delay(unit);
    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(unit*7);

}
