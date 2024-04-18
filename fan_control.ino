// Tuodaan kirjastot
#include <LiquidCrystal.h> // LCD kirjasto
#include <SoftwareSerial.h> // Ohjelmistosarjaportin kirjasto


// luodaan LiquidCrystal-luokan olio
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// määritellään muuttujat lämpötila-anturin pinnille ja tuulettimen pinnille
float temp;
int tempPin = A0;
int fan = 9;


void setup() {
  // määritellään tuulettimen pinni ulostuloksi
  pinMode(fan, OUTPUT);

  // alustetaan LCD näytön mitat
  lcd.begin(16, 3);
  
  // näytetään aloitusviesti LCD-näytössä
  lcd.setCursor(1, 0); 
  lcd.print("Mitataan");
  delay(3000);
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("<<<C>>>");
  delay(1000);
  lcd.clear();
  lcd.print(">>>>>>>>>>>");
  delay(2000);
  lcd.clear();
}

void loop() {
  // näytetään viesti LCD-näytössä
  lcd.setCursor(3, 0);
  lcd.print("Mitataan");
  lcd.setCursor(2, 1);
  lcd.print(">>LAMPOTILA>>");
  delay(3000);
  lcd.clear();

  // luetaan lämpötila-anturi ja muunnetaan arvo lämpötilaksi
  temp = map(((analogRead(tempPin) - 20) * 3.04), 0, 1023, -40, 125);

  // näytetään lämpötila LCD-näytössä 
  lcd.setCursor(3, 0);
  lcd.print(temp);
  Serial.println(temp);
  lcd.setCursor(5, 1);
  lcd.print("C");
  delay(3000);
  lcd.clear();

  // ohjataan tuuletinta lämpötilan perusteella
  if (temp < 20) {
    analogWrite(9, 0);
    lcd.print("Tuuletus off");
    delay(2000);
    lcd.clear();
  }
  else if (temp <= 22) {
    analogWrite(fan,180);
    lcd.print("Tuuletin: 180% ");
    delay(2000);
    lcd.clear();
  }
  else if (temp <= 24) {
    analogWrite(fan, 190);
    lcd.print("Tuuletin: 190% ");
    delay(2000);
    lcd.clear();
  }
  else if (temp <= 26) {
    analogWrite(fan, 200);
    lcd.print("Tuuletin: 200% ");
    delay(2000);
    lcd.clear();
  }
  else if (temp <= 28) {
    analogWrite(fan, 230);
    lcd.print("Tuuletin: 230% ");
    delay(2000);
    lcd.clear();
  }
  else if (temp >= 30) {
    analogWrite(fan, 250);
    lcd.print("Tuuletin: 250% ");
    delay(2000);
    lcd.clear();
  }
}
