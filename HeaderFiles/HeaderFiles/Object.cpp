#include "Object.h"


Object::Object()
{
	BeginPlay();
}

void Object::BeginPlay()
{

	cout << "Object BeginPlay() called. \n\n";
}

void Object::ObjectFunction()
{

	cout << "ObjectFunction() called. \n\n";
}
