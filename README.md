# trafik-isigi-kontrol 🚦 ![Wokwi CI](https://github.com/robotdevre/trafik-isigi/actions/workflows/wokwi.yml/badge.svg)

Bu proje, Arduino kullanarak temel bir trafik ışığı sistemini simüle eder. Kırmızı, sarı ve yeşil LED’ler belirli zaman aralıklarında sırasıyla yanıp söner. Gerçek hayattaki trafik lambasının işleyişi modellenmiştir. Başlangıç ve orta seviye Arduino öğrenimi için uygundur.

---

## 🔧 Kullanılan Malzemeler

- Arduino Uno  
- 3 x LED (Kırmızı, Sarı, Yeşil)  
- 3 x 220 Ohm direnç  
- Breadboard  
- Jumper kablolar  

---

## 🎯 Proje Amacı

- Temel zamanlama yapıları (`delay()`) ile çalışmak  
- Trafik ışığı sıralamasını kavramak  
- Dijital çıkışları kullanarak LED kontrolü yapmak  
- Gerçek dünya sistemlerini Arduino ile simüle edebilmek  

---

## 🚦 Trafik Işığı Sıralaması

1. **Kırmızı LED** → 5 saniye  
2. **Sarı LED** → 2 saniye  
3. **Yeşil LED** → 5 saniye  
4. **Sarı LED** → 2 saniye  
5. Döngü tekrar başlar

---

## 📷 Devre Şeması

📁 `diagram.json` dosyasında Wokwi uyumlu devre şeması yer almaktadır.  
İstersen simülasyonu [Wokwi üzerinden buradan çalıştırabilirsin.](https://wokwi.com/projects/426606437257448449)

---

## 💡 Kod (Örnek)

```cpp
int kirmizi = 8;
int sari = 9;
int yesil = 10;

void setup() {
  pinMode(kirmizi, OUTPUT);
  pinMode(sari, OUTPUT);
  pinMode(yesil, OUTPUT);
}

void loop() {
  digitalWrite(kirmizi, HIGH);
  delay(5000);
  digitalWrite(kirmizi, LOW);

  digitalWrite(sari, HIGH);
  delay(2000);
  digitalWrite(sari, LOW);

  digitalWrite(yesil, HIGH);
  delay(5000);
  digitalWrite(yesil, LOW);

  digitalWrite(sari, HIGH);
  delay(2000);
  digitalWrite(sari, LOW);
}
``` 
---

## 📫 Benimle İletişime Geç / Takip Et

Eğer proje hakkında bir fikrin varsa, soruların olursa ya da sadece selam vermek istersen; aşağıdaki kanallardan bana ulaşabilir ya da sosyal medya hesaplarımdan takip edebilirsin:

- 📧 [E-posta](mailto:info@robotdevre.com)  
- 📷 [Instagram](https://www.instagram.com/robotdevre/)  
- 🌐 [Web Sitesi](https://robotdevre.com/)  
- 🎥 [YouTube](https://www.youtube.com/@robotdevre)  
- 💼 [LinkedIn](https://www.linkedin.com/in/ugur-kerim-sirke/)  
- 🐦 [X (Twitter)](https://x.com/robotdevre)
