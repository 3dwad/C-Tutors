#include <iostream>
#include <string>
using namespace std;

struct character
{

	character();			//Prototype of constructor
	string name;
	float health;

	void PrintHealth();			//Prototype of function

};

int main()
{

	for (int locI = 0; locI < 10; locI ++)
	{
		character* ptrWarrior = new character();			// "new" for dynamic create objects. He automatic put into heap. And do not automatic delete when function stop work

				
		cout << "Character was created, name= " << ptrWarrior->name << endl;

		ptrWarrior->PrintHealth();

		delete ptrWarrior;						//"delete" to free memory from heap
	}
	


	






}

character::character()
{
	name = "default name";			//Body of constructor
	health = 100.f;

}

void character::PrintHealth()			//Body of function
{

	cout << "Health = " << health << endl;
}