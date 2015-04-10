# Cros-Project

The CROS project (Console Retrogaming Open Source) is a student project of ECE Paris. The goal is to use open source hardware and open source software to make a portable device that is able to run emulators of old consoles.

The base hardware is a [BeagleBone Black](http://beagleboard.org/black), an open hardware development board. It has an ARM Cortex-A8, 512MB of RAM and on-board flash storage. It supports many Linux distributions and other operating systems. There is a large community working on BeagleBone Black projects and we were inspired by many of them.

As a visual output we used an LCD screen cape like this [one](http://www.chipsee.com/product/evm/beagle/cs-bbb-exp50r.html). The BeagleBone Black uses a cape manager which automatically detects compatible capes. This means many different capes can be used for display or for other purposes. To find out more about capes follow this [link](http://beagleboard.org/cape).

For input, we planned on using buttons but we were not able to configure them correctly.

In our project we used a Debian distribution as the operating system. You can find the tutorial and ressources to install it on your BeagleBone Black [here](http://beagleboard.org/latest-images)