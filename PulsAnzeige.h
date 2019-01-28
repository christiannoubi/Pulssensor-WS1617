#pragma once

#include "Anzeige.h"
#include <cmath>
#include <iostream>

class PulsAnzeige: public Anzeige {

public:
    void anzeigen (double wert) {
        std::cout << std::round(wert) << " Schläge pro Minute" << std:: endl;
    }
};