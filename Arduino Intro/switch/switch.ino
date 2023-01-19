const unsigned int switchPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(switchPin) == HIGH){
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }

}
