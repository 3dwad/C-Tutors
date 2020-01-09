#include <iostream>
#include <string>
using namespace std;


void Print(string str);// Прототип
void Print(int i);// Перегрузка функции
void Print(string str1, string str2);// Перегрузка функции
void Print(int i, string str);

int main()
{

	Print(235,"Mystroke");


}

void Print(string str)// Тело

{
	cout << str << endl;
	}
void Print(int i) // Тело перегрузки функции
{
	cout << i << endl;
}
void Print(string str1, string str2) // Тело перегрузки функции
{

	cout << str1 << endl;
	cout << str2 << endl;

}
void Print(int i, string str) // Тело перегрузки функции
{

	cout << "Integer value:" << i << endl;
	cout << str << endl;

}