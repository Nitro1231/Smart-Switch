# Smart-Switch
A smart room light switch with IFTTT. Can be controlled by Google Assistant and Amazon Alexa.



## Requirements

- NodeMCU (Or other boards that listed on [here](https://github.com/blynkkk/blynkkk.github.io/blob/master/SupportedHardware.md))

- Blynk Token
- SG90 Servo Motor
- [Arduino IDE](https://www.arduino.cc/en/Main/Software) (I'm using 1.8.12)
- Stable WIFI device
- 3D Printer (If possible. Although you already have one, you might need to make one for yourself since there are a lot of different light switch exists.)



## How to setup?

1. Follow the official guide for starting up a new Blynk project [here](https://blynk.io/en/getting-started). Keep your Token somewhere.

2. Install the Blynk Library. (You can download it from [here](https://github.com/blynkkk/blynk-library/releases), and you should install this to the Arduino IDE by following this [guide](https://www.arduino.cc/en/Guide/Libraries).)

3. Download the source code from here, and open SmartSwitch.ino file.

4. Replace the following three sections and servo pin on your own.

   ```
   char auth[] = "AuthToken";
   char ssid[] = "SSID";
   char pass[] = "PW";
   ```

5. Power up your Arduino device.

6. Setup your custom command via IFTTT and Google Assistant. ([This](https://medium.com/@shahariarrabby/smart-switch-google-home-f70b2b75378c#f722) can help you.)

