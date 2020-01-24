#include<iostream>
using namespace std;
template <class T>
T max(T const& t1, T const& t2) {
	return t1 > t2 ? t1 : t2;
}
void testMax() {
	cout << max(33, 44) << endl;
	cout << max<double>(1, 22.0) << endl;
}