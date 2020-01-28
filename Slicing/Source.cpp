#include <iostream>
#include <memory>
#include <string>
using std::string;
using std::shared_ptr;


class myClass
{
    int number;
    std::string str;
   
public:
    myClass(std::string s = "", int n = 0) :str(s), number(n) {}
};

class myChildClass : public myClass {
    char ca;
public:
    myChildClass(std::string s = "", int n = 0, char c=' ') : myClass(s,n), ca(c){}
};

int main()
{
    {
        myChildClass mcC("semih", 12345, 'a');
   
        myClass mC = mcC;
    }
}
