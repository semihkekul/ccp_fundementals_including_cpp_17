#include <iostream>
#include <memory>
#include <string>
using std::string;
using std::shared_ptr;

class Resource {

public:
    string data;
    Resource(string str):data(str){}
};

class myClass
{
    int number;
    std::string str;
    shared_ptr<Resource> pResource;
public:


    myClass(std::string s = "", int n = 0) :str(s), number(n) {}

    int getNumber() const {
        return number;
    }
    void setNumber(int n) {
        number = n;
    }

    string getResourceData() {
        return pResource->data;
    }

    void addResource() {
        pResource.reset();
        pResource = std::make_shared<Resource>("Resource of " + str);
    }
};

int main()
{
    {
        myClass mC("semih", 12345);
        mC.addResource();
        string str = mC.getResourceData();
        mC.addResource();
        myClass mC2 = mC;
        mC = mC2;
        
    }
}
