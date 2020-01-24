//***************************************************
//	g++ main.cpp -Wall -Wextra  -std=gnu++17
//***************************************************
#include<iostream>
#include <string>

using namespace std;


template<class T>
class Accum {
private:
	T total;
public:
	Accum(T start) : total(start) {};
	Accum<T> operator+=(T const& t) {
		total = total + t;
		return *this;
	}
	T GetTotal() const {
		return total;
	}
};
int main() {
	//***************************************************
	// Accum<int> integers(0);
	//***************************************************
	Accum integers(0);
	integers += 3;
	integers += 7;
	cout << integers.GetTotal() << endl;

	//***************************************************
	//Accum<string> strings("");
	//***************************************************
	Accum strings(string(""));
	strings += "hello";
	strings += "world";

	cout << strings.GetTotal() << endl;
}