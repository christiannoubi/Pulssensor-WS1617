#pragma once

#include "Anzeige.h"
#include "Ringpuffer.h"

class Pulssensor {

private:
    vector<Anzeige*> anzeigen;
    Ringpuffer<double >* ringpuffer;

public:
    Pulssensor () {
        ringpuffer = new Ringpuffer<double>(3) ;
    }
    ~Pulssensor () {
        delete ringpuffer;
    }

    void messungsimulieren (double millisekunden) {
        ringpuffer->hinzufuegen(millisekunden);
        if(ringpuffer->istGefuellt()) {
            double puls = ringpuffer->mittelwert()*60.0/1000.0;
            for (auto a: anzeigen) {
                a->anzeigen(puls);
            }
        }
    }

    void anmelden (Anzeige& a) {
        anzeigen.push_back(&a);
    }
};