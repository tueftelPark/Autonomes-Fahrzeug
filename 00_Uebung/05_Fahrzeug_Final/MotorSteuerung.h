#ifndef MOTORSTEUERUNG_H
#define MOTORSTEUERUNG_H


#include <Arduino.h>

/// @brief Alle Motorenpins werden initialisiert
void InitialisierungMotor(void);

/// @brief Fahrzeug fährt gerade aus. 
void GeradeFahren(void);

/// @brief Fahrzeug fährt nach links. 
void LinksFahren(void);

/// @brief Fahrzeug fährt nach rechts. 
void RechtsFahren(void);

/// @brief  Fahrzeug stoppt. 
void StoppFahren(void);


#endif