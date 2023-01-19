const unsigned int ledPin1 = 13;
const unsigned int ledPin2 = 12;

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
}

void loop()
{
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(1000);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, LOW);
    delay(1000);
}