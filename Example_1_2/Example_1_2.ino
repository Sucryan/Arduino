// Example 2: 閃爍LED
int LED_PIN = 10;

void setup() {
  // put your setup code here, to run once:
  
  // XLAN: 設定LED燈腳位為輸出腳位
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // XLAN: LED 燈腳位輸出高電位，LED燈亮起
  digitalWrite(LED_PIN, HIGH);

  // XLAN: 延遲 500 ms
  delay(1000);

  // XLAN: ＬED腳位輸出低電壓，LED燈熄滅
  digitalWrite(LED_PIN, LOW);

  // XLAN: 延遲 500 ms
  delay(1000);
}
