#include <iostream>
#include <string>
using namespace std;

class Object
{
public:

	virtual void BeginPlay();			// Declaration virtual function


protected:
private:
};

class Actor: public Object
{
public:
	virtual void BeginPlay() override;			//"virtual" mean that function can overload in child classes. "override" mean this is already overloading function

};

class Pawn :public Actor
{
public:

	virtual void BeginPlay() override;			//"virtual" mean that function can overload in child classes. "override" mean this is already overloading function

};

int main()
{

	Object* OBJ = new Object;			// Dynamically create pointer and initialize him. Pointer locate in Stack, but OBJ locate in Heap
	OBJ->BeginPlay();			// Call function from pointer


	delete OBJ;

	Actor* InsOBJ = new Actor;			// Dynamically create pointer and initialize him. Pointer locate in Stack, but OBJ locate in Heap
	InsOBJ->BeginPlay();			// Call function from pointer

	delete InsOBJ;

	Pawn* SomePawn = new Pawn;			// Dynamically create pointer and initialize him. Pointer locate in Stack, but OBJ locate in Heap
	SomePawn->BeginPlay();			// Call function from pointer

	delete SomePawn;


}


	void Object::BeginPlay()			// Body of function
	{

		cout << "Object BeginPlay() called\n";

	}

	void Actor::BeginPlay()			// Overloading virtual function

	{

		cout << "Actor BeginPlay() called\n";
//		Object::BeginPlay();			// Call parent variant of function
	}

	void Pawn::BeginPlay()			// Overloading virtual function
	{

		cout << "Pawn BeginPlay() called\n";			
		Actor::BeginPlay();			// Call parent variant of function
		Object::BeginPlay();			// Call parent parent variant of function
	}
