#include "RandomSen.h"
#include "Controller.h"
#include <iostream>
#include <string>
using namespace std;

//putting this here allows it to be used everywhere
string userName;

int main()
{
	// Title
	cout << "\n\n\t *** Supernatual Experience *** \n\n";
	cout << " Welcome to my Project, whats your name? \n";
	cin >> userName;
	cout << " Welcome: " << userName << ". Thanks \n";
	cout << " for trying out my newest story.";
	cout << "\n\t  Enjoy  \n\n";
	system("pause");
	cout << "\n***********************************\n";
	
	


	
	Controller controller;
	controller.playerTurn();

	return 0;
}

//Dream last night
// intruder / shooter
// play as the person who fights back 
// or saves someone.
// classic sam and dean names
