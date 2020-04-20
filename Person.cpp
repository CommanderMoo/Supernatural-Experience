//#include "Person.h"
#include "Angel.h"
#include <string>
using namespace std;



Person::Person()
{
	setName("");
}

Person::Person(string userName)
{
	setName(userName);
}
//methods
void Person::setName(string userName)
{
	Name = userName;
}
string Person::getName()
{
	return Name;
}
