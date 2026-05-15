// PWM 調光
int LED_PIN = 11;
int POT_PIN = A0;

void setup() {
  // put your setup code here, to run once:
  // 初始化Serial Port
  Serial.begin(9600);

  // 初始化電位器為輸入腳位
  pinMode(POT_PIN, INPUT);
  // 初始化 LED 燈為輸出腳位
  pinMode(LED_PIN, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  // 從電位器的類比訊號讀取輸入並且顯示在 Serial Port 監控
  int val = analogRead(POT_PIN);
  Serial.println(val);
  // 將val 從 0~1023 -> 0~255
  int r = map(val, 0, 1023, 0, 255);
  analogWrite(LED_PIN, r);
  // 延遲 100 ms
  delay(100);
}
