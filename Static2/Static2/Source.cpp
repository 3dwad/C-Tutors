#include <iostream>
#include <string>
using namespace std;

class Item
{
public:
	Item()			// Constructor
	{

		cout << "Item was created\n";
	}
	~Item()			// Destructor
	{
		cout << "Item was destroyed\n";
	}
};



int main()
{
	{
		static Item Sword;			// Static Item sword. Exist until program end.
	}
	system("pause");
						// Sword will destroyed only this. In the end.
}