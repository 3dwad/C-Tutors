#include <iostream>
#include <string>
using namespace std;

void ChangeStr(string& str);//Прототип функции. & Делает ссылку, а не просто берет значение.


int main()
{
	string myStr = "Druid";//Объявил переменную

	ChangeStr(myStr);//Вызывал функцию

	cout << myStr << endl;

}

void ChangeStr(string& str) // Тело функции
{

	str += "!";

}