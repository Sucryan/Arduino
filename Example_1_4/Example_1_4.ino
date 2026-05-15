// 跑馬燈(基礎)
// XLAN: 定義 LED 燈使用的腳位
int BASE_PIN = 2;
int Num = 6;
void setup() {
  // put your setup code here, to run once:
  // XLAN: 設定 LED 燈腳位為輸出腳位
  for (int i = BASE_PIN; i < BASE_PIN + Num; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = BASE_PIN; i < BASE_PIN + Num; i++) {
    // XLAN: LED 燈腳位輸出低電位，LED燈熄滅
    digitWrite(i, LOW);

    // XLAN: 延遲 150 ms
    delay(150);
  }
  
  for (int i = BASE_PIN; i < BASE_PIN + Num; i++) {
    // XLAN: LED 燈腳位輸出高電位，LED燈亮起
    digitWrite(i, HIGH);
    // 延遲 150 ms
    delay(150);
  }
}
