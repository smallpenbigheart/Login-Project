
// Arduino code to lock/unlock windows using Arduino and RC522 RFID Module       //
//                                                                               //

// VCC  - 3.3V                                                                   //
// RST  - PIN 5                                                                  //
// GND  - GND                                                                    //
// irq  - Not Connected                                                          //
// MISO - ICSP1 (PIN 14)                                                         //
// MOSI - ICSP4 (PIN 16)                                                         //
// SCK  - ICSP3 (PIN 15)                                                         //
// SDA  - PIN 10                                                                 //
//                                                                               //
//-------------------------------------------------------------------------------//


#include <Keyboard.h>
#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 10
#define RST_PIN 5
#define KEY_RETURN 0xB0                 //The hex value for the return key is 0xB0.
 

 if(readid==card1)
 { 
  Keyboard.press(KEY_LEFT_GUI);              //Press the left windows key.
  Keyboard.press('l');                       //Press the "l" key.
  Keyboard.releaseAll();                     //Release all keys.
  delay (100);
  Keyboard.press(Enter);                     //Press the Enter key.
  Keyboard.release(Enter);                   //Release the Enter key.
  delay(100);
  Keyboard.print("PASSWORD");                    // Change this value to your Windows PIN/Password.
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press(Enter);
  Keyboard.releaseAll();
 }
 else
 {
  return;
 } 
}

