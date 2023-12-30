# Lämpötilan Mittaus ja Tuulettimen Ohjaus
Tämä Arduino-projekti käyttää TMP36-lämpötila-anturia mittaamaan ympäristön lämpötilaa. LCD-näyttö näyttää tuloksen, ja tuulettimen nopeus säätyy lämpötilan perusteella.

![temp_ard](https://github.com/damakes/L-mp-tilamittari/assets/155246347/55f8e2fa-8c62-43c0-bc85-aefb6b31243d)

Lämpötilamittari mittaa ympäristön lämpötilan, jonka jälkeen mittaustulokset näkyvät LCD-näytöllä, lämpötilan ylittäessä asetusarvo käynnistetään DC Moottori. 
Moottori tuulettaa ympäristöä teholla, joka on verrannollinen lämpötilan nou-suun ja laskuun. Kuitenkin lopettaen tuulettamisen asetusarvon saavuttaes-sa.

## Kaaviokuva ja Prosessi
![temp_ard](https://github.com/damakes/L-mp-tilamittari/assets/155246347/900c0f94-f360-4408-b0b8-808514993e1c)

Kaaviokuvassa näkyvän toiminnan kuvaus TMP36 analogiselta anturilta. An-turi mittaa lämpötilan, jonka jälkeen mittaustulos annetaan lähtöjännitteenä pinnille A0. Mittaustulos tuodaan LCD-näytölle, joka on kytketty seuraavasti: 12,11,5,4,3,2. Mittauksen aikana käyttäjälle näytetään viesti LCD-näytöllä, joka kertoo toiminnan vaiheista. Kun mittaus on suoritettu, mittaustulokset ovat luettavissa LCD-näytöllä. Arduino ohjaa DC Moottorin nopeutta pin 9 PWM, eri lämpötila-alueilla.  

Laitteen toiminta perustuu TMP36-anturin avulla saatuun lämpötilatietoon, joka syötetään Arduinoon ja näytetään käyttäjälle LCD-näytöllä. Saatua tietoa hyödynnetään myös tuulettimen nopeuden ohjauksessa.
