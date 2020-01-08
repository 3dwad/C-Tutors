#include <iostream> //Добавил библиотеку инпут аутпут поток
using namespace std; // Добавил возможность использовать стандартное пространство имён
int main()
{
	//std::cout << "You Died!\n"; // вывод стринга

	char myCharacter; // char содержит один символ
	myCharacter = 'y';

	int myInt;
	myInt = 13;

	cout << myInt << endl; // endl равноценно '/n'
	cout << myCharacter << endl;
	// short это меньше int
	// long это больше int
	// double это больше float

	system("pause"); // пауза
}