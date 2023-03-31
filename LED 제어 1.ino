void set up() {
    pinMode(LED_BUILTIN,OUTPUT); //13번 핀을 출력모드로 설정
}

void loop() {
   digitalWrite(LED_BUILTIN,HIGH); //13번핀에 5V공급
   delay(1000);                    //명령어가 실행되는지 명확하게 판단하기위해 프로그램을 지연시킴
   digitalWrite(LED_BUILTIN,LOW);  //13번핀에 0V공급
   delay(1000);
}
