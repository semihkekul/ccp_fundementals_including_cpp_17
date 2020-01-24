// consts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using std::string;
int doubleer(int const& x) {
    return x * 2;
}

class myClass
{
    int number;
    std::string str;
public:


    myClass(std::string s = "", int n = 0) :str(s), number(n) {}

    int getNumber() const {
        return number;
    }
    void setNumber(int n) {
        number = n;
    }
};


int main()
{
    int i = 10;
    doubleer(i);
    doubleer(20);


    myClass const cl = { "deneme",123 };

    int n = cl.getNumber();

    return 0;
}

