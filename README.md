This project utilizes an arduino uno, servo motor and the Affdex OSX SDK to create a locking mechanism that is controlled by facial expressions. 

For the EmotionLab16 hackathon this was demonstrated by taping the motor on the inside of a coffee cup that had a slit carved into the side and the bottom punched out, another cup with a slit carved into its side was placed on top of the cup with the motor within it and the mechanism was engaged.

This can be expanded and improved through arduino code to listen for a sequence of serial communications instead of a simple 0 or 1. 

The method of communication between the laptop and arduino is serial connection via the usb ports and the popen() and serial.read() commands. 

(Please note that once the program is loaded into the arduino uno a 10uF capactitor must be placed across the reset and ground pins of the arduino uno as serial commands piped into the arduino via any method but the arduio software serial monitor also include a reset command. The capacitor maintains the charge on the reset pin which disables the chip's ability to reset. __You will not be able to push code to, or reset, the arduino while this capacitor is connected to the circuit__.)
