#include <RCSwitch.h>

#define CODE_Uno 4575536  // Use whatever number you saw in the RF Sniffer Sketch
#define CODE_Dos 0001  // Use whatever number you saw in the RF Sniffer Sketch

RCSwitch mySwitch = RCSwitch();

// Declaracion de variables
void setup()
{
    // pinMode(7,OUTPUT);
    // Abre puerto serial y lo configura a 9600 bps
    Serial.begin(9600);
    mySwitch.enableTransmit(7);
}

void loop()
{
    mySwitch.send(CODE_Uno, 24);
    mySwitch.send(CODE_Dos, 24);
    
    // Espera cinco segundo para repetir el loop
    delay(2000);
}

