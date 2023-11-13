//Das Auto kann nur im Kreis fahren.
//Erweitere den Code mit pinMode(x,x); und digitalWrite(x,x); damit das Fahrzeug gerade fahren kann.

const uint8_t LinkerMotorVorwaerts = 10;    // In2
const uint8_t LinkerMotorRueckwaerts = 9;  // In1
const uint8_t RechterMotorVorwaerts = 6;   // In4
const uint8_t RechterMotorRueckwaerts = 7; // In3

void setup() {

  pinMode(LinkerMotorVorwaerts, OUTPUT);
  pinMode(LinkerMotorRueckwaerts, OUTPUT);
  
  // TODO: Erweitere hier den Code für den rechten Motor
  
}

void loop() {
  digitalWrite(LinkerMotorVorwaerts, HIGH);
  digitalWrite(LinkerMotorRueckwaerts, LOW);
  
  // TODO: Erweitere hier den Code für den rechten Motor

}
