# Temperature-Sensor-Fan-Control

The Temperature Measurement and Fan Control project utilizes Arduino and a TMP36 temperature sensor to measure ambient temperature. It displays the temperature on an LCD screen and adjusts the speed of a fan accordingly. When the temperature exceeds a predefined threshold, a DC motor activates to ventilate the environment. 

![tuuuuu](https://github.com/damakes/L-mp-tilamittari/assets/155246347/007b6c6b-ddd7-46a6-ba22-27cdf6999653)

**The diagram illustrates the operation of the TMP36 analog sensor**
-
Arduino controls the speed of the DC motor using PWM on pin 9 in different temperature ranges. The sensor measures the temperature, and the measurement result is input to the Arduino via pin A0. The result is displayed on an LCD screen connected to the Arduino with pins 12, 11, 5, 4, 3, 2. A message is displayed to the user on the LCD screen after the measurement.

![diag](https://github.com/damakes/L-mp-tilamittari/assets/155246347/278492fa-8605-4d2b-9181-5e2473e5ee32)

This project provides a practical demonstration of temperature sensing, in environmental monitoring and automated fan control systems.

<br>Implemented with [Ardiono IDE](https://wiki-content.arduino.cc/en/software) / Also available on the Microsoft Store.
