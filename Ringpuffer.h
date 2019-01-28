#pragma once;
#include <vector>
using namespace std;
template <typename T>

class Ringpuffer {

private:
    const int laenge;
    int position;
    T * puffer;
    bool gefuellt;

public:
    Ringpuffer (int laenge): laenge(laenge) {
        puffer = new T [laenge];
    }
    ~Ringpuffer() {
        delete [] puffer;
    }

    void hinzufuegen (T wert) {
        puffer[position++] = wert;
        if (position==laenge){
            position = 0;
            gefuellt = true;
        }
    }

    bool istGefuellt () const {
        return gefuellt;
    }

    T mittelwert () const {
        T wert = 0;
        for (int i = 0; i<laenge; i++) {
            wert += puffer[i];
        }
        return wert/laenge;
    }
};