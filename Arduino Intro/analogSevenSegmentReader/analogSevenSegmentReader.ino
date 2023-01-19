const unsigned int displayPins[] = {10,9,8,7,6,5,4,3};
const unsigned int potPin = A5;
const unsigned int pinStates[10][8] = {{LOW,LOW,LOW,LOW,HIGH,LOW,HIGH,HIGH},
                                      {LOW,LOW,LOW,LOW,HIGH,LOW,LOW,LOW},
                                      {LOW,LOW,HIGH,HIGH,HIGH,LOW,HIGH,HIGH},
                                      {HIGH,HIGH,LOW,LOW,HIGH,LOW,LOW,LOW},
                                      {HIGH,LOW,LOW,LOW,HIGH,LOW,LOW,HIGH},
                                      {LOW,HIGH,LOW,LOW,HIGH,LOW,HIGH,HIGH},
                                      {LOW,LOW,HIGH,LOW,HIGH,LOW,LOW,HIGH},
                                      {LOW,LOW,HIGH,LOW,HIGH,HIGH,LOW,LOW},
                                      {LOW,HIGH,HIGH,HIGH,HIGH,LOW,HIGH,HIGH},
                                      {LOW,LOW,LOW,HIGH,HIGH,LOW,LOW,LOW}};

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 10; i++){
    pinMode(displayPins[i], OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  int num = analogRead(potPin)/115;
  for(int i = 0; i < 8; i++){
    digitalWrite(displayPins[i],pinStates[num][i]);
  }
}
