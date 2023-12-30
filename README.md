# Lämpötilan Mittaus ja Tuulettimen Ohjaus

![tuuuuu](https://github.com/damakes/L-mp-tilamittari/assets/155246347/007b6c6b-ddd7-46a6-ba22-27cdf6999653) ![temp_ard](https://github.com/damakes/L-mp-tilamittari/assets/155246347/55f8e2fa-8c62-43c0-bc85-aefb6b31243d) 

Tämä Arduino-projekti käyttää TMP36-lämpötila-anturia mittaamaan ympäristön lämpötilaa. LCD-näyttö näyttää tuloksen, ja tuulettimen nopeus säätyy lämpötilan perusteella. Lämpötilamittari mittaa ympäristön lämpötilan ja käynnistää DC-moottorin, kun lämpötila ylittää asetusarvon. Moottori tuulettaa ympäristöä teholla, joka reagoi lämpötilan muutoksiin. Toiminta lopetetaan asetusarvon saavuttaessa.



![diag](https://github.com/damakes/L-mp-tilamittari/assets/155246347/278492fa-8605-4d2b-9181-5e2473e5ee32)

Kaaviossa kuvataan TMP36-analogisen anturin toimintaa. Arduino ohjaa DC-moottorin nopeutta pin 9 PWM:llä eri lämpötila-alueilla. Anturi mittaa lämpötilan, ja mittaustulos syötetään Arduinoon pinnin A0 kautta. 
Tulos näytetään LCD-näytöllä, joka on liitetty Arduinoon pinneillä 12, 11, 5, 4, 3, 2. Käyttäjälle näytetään viesti LCD-näytöllä mittauksen jälkeen.

<br>Komponentit valmistanut [Arduino](https://store.arduino.cc/collections/kits).
<br>Toteutettu [Arduino IDE:llä](https://wiki-content.arduino.cc/en/software) / Tämä löytyy myös Microsoft storesta.
