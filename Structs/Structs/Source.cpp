#include <iostream>
#include <string>
using namespace std;

struct locationVector			//������� ����� ���� ������ - ��������� 
{

	float X;
	float Y;
	float Z;

};

struct player			//������� ����� ���� ������ - ���������
{
	int level;
	float health;
	float damage;
	float stamina;
	locationVector location = { 35.f,28.7f,13.f };			//��������� ��������� ������ ���������. � ��� �� �� ���������������.

	void Damage(float dmg)			//������ ��������� ����� ���� � �������!!
	{

		health -= dmg;

	}
	int GetLevel()			//������������ ������� ����.
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

	player p_1;			//������� ������� ���� player
	p_1.level = 13;
	p_1.health = 100.f;
	p_1.damage = 10.f;
	p_1.stamina = 20.f;
	

	cout << "p_1 Level = " << p_1.GetLevel() << endl;

	p_1.Damage(40.f);
	cout << "p_1 have " << p_1.health << " health" << endl;

	p_1.DisplayLocation();

	player p_2 = { 3,750.f,3.f,80.f,{28.f,37.f,50.f}};			// ��� ����� ���������������� ��������� �� ����� ������. ������� ������� ��������� � ������ �������. ��������� ������ ��������� ����� ��� �� ����� ��������.
	p_2.DisplayLocation();

}