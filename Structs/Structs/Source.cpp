#include <iostream>
#include <string>
using namespace std;

struct locationVector			//Создали новый типа данных - структуру 
{

	float X;
	float Y;
	float Z;

};

struct player			//Создали новый типа данных - структуру
{
	int level;
	float health;
	float damage;
	float stamina;
	locationVector location = { 35.f,28.7f,13.f };			//Зафигачил структуры внутрь структуры. И тут же ее инициализировал.

	void Damage(float dmg)			//Внутри структуры могут быть и функции!!
	{

		health -= dmg;

	}
	int GetLevel()			//Классическая функция гета.
	{
		if (level>10)
		{
			cout << "Level is Max"<< endl;
		}
		return level;
	}

	void DisplayLocation()
	{

		cout << "X = " << location.X << endl;
		cout << "Y = " << location.Y << endl;
		cout << "Z = " << location.Z << endl;

	}
	
};


int main()
{

	player p_1;			//Создали инстанс типа player
	p_1.level = 13;
	p_1.health = 100.f;
	p_1.damage = 10.f;
	p_1.stamina = 20.f;
	

	cout << "p_1 Level = " << p_1.GetLevel() << endl;

	p_1.Damage(40.f);
	cout << "p_1 have " << p_1.health << " health" << endl;

	p_1.DisplayLocation();

	player p_2 = { 3,750.f,3.f,80.f,{28.f,37.f,50.f}};			// Так можно инициализировать структуру на одной строке. Главное вбивать параметры в нужном порядке. Структуру внутри структуры можно так же сразу объявить.
	p_2.DisplayLocation();

}