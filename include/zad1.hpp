#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>
//#inclide <iostream>

// tutaj klasa Artysta
using namespace std;


class Artysta
{
public:
    Artysta()
    {
        pseudonim = "anonim";
        sluchacze = 0;
    };

    Artysta(const string& a, unsigned b) : pseudonim(a), sluchacze(b) {}
   
    string getPseudonim() const
    {
        //string& ps = pseudonim;
        return pseudonim;
    }

    unsigned getSluchacze() const 
    { 
        return sluchacze;
    }

    virtual void graj(ostream&) const 
    { 
        cout << pseudonim << " : " << sluchacze << endl;
    }

    
     ~Artysta(){};



private:
    string       pseudonim;
    unsigned int sluchacze;
};