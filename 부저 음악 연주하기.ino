// 봄 나들이 스케치
int myNote[]={784, 659, 784, 659, 784, 880, 659}; 
int myDu[]={250, 250, 250, 250, 250, 250, 500};
void setup() {
  for (int i = 0; i < 7; i++) {
  tone(3, myNote[i], myDu[i]); //핀 번호 확인
  delay(myDu[i]*1.3);
  noTone(3);
  }
}
void loop() { 
}
