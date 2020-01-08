#include<iostream>
#include <string>


using namespace std;

class Animal
{
public:
	Animal();			//Prototype constructor
	Animal(string locName, int locAge, int locNumberOfLimbs);			//Prototype constructor overload

	string name;
	int age;
	int numberOfLimbs;

	void Report();			//Prototype of function

};

int main()
{

	Animal animal;
	animal.Report();
	Animal animal_2("Spider", 3, 16);			//Another variant create animal with overloaded constructor 
	
}

Animal::Animal()			// Constructor`s body
{

	cout << "Animal was born" << endl;

	name = "Musya";
	age = 3;
	numberOfLimbs = 4;
	

}

//Animal::Animal(string locName, int locAge, int locNumberOfLimbs)			//Body constructor overload
//{
//	name = locName;
//	age = locAge;
//	numberOfLimbs = locNumberOfLimbs;
//}

Animal::Animal(string locName, int locAge, int locNumberOfLimbs)			//Another type to initialize overloaded constructor
	: name(locName), age(locAge), numberOfLimbs(locNumberOfLimbs)			
{
	Report();
}





void Animal::Report()			//Function body
{

	cout << "Name " << name << endl;
	cout << "Age " << age << endl;
	cout << "Number of limbs " << numberOfLimbs << endl;
}