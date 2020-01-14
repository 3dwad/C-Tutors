#include <iostream>
#include <string>
using namespace std;

class Critter
{
public:


	static void AnnounceCritterCount()			// This is static function
	{

		cout << critterCount << endl;
	}



	static int critterCount;			// Static variable inside class. Can not initialize when declared
	Critter();			// Prototype constructor

};

int Critter::critterCount = 0;			// Can initialize only from out



int main()
{

	//Critter::critterCount = 13;			// We can work with static variable class member, even no one instance class is exist

//	cout << Critter::critterCount << endl;			// We can work with static variable class member, even no one instance class is exist


	Critter crit;			// Each instance have access to critterCount, but critterCount exist only one
	Critter::AnnounceCritterCount();			// We can call static function right from class

	Critter crit2;			// Each instance have access to critterCount, but critterCount exist only one
	Critter::AnnounceCritterCount();			// We can call static function right from class
}

Critter::Critter()			// Body of constructor
{
	cout << "Critter was born\n";
	critterCount++;

}