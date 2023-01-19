const unsigned int displayPins[] = {10,9,8,7,6,5,4,3};
const unsigned int delayTime = 1500;
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
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 8; j++){
      digitalWrite(displayPins[j],pinStates[i][j]);
    }
    delay(delayTime);
  }

}

