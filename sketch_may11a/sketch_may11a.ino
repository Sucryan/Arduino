// Example 1: Hello World
int LED_PIN = 10;

void setup() {
  // put your setup code here, to run once:
  
  // XLAN: 初始化 Serial Port
  Serial.begin(9600);
  
  // XLAN: 設定LED燈腳位為輸出腳位
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // XLAN: 如果Serial Port接收到資料，就給Val
  if(Serial.available()) {
    int val = Serial.read();

    // XLAN: 判斷接收到的指令是否為 R
    if (val == 'R') {
      // XLAN: LED 燈腳位輸出高電位，LED燈亮起
      digitalWrite(LED_PIN, HIGH);

      // XLAN: 延遲 500 ms
      delay(500);

      // XLAN: ＬED腳位輸出低電壓，LED燈熄滅
      digitalWrite(LED_PIN, LOW);

      // XLAN: 延遲 500 ms
      delay(500);

      // XLAN: LED 燈腳位輸出高電位，LED燈亮起
      digitalWrite(LED_PIN, HIGH);

      // XLAN: 延遲 500 ms
      delay(500);

      // XLAN: 顯示 Hello World! 字串
      Serial.println("Hello World!");
    }
  }
}
