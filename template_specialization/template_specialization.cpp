#include<iostream>
#include"myClass.h"
using namespace std;


template<class T>
class Accum {
private:
	T total;
public:
	Accum(T start) : total(start) {};
	T operator+=(T const& t) {
		return total = total + t;
	}
	T GetTotal() const {
		return total;
	}
};

template<>
class Accum<myClass> {
private:
	int total;
public:
	Accum(int start) : total(start) {};
	int operator+=(myClass const& t) {
		return total = total + t.number;
	}
	int GetTotal() const {
		return total;
	}
};


int main() {
	Accum<int> integers(0);
	integers += 3;
	integers += 7;
	cout << integers.GetTotal() << endl;

	Accum<string> strings("");
	strings += "hello";
	strings += "world";

	cout << strings.GetTotal() << endl;

	Accum<myClass> classes(0);
	myClass mC1 = { "isim",123 };
	myClass mC2 = { "soyadi",555 };

	classes += mC1;
	classes += mC2;

	cout << classes.GetTotal() << endl;

}