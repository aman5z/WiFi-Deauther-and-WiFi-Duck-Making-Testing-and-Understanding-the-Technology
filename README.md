# WiFi-Deauther-and-WiFi-Duck-Making-Testing-and-Understanding-the-Technology

In this project, I combined several components to build a WiFi Deauther and WiFi Duck, two tools that demonstrate the power of hacking and how WiFi networks can be vulnerable to attacks. Below, I'll walk you through the parts I used, the connections I made, and the functionality of the final device.

 


Parts Used:
Pro Micro (Atmega 32u4): A microcontroller board capable of emulating a USB HID device, such as a keyboard or mouse.

https://robu.in/product/pro-micro-5v-16m-mini-leonardo-micro-controller-development-board-for-arduino/

OLED Display (0.96 inch): A small screen that displays the status and actions of the device.

https://robu.in/product/0-96-inch-yellow-yellow-blue-oled-lcd-led-display-module/

D1 Mini (ESP8266): A WiFi-enabled microcontroller, which enables both the deauthentication attacks and hotspot capabilities for the WiFi Duck.

https://robu.in/product/d1-mini-v2-nodemcu-4m-bytes-lua-wifi-internet-of-things-development-board-based-esp8266/

ESP8266 Antenna: Provides better signal range and stability for WiFi-based attacks.

https://robu.in/product/esp-8266-esp8266-serial-wifi-wireless-transmitter-module-gain-antenna-mt76813dbi/

Battery Charging Module (TP4056): Ensures the device can be portable by allowing a battery to charge and power the project.

https://robu.in/product/tp4056-1a-li-ion-lithium-battery-charging-module-with-current-protection-type-c/

RGB LED Module: Adds visual feedback through colors, indicating different states of the device.

https://robu.in/product/cjmcu-123-ws2811-rgb-led-breakout-module/

Micro Switch (KW10):  A simple switch to control various functions.

https://robu.in/product/microswitch-kw10-z1p-limit-switch-1a-125v-ac-2pcs/

USB Type-C Port: For connecting the device to other peripherals or charging.

https://robu.in/product/usb-3-1-female-socket-type-c-connector-24-pins-breakout-pcb-board/

Connections:
Pro Micro ↔ ESP8266

3/SCL → D1 (ESP8266)

2 → D2 (ESP8266)

GND → GND

VIN → 5V

Additional Connections:

7 → LED DATA

D7 → Down Button

D6 → Up Button

D5 → OK Button

WiFi Deauther Functionality:
The primary purpose of the WiFi Deauther is to deauthenticate devices from WiFi networks. It exploits a vulnerability in the 802.11 WiFi protocol, which allows it to send deauthentication frames to a router. These frames trick the router into believing that a connected device has been disconnected, which interrupts the device’s connection to the network.

This type of attack is useful for:
Testing the security of WiFi networks to identify vulnerabilities.

Demonstrating how denial of service (DoS) attacks can be executed on WiFi networks.

Highlighting how insecure or unprotected networks can easily be targeted.

The attack is carried out by the ESP8266 board using its WiFi capabilities, and the OLED display provides real-time feedback on network selection and attack execution. It’s important to note that such attacks are illegal on networks without permission and should only be used in a controlled environment for educational or testing purposes.

WiFi Duck Functionality:
The WiFi Duck adds another layer of functionality. When connected to a laptop or another device via USB, it acts as a Human Interface Device (HID), such as a keyboard or mouse. Once a laptop is connected to the WiFi hotspot created by the ESP8266, you can send scripts or commands to the laptop remotely, simulating keystrokes or mouse movements.

This works by:
Connecting the WiFi Duck to the target laptop via USB.

Creating a WiFi hotspot using the ESP8266, which the attacker connects to.

Executing scripts that control the laptop’s keyboard, allowing you to automate tasks, inject commands, or potentially deliver payloads.

The real power of the WiFi Duck lies in its ability to go undetected by security software. Since the device emulates a legitimate HID, most antivirus programs don’t flag it as malicious, making it a stealthy tool for executing attacks or testing device security.

Use Cases and Testing:

While testing the WiFi Deauther and WiFi Duck, I was able to:

Deauthenticate multiple devices from a WiFi network, showing how easy it is to disrupt network services.

Control a connected laptop using custom scripts, demonstrating how security flaws can be exploited in seemingly harmless hardware.

Final Thoughts:
The combination of a WiFi Deauther and WiFi Duck presents a powerful toolkit for penetration testers and security enthusiasts. However, it’s crucial to emphasize that these tools should only be used for ethical hacking purposes. If used improperly, they can cause significant disruption and legal issues.

In the end, this project demonstrates how vulnerabilities in common technologies can be exploited and highlights the importance of strengthening WiFi network security through encryption, strong passwords, and regular monitoring for unauthorized access.
