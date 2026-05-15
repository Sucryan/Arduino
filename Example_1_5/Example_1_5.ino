// 模擬類比值
// XLAN: 定義電位器所使用的腳位
int POT_PIN = A0;

// XLAN: 定義 LED 燈所使用的腳位
int LED_PIN = 13;

void setup() {
  // put your setup code here, to run once:
  // XLAN: 初始化serial port
  Serial.begin(9600);

  // XLAN: 設定電位器腳位為輸入腳位
  pinMode(POT_PIN, INPUT);

  // XLAN: 設定 LED 燈腳位為輸出腳位
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // XLAN: LED 燈腳位輸出高電位，LED 燈亮起
  digitalWrite(LED_PIN, HIGH);
  // XLAN: 延遲 100 ms
  delay(100);
  // XLAN: LED 燈腳位輸出低電位，LED 燈關閉
  digitalWrite(LED_PIN, LOW);
  // XLAN: 延遲 100 ms
  delay(100);
  // XLAN: 讀取電位器的類比輸入值並顯示
  int val = analogRead(POT_PIN);
  Serial.println(val);
}
