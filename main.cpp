#include <iostream>
#include <string>
#include "Person.h"

int Dummy(Person p ) { return  p.getNumber();}
int main() {
    {
        Person Walter("Walter", "White", 234);
        Walter.addResource();
        std::string s1 = Walter.getResourceName();
        Walter.addResource();
        Person Walter2 = Walter;
        Walter = Walter2;
        int j = Dummy(Walter2);
    }


    return 0;
}