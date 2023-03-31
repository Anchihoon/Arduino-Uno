int led=2, led2=4, led3=6;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led2, OUTPUT);  //3개의 LED를 출력상태로
}

void loop() {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led4,HIGH); 
  delay(1000);             //1000ms = 1초 딜레이
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  delay(1000);
}