# Automated-Fish-Feeder
A small Arduino powered device which feeds your fish. This device works by turning the servo. The servo that I used is a DS04-NFC. Other 360 degree servos should also work. 

To use this code simply flash it to your arduino. Take out two buttons, connect their GND and VCC to your arduino 3V output. Connect one button's output to pin 10, the other button's output to pin 11. Connect your 360 Degree servo's GND and VCC to your arduino's 5V. Connect the singnal line to pin 9.

This script has two modes, manual mode and auto mode. Manual mode allows you manually feed your fish by pressing the button on pin 10. To change the mode simply press the button that is connected to pin 11. When you press the mode switch it should turn the arduino build in led on/off. Led off is automode. Led on is manual mode.

If you would like to change the interval between each feed, simply change the variable - interval. 
