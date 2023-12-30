# Lämpötilan Mittaus ja Tuulettimen Ohjaus
Tämä Arduino-projekti käyttää TMP36-lämpötila-anturia mittaamaan ympäristön lämpötilaa. LCD-näyttö näyttää tuloksen, ja tuulettimen nopeus säätyy lämpötilan perusteella.

![temp_ard](https://github.com/damakes/L-mp-tilamittari/assets/155246347/55f8e2fa-8c62-43c0-bc85-aefb6b31243d)

Lämpötilamittari mittaa ympäristön lämpötilan ja käynnistää DC-moottorin, kun lämpötila ylittää asetusarvon. Moottori tuulettaa ympäristöä teholla, joka reagoi lämpötilan muutoksiin. Toiminta lopetetaan asetusarvon saavuttaessa.

![diag](https://github.com/damakes/L-mp-tilamittari/assets/155246347/278492fa-8605-4d2b-9181-5e2473e5ee32)

Kaaviossa kuvataan TMP36-analogisen anturin toimintaa. Anturi mittaa lämpötilan, ja mittaustulos syötetään Arduinoon pinnin A0 kautta. Tulos näytetään LCD-näytöllä, joka on liitetty Arduinoon pinneillä 12, 11, 5, 4, 3, 2. Käyttäjälle näytetään viesti LCD-näytöllä mittauksen aikana. Mittauksen jälkeen tulokset ovat luettavissa LCD-näytöllä. Arduino ohjaa DC-moottorin nopeutta pinolla 9 PWM:llä eri lämpötila-alueilla.

Laitteen toiminta perustuu TMP36-anturin mittaamaan lämpötilatietoon, joka syötetään Arduinoon ja näytetään käyttäjälle LCD-näytöllä. Saatua tietoa käytetään myös tuulettimen nopeuden ohjauksessa.
