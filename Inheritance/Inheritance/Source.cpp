#include<iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal();			//Prototype constructor

	string name;
	int age;
	int numberOfLimbs;

	void Report();			//Prototype of function

};

int main()
{

	Animal animal;

}

Animal::Animal()			// Constructor`s body
{

	cout << "Animal was born" << endl;

	name = "Musya";
	age = 3;
	numberOfLimbs = 4;

}

void Animal::Report()			//Function body
{



}