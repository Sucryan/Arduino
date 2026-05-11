// Example 3: 紅綠燈
int RED_LED_PIN = 4;
int YELLO_LED_PIN = 7;
int GREEN_LED_PIN = 10;

void setup() {
  // put your setup code here, to run once:
  
  // XLAN: 設定LED燈腳位為輸出腳位
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLO_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // 紅燈
  // XLAN: LED 燈腳位輸出高電位，LED燈亮起
  digitalWrite(RED_LED_PIN, HIGH);

  // XLAN: 延遲
  delay(5000);

  // XLAN: LED腳位輸出低電壓，LED燈熄滅
  digitalWrite(RED_LED_PIN, LOW);

  // XLAN: 延遲
  delay(1000);

  // 黃燈
  // XLAN: LED 燈腳位輸出高電位，LED燈亮起
  digitalWrite(YELLO_LED_PIN, HIGH);

  // XLAN: 延遲
  delay(5000);

  // XLAN: LED腳位輸出低電壓，LED燈熄滅
  digitalWrite(YELLO_LED_PIN, LOW);

  // XLAN: 延遲
  delay(1000);

  // 綠燈
  // XLAN: LED 燈腳位輸出高電位，LED燈亮起
  digitalWrite(GREEN_LED_PIN, HIGH);

  // XLAN: 延遲
  delay(5000);

  // XLAN: LED腳位輸出低電壓，LED燈熄滅
  digitalWrite(GREEN_LED_PIN, LOW);

}
