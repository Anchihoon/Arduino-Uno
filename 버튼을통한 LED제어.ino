int buttonPin = 4; //버튼이 연결된 핀번호
int ledPin = 13;    //LED가 연결된 핀번호
int buttonState = 0; //입력핀의 상태를 임의의 변수로 지정
void setup() {
  pinMode(ledPin, OUTPUT);    //LED를 출력모드로
  pinMode(buttonPin, INPUT);  //버튼을 입력모드로
}
void loop(){
  buttonState = digitalRead(buttonPin);  //입력 값을 읽고 저장
  // 버튼이 눌렸는지 확인, 버튼이 눌렸으면 입력핀의 상태는 HIGH가 됨
   if (buttonState == HIGH) { 
     digitalWrite(ledPin, HIGH); //LED 켬
   } 
   else {
     digitalWrite(ledPin, LOW); //LED 끔
   }
}