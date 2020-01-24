#pragma once
#include <string>
class myClass
{
public:
	int number;
	std::string str;

	myClass(std::string s="", int n=0):str(s), number(n){}
};

