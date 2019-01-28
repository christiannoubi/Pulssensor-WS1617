#include "PulsAnzeige.h"
#include "Pulssensor.h"

int main () {
    PulsAnzeige anzeige ;
    Pulssensor pulssensor;

    pulssensor.anmelden(anzeige);
    pulssensor.messungsimulieren(1128);
    pulssensor.messungsimulieren(1092);
    pulssensor.messungsimulieren(1045);
    pulssensor.messungsimulieren(992);
    pulssensor.messungsimulieren(924);
}