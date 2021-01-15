#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste

using namespace std;

class PopGwiazda : public Artysta
{
public:

    PopGwiazda(const string& a, unsigned b) : pseudonim(a), sluchacze(b) 
    {

    }

    void graj(ostream&) const override 
    { 
        cout << pseudonim << " : " << sluchacze << endl;
    }

private:
    string pseudonim;
    unsigned sluchacze;
};

class RapGwiazda : public Artysta
{
    RapGwiazda(const string& a, unsigned b) : pseudonim(a), sluchacze(b) {}

    void graj(ostream&) const override { cout << pseudonim << " : " << sluchacze << endl; }

private:
    string   pseudonim;
    unsigned sluchacze;
};

Artysta* stworzArtyste(string& c)
{
    Artysta* jakis_artysta;

    if (toupper(c.front()) == "A") 
    {
        jakis_artysta = new PopGwiazda("BTS", 1234);
    }
    else if (toupper(c.front()) == "B") 
    {
        jakis_artysta = new PopGwiazda("BTS", 1234);
    }
    if (toupper(c.front()) == "C") 
    {
        jakis_artysta = new PopGwiazda("BTS", 1234);
    }
    else
    {
        jakis_artysta = new RapGwiazda("Ye", 4321);
    }


    return jakis_artysta;
}