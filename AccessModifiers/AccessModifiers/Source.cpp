#include <iostream>
#include <string>
using namespace std;

class Creature			// Create new class
{
public:					// Start public zone

	Creature();			// Prototype of default constructor
	Creature(string locName);			// Overload constructor prototype

	void SetName(string locName)			// Typical setter function
	{
		name = locName;

	}
	float GetHealth()				// Typical getter function
	{

		return health;
	}
	string GetName()				// Typical getter function
	{
		return name;

	}
	void SetIsDead(bool locIsDead)
	{
		isDead = locIsDead;

	}
	bool GetIsDead()
	{
		return isDead;

	}
	// Take damage an print info, until creature not died. After died print another info
	void TakeDamage(float locDamage)			
	{
		if ((GetIsDead() != true) && (health - locDamage <= 0.f))
		{
			health = 0;
			SetIsDead(true);
		}
		else if (health > 0.f)
		{
			health -= locDamage;
		}
		else {}
		
					
		if (GetIsDead()==false)
		{
			cout << "Taking " << locDamage << " Damage";
			cout << "Health = " << GetHealth() << endl;
		}
		else
		{
			cout << "Already dead\n";
		}
		
	}
	void PrintName()
	{
		cout << GetName() << " has been created! \n";
	}

private:				// Start private zone

	string name = "default";
	float health = 100.f;
	bool isDead = false;
		
protected:			// Start protected zone

	int numberOfLimbs = 0;
};

class Humanoid :public Creature
{
public:
	Humanoid()
	{
		numberOfLimbs = 4;			// Access to protected variables, because Humanoid inheritance from Creature
		cout << "Humanoid was created\n";
	};

	Humanoid(string numLocName):Creature(numLocName){}
	
};


int main()
{

	Creature Zombie("Zombieeee");
	Zombie.PrintName();
	
	
	Zombie.TakeDamage(30.f);
	Zombie.TakeDamage(18.f);
	Zombie.TakeDamage(27.f);
	Zombie.TakeDamage(90.f);
	Zombie.TakeDamage(90.f);
	Zombie.TakeDamage(90.f);
	Zombie.TakeDamage(90.f);

	Humanoid Goblin("Gobliiii");
	Goblin.PrintName();

	


}

Creature::Creature()			// Body constructor
{
			   
}

Creature::Creature(string locName)			// Overload body constructor
{
	SetName(locName);
}

