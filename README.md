# arduino-nextion-simulation
This is a tutorial for you to do simulation between your arduino microcontroller and nextion editor. In this case we dont need to have an LCD to test our code. 

## What you need
1.  Nextion Editor Application https://nextion.tech/nextion-editor/
2.  Arduino IDE https://www.arduino.cc/en/software (tested on windows 11 version 1.8.19)
3.  Any microcontroller (in this case ESP32)

## Note
You can communicate your arduino through default serial communication (USB cable which we also use to upload the code) or using another serial through USB FTDI. 
If you use method 1 (through USB cable) you can use serial monitor and debug your nextion simulation at the same time; however, if you use another serial, you can both see your serial monitor and debug your nextion simulation. 
In case you get trouble with the communication, try these suggestions:
1.  check your cable, make sure they are connected and reliable.
2.  make sure your tx rx connection, in many cases we just mix up with the serial connection.

## See tutorial on Youtube
https://youtu.be/l0ckr8NQ8jk
