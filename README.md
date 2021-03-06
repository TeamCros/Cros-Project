# Cros-Project

The CROS project (Console Retrogaming Open Source) is a student project of ECE Paris. The goal is to use open source hardware and open source software to make a portable device that is able to run emulators of old consoles.

The base hardware is a [BeagleBone Black](http://beagleboard.org/black), an open hardware development board. It has an ARM Cortex-A8, 512MB of RAM and on-board flash storage. It supports many Linux distributions and other operating systems. There is a large community working on BeagleBone Black projects and we were inspired by many of them.

As a visual output we used an LCD screen cape like this [one](http://www.chipsee.com/product/evm/beagle/cs-bbb-exp50r.html). The BeagleBone Black uses a cape manager which automatically detects compatible capes. This means many different capes can be used for display or for other purposes. To find out more about capes follow this [link](http://beagleboard.org/cape).

For input, we planned on using buttons but we were not able to configure them correctly. The goal was to have buttons correspond to different keymappings and to modify the keymapping depending on the game. Also, we were hoping to use a hall effect joystick that communicates with I2C. But we were unable to configure the I2C bus to read the joystick position. The input solution we have so far is to use a keyboard and/or mouse and the buttons already present on the LCD screen cape.

For our project we used a Debian distribution as the operating system. You can find the tutorial and ressources to install it on your BeagleBone Black [here](http://beagleboard.org/latest-images)。

In this repository you can find the binary and source of the emulators we used. We used a SDL port of Doom and FCEUX. Both programs were built from source on the BeagleBone Black. We have forked Doom and FCEUX from Max Thrun's versions which can be found [here](https://github.com/bear24rw/gamingcape).

For the Doom and FCEUX applications to work. You will need to copy "cal.txt" to your home directory. This was used by Max Thrun to calibrate a joystick and is kept in our version to maintain compatibility with his code.

Then, in order to start Doom or Super Mario (for example), you will need a (legal) copy of the Doom shareware WAD file and a Super Mario Bros NES rom file. You should place these files in your home directory. Finally simply run the corresponding script to start the game.

We have designed a plastic encoluse that can be printed on a 3D printer without support. Download the STL file in the enclosure folder.