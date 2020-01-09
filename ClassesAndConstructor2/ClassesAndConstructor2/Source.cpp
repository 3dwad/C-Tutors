#include <iostream>
#include <string>
using namespace std;

struct cat			//New data structure 
{

	cat();			//Constructor available in structure

	int age;
	float health;

	void Meow();			//Prototype function
};



int main()
{

	cat Musya;



}

cat::cat()			//Body of constructor
{

	age = 10;
	health = 120.f;

	cout << "A new cat is born!" << endl;

	Meow();
}

void cat::Meow()			//Body of function
{

	cout << "Ma age is " << age << endl;
	cout << "Ma health is " << health << endl;


}