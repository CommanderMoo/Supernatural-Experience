#pragma once
#include <string>
using namespace std;


class Person
{
public:
	Person();
	Person(string userName);

	void setName(string userName);
	string getName();

private:
	string Name;
};