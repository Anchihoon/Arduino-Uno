int led1 = 5;   // LED를 PWM 5번에 연결
int led2 = 11; // LED를 PWM 11번에 연결
void setup() {
  pinMode(led1, OUTPUT); // 핀을 출력으로 설정
  pinMode(led2, OUTPUT); // 핀을 출력으로 설정
}
void loop() {
  analogWrite(led1, 10);   // analogWrite 값은 0부터 255까지
  analogWrite(led2, 255); // analogWrite 값은 0부터 255까지
}
