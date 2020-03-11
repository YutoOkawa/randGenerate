#include <M5StickC.h>
#include <stdlib.h>

int i = 1;

void setup() {
  // put your setup code here, to run once:
  M5.begin();
  M5.Lcd.print("Rand Generate");
  M5.Lcd.setCursor(0,10);
  srand(i);
  M5.Lcd.print(rand());
}

void loop() {
  // put your main code here, to run repeatedly:
  while(1) {
    if(digitalRead(M5_BUTTON_HOME) == LOW) {
      while(digitalRead(M5_BUTTON_HOME) == LOW);
      i++;
      srand(i);
      M5.Lcd.setCursor(0,10*i);
      M5.Lcd.print(rand());
    }
  }
}
