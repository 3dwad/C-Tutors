#pragma once
#include <iostream>
#include "Actor.h"
using namespace std;

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;

	void PawnFunction();
protected:
private:
};
