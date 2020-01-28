#include <iostream>
#include <memory>
#include <string>
using std::string;
using std::shared_ptr;
using std::cout;
using std::endl;
using std::cin;


class myClass
{
    int number;
    std::string str;

public:
    myClass(std::string s = "", int n = 0) :str(s), number(n) {}
    virtual void func() {}
};

class myChildClass : public myClass {
    char ca;
public:
    myChildClass(std::string s = "", int n = 0, char c = ' ') : myClass(s, n), ca(c) {}
};

class myNotRelatedClassParent {
    int number;
public:
    myNotRelatedClassParent(int n = 0) : number(n) {}
    virtual void func(){}
};


class myNotRelatedClass:  public myNotRelatedClassParent {
    int number;
public:
    myNotRelatedClass( int n = 0) : number(n) {}
};



int main()
{
    {
        myChildClass mcc("semih", 12345, 'x');

        myClass* p = &mcc;

        myChildClass* pc = static_cast<myChildClass*>(p);

        myNotRelatedClassParent mnC(777);

        myChildClass* pc2;
        cout << "n or c" << endl;
        char ans;
        cin >> ans;
        if (ans == 'n') {
            pc2 = dynamic_cast<myChildClass*>(&mnC);
        }
        else {
            pc2 = dynamic_cast<myChildClass*>(p);
        }

     }
}
