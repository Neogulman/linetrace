int  M_pin[4] = {5, 6, 9, 12}; 

void setup() {
Serial.begin(9600);//블루투스 시리얼 통신 사용설정
  for (int i = 0; i < 4; i++) {
    pinMode(M_pin[i], OUTPUT); //배열에 저장된 핀번호 전체 사용설정
  }
  pinMode(2, INPUT);              //라인센서A
  pinMode(3, INPUT);              //라인센서B
}
int a = 250;                          // 모터A 스피드
int b = 250;                         // 모터B 스피드
int c = 0;
void loop() {

 int val1 = digitalRead(2);             //라인센서A
  int val2 = digitalRead(3);             //라인센서B
    if (val1 == 0 && val2 == 0) {     // 만약 라인센서가 ~라면
    analogWrite(5, a);
    analogWrite(6, c);
    analogWrite(9, b);
    analogWrite(12, c);
  }
  else if (val1 == 1 && val2 == 1) {     // 만약 라인센서가 ~라면
    analogWrite(5, c);
    analogWrite(6, a);
    analogWrite(9,c);
    analogWrite(12, b);
    analogWrite(5, a);
    analogWrite(6, c);
    analogWrite(9,b);
    analogWrite(12, c);
    analogWrite(5, c);
    analogWrite(6, c);
    analogWrite(9, c);
    analogWrite(12, c);
  }

  else if (val1 == 0 && val2 == 1) {     // 만약 라인센서가 ~라면
    analogWrite(5, c);
    analogWrite(6, a);
    analogWrite(9, b);
    analogWrite(12, c);
  }
    else if (val1 == 1 && val2 == 0) {     // 만약 라인센서가 ~라면
    analogWrite(5, a);
    analogWrite(6, c);
    analogWrite(998, c);
    analogWrite(12, b);
  }


}
