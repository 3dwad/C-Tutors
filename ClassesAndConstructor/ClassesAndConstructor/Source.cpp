#include <iostream>
#include <string>

using namespace std;

class Dog			//Create new class Dog
{
public:				//Code under "public:" available to call from out. By default all body class is private

	Dog();			//Constructor prototype, like functions
//	Dog()			//This is constructor. He must be named same as class
//	{				//This constructor body. This logic will be worked when object created
//		Bark();		
//
//		name = "Default name";
//		age = 2;
//		health = 100.f;
//
//	}

	string name;
	int age;
	float health;

	void Bark();		//Prototype of function
	//{
//
//		cout << "Woof!" << endl;
//
//	}



};

int main()
{

	Dog dog;			//Create object of class Dog

	cout << dog.name << endl;
	cout << dog.age << endl;
	cout << dog.health << endl;

	dog.name = "Layka";
	dog.age = 4;
	dog.health = 87.f;

	cout << dog.name << endl;
	cout << dog.age << endl;
	cout << dog.health << endl;
}

Dog::Dog()			//Constructor`s body
{
	Bark();

	name = "Default name";
	age = 2;
	health = 100.f;

}

void Dog::Bark()			//Body of function in Dog class
{
	cout << "Woof!" << endl;


}