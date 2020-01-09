#include<iostream>
#include <string>


using namespace std;

class Animal
{
public:					//Create public zone. Now we can access from the outside
	Animal();			//Prototype constructor
	Animal(string locName, int locAge, int locNumbersOfLimbs);			//Prototype constructor overload

	string name;
	int age;
	int numberOfLimbs;

	void Report();			//Prototype of function

};

class Dog :public Animal			//Create inheritance Dog class from Animal
{
public:					//Create public zone. Now we can access from the outside
	Dog();				//Prototype constructor
	Dog(string dogLocName, int dogLocAge, int dogLocNumbersOfLimbs);			//Prototype constructor overload
	void Speak();
	
};

class Layka :public Dog			//Create inheritance Layka class from Dog
{};




int main()
{
	Layka barbos;
	barbos.Speak();
	barbos.Report();
	Dog dog("Overload Dog",8,12);
	dog.Speak();
	dog.Report();			
		
	
	
	
	
//	Animal animal;								//Create animal instance
//	animal.Report();							//Call function
//	Animal animal_2("Spider", 3, 16);			//Another variant create animal with overloaded constructor 
	
}

Animal::Animal()			// Constructor`s body
{

	cout << "Animal was born" << endl;

	name = "Default";
	age = 3;
	numberOfLimbs = 4;
	
	

}

Animal::Animal(string locName, int locAge, int locNumbersOfLimbs)			//Body constructor overload
{
	name = locName;
	age = locAge;
	numberOfLimbs = locNumbersOfLimbs;
	
}

//Animal::Animal(string locName, int locAge, int locNumberOfLimbs)			//Another type to initialize overloaded constructor
//	: name(locName), age(locAge), numberOfLimbs(locNumberOfLimbs)			
//{
//}


void Animal::Report()			//Function body
{
	cout << endl;
	cout << "Name " << name << endl;
	cout << "Age " << age << endl;
	cout << "Number of limbs " << numberOfLimbs << endl;
	cout << endl;
}
Dog::Dog()			// Constructor`s body
{
//	name = "Layka";
//	age = 2;
//	numberOfLimbs = 4;
	cout << "Dog was born" << endl;
};

Dog::Dog(string dogLocName, int dogLocAge, int dogLocNumbersOfLimbs) :
	Animal(dogLocName, dogLocAge, dogLocNumbersOfLimbs)			//Call overload constructor from parent, and feed to him arguments.
																//Use ":" for call only this constructor, and skip parent default constructor
{
//	name = locName;
//	age = locAge;
//	numberOfLimbs = locNumbersOfLimbs;

	cout << "Overload Dog was born" << endl;
	
};

void Dog::Speak()
{
	cout << "Woof!\n";

}