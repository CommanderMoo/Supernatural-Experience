#pragma once
#include "Person.h"
#include <string>
using namespace std;


class Angel : public Person
{
public:
	Angel();
	Angel(string userName);

	void setName(string userName);
	string getName();

private:
	string Name;

};


