#include "DigiKeyboard.h" // Library declaration

bool hasRun = false; // Variable to track if the script has run

void setup() {
  pinMode(1, OUTPUT); // LED on Model USB type A
}

void loop() {
  if (!hasRun) {
    DigiKeyboard.update(); // Get the Keyboard input ready
    DigiKeyboard.println("0816"); // Modify it to match your needs
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // Only for Windows 10 as you have to click a button to get to enter a password
    DigiKeyboard.delay(1000); // Delay between keystrokes
    digitalWrite(1, HIGH); // Turn on the LED when the program finishes
    DigiKeyboard.delay(1000); // Delay for a short time
    hasRun = true; // Set the variable to true, so the script won't run again
  }
}
