#include "RandomSen.h"
#include <iostream>
#include <string>

using namespace std;

void RandomSen::q()
{
	/*
	~~still will be installed in the next version~~
	cout << " Make your way to the exit by going ";
	cout << "\n through each stage and choosing the ";
	cout << "\n best choice possible. \n";
	*/

	cout << "\n **** ****		**** **** \n\n";

	cout << " Sam: Any new cases for today? ";

	string vehicle = "Cheve Impala";
	string& car = vehicle;
	string* ptr = &vehicle;

	cout << "\n\n Dean: Nothing for once, wow great day. ";
	cout << "\n Wanna go for a ride in the " << vehicle << "";

	cout << "\n\n Sam: Yea lets go.";
	cout << "\n So where are we going.";

	cout << "\n\n Dean: Well first I want a beer ";
	cout << "\n and second Im hungry but most of ";
	cout << "\n all I want to go to a bar. ";

	cout << "\n\n Sam: Rough day?";

	cout << "\n\n Dean: Read this.";

	cout << "\n Vechicle " << vehicle << "License Plate #: " << &vehicle;
	cout << "\n Dear Dean Winchester,  \n";
	cout << "\n\t You have an outstanding unpaid balance on ";
	cout << "\n\t your vehicle. Due to this, your vehicle \n";
	cout << "\n\t will be towed on Monday, Septemeber 1. \n";
	cout << "\n\t If you manage to locate the funds by this time ";
	cout << "\n\t text " << vehicle << "to 157. Good Day Mr.Winchester.";

	cout << "\n\n Sam: Lets get a move on.";
	cout << "\n\n ** 9:19am leaving base ** \n\n";

	system("pause");
}

void RandomSen::w()
{
	cout << "\n\n Sam: Did they remodel the mall? ";

	cout << "\n\n Dean: Honestly, probably. I havent ";
	cout << "\n seen so much action in one place. ";

	cout << "\n\n Sam: Action? oh the ladies.";
	cout << "\n of course.";

	cout << "\n\n Dean: Last one to get a number ";
	cout << "\n has to buy the beer...?";

	cout << "\n\n Sam: Heh, Your on. ";
	cout << "\n Dude did we just miss the turn? ";

	cout << "\n\n Dean: Look. \n";

	// input road sign function?
	roadSign();

	system("pause");
}

void RandomSen::roadSign()
{
	cout << "\n ******************************* ";

	cout << "\n\n K E E P	S T R A I G H T ";
	cout << "\n\n M A L L	5	 M I L E S ";
	cout << "\n\n G A S		5	 M I L E S ";
	cout << "\n\n T O W N        1 0      M I L E S \n\n";

	cout << " ******************************* \n\n";

	cout << " ** 11:40am I-10 ** \n\n";

}

int RandomSen::userName()
{
	return 0;
}

//introduce kid 
void RandomSen::e()
{

	cout << "\n\n Sam: I couldve sworn we've been down that road before. ";

	cout << "\n\n Dean: Remember that case with the Watsons? \n";
	cout << "\n The one with the kid that threw us across the ";
	cout << "\n room. Not ONCE, Not TWICE, but multiple times.";

	cout << "\n\n Sam: Yea I remember that one....";
	cout << "\n I was fortunate enough to be thrown outside of the ";
	cout << "\n house and dragged though the yard. ";

	cout << "\n\n Dean: What was that kids name though? ";

	cout << "\n\n Sam: Hang on, I'm sure I can find it. \n";

	cout << "\n ** Whats the kids name? ** \n\n";

	system("pause");

	cout << "\n\n Sam: Says here that kids name was Jack.";
	cout << "\n I dont even remember how we beat him. ";

	cout << "\n\n Castiel: That's because you didn't. ";
	cout << "\n None of us remember what happened.";
	cout << "\n The reason for that is why I am here, ";
	cout << "\n Jack is not dead in fact he is coming.";

	cout << "\n\n Dean: So your telling me the son of the ";
	cout << "\n Crowley, our favorite King of Hell? ";

	cout << "\n\n Sam: Well what does he want Cass? ";

	cout << "\n\n Castiel: I think we all know what he wants.";

	cout << "\n\n Sam & Dean: **** How you doing Cass";

	cout << "\n\n Castiel: Im ok other then my approaching doom, ";
	cout << "\n can I tag along with you guys ? I'll buy the beer.";

	cout << "\n\n Dean: (Now Smiling) Next stop Winchester Mall. ";

	cout << "\n\n ** 12:00pm Intersection to Mall ** \n\n";

	system("pause");
}

//finish 
void RandomSen::r()
{
	cout << "\n\n ** 12:30pm The Mall ** \n\n";

	cout << "\n Jack: I guess Cass forgot Im an angel too. \n";
	cout << "\n Oh hey he did all the looking for me..";
	cout << "\n Might as well SAY HELLO!";

	cout << "\n Castiel: Guys, Jack knows where we are, \n";
	cout << "\n and he just woke up the Damned.";

	cout << "\n\t\t Jack: You really shouldnt under";
	cout << "\n\t\t estimate kids, more specifically, ";
	cout << "\n\t YOU SHOULDNT HAVE UNDERESTIMATED ME!";
	
	cout << "\n\n Cass: Pray to me when this is done. Im ";
	cout << "\n needed in heaven. Please forgive me. ";

	cout << "\n\n Dean: Welp there goes our big gun ...";

	cout << "\n\n Sam: We'll handle him later right now ";
	cout << "\n I think we have bigger problems. \n\n\n";
}
