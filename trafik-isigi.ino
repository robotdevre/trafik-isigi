int kirmizi = 11;   
int sari = 12;
int yesil = 13;

void setup() {
  pinMode(kirmizi, OUTPUT);
  pinMode(sari, OUTPUT);
  pinMode(yesil, OUTPUT);
}

void loop() {
  digitalWrite(kirmizi, HIGH);
  delay(5000); // 5 saniye yeşil ışık
  digitalWrite(kirmizi, LOW);
  
  digitalWrite(sari, HIGH);
  delay(2000); // 2 saniye sarı ışık
  digitalWrite(sari, LOW);
  
  digitalWrite(yesil, HIGH);
  delay(5000); // 5 saniye kırmızı ışık
  digitalWrite(yesil, LOW);
}
