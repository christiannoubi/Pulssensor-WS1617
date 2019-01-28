#pragma once

struct Anzeige {

    virtual ~Anzeige (){}
    virtual void anzeigen (double a) = 0;
};