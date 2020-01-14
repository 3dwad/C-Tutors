#include <iostream>
#include <string>

using namespace std;

class Object
{
public:

	virtual void BeginPlay();

protected:
private:
};

class Actor : public Object
{
public:

	virtual void BeginPlay() override;
protected:
private:
};

class Pawn : public Actor
{
public:

	virtual void BeginPlay() override;
protected:
private:
};

int main()
{

	Object* Obj1 = new Object;			// Pointer to Object, but initialize Object
	Actor* Act1 = new Actor;			// Pointer to Object, but initialize OActor
	Pawn* Pwn1 = new Pawn;			// Pointer to Object, but initialize Pawn

	Object* ptrArray[]{ Obj1, Act1, Pwn1 };			// Array from pointers
	for (int i=0;i<3;i++)
	{
		ptrArray[i]->BeginPlay();			// BeginPlay called from each pointer, with unique function from each class. Polymorphisms in action!

	}

	delete Obj1;
	delete Act1;
	delete Pwn1;

}

void Object::BeginPlay()			// Parent function 
{

	cout << "Object BeginPlay() called. \n\n";

}

void Actor::BeginPlay()			// Override function
{

	cout << "Actor BeginPlay() called. \n\n";
}

void Pawn::BeginPlay()			// Override function
{
	cout << "Pawn BeginPlay() called. \n\n";

}
