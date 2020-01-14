#include <iostream>
#include <string>
using namespace std;

class Character
{
public:
	Character();
	~Character();

	int* characrterAge;			// Create pointer type int. Locate in Stack
	float* characrterHealth;			// Create pointer type float. Locate in Stack

protected:
private:
};

int main()
{

	Character* Billy = new Character;			// Dynamically create Character and initialize him, and call Constructor

	delete Billy;			// Delete Billy Character, and call Destructor

}


Character::Character()
{

	cout << "New character was created\n";

	characrterAge = new int(1);			// Dynamically initialize variable. Locate in Heap
	characrterHealth = new float(100.f);			// Dynamically initialize variable. Locate in Heap
	
}
Character::~Character()
{
	cout << "Character destroyed\n";

	delete characrterAge;			// Delete and clear memory
	delete characrterHealth;			// Delete and clear memory

}