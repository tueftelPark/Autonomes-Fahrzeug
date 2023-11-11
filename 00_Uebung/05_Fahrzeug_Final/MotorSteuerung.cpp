#include "MotorSteuerung.h"
#include <Arduino.h>



    // Pins MotorDriver    Digital
const uint8_t LinkerMotorVorwaerts = 10;    // In2
const uint8_t LinkerMotorRueckwaerts = 9;  // In1
const uint8_t RechterMotorVorwaerts = 6;   // In4
const uint8_t RechterMotorRueckwaerts = 7; // In3



/// @brief Alle Motorenpins werden initialisiert
void InitialisierungMotor ()
{
      // Init MotorDriver
  pinMode();
  pinMode();
  pinMode();
  pinMode();



  digitalWrite();
  digitalWrite();
  digitalWrite();
  digitalWrite();

}



/// @brief Fahrzeug fährt gerade aus. 
void GeradeFahren()
{
  digitalWrite();
  digitalWrite();
  digitalWrite();
  digitalWrite();
}



/// @brief Fahrzeug fährt nach links. 
void LinksFahren()
{
  digitalWrite();
  digitalWrite();
  digitalWrite();
  digitalWrite();
}




/// @brief Fahrzeug fährt nach rechts. 
void RechtsFahren()
{
  digitalWrite();
  digitalWrite();
  digitalWrite();
  digitalWrite();
}



/// @brief  Fahrzeug stoppt. 
void StoppFahren()
{
  digitalWrite();
  digitalWrite();
  digitalWrite();
  digitalWrite();
}
