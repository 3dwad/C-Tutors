#include <iostream>
using namespace std;

void welcome();
char GetYesNo();
void PrintResponse(char responseToPrint);
void AskYesOrNoQuestion();

int main()
{
	// Просит пользователя ввести Y или N и выводит на экран
	AskYesOrNoQuestion();
	}

void welcome()
{
	// Приветствие
	cout << "welcome \n";
}
char GetYesNo()
{
	// Просит ввести 
	cout << "Please enter y or n \n";

	// Локальная переменная для хранения ответа
	char localResponse;

	// Команда ввода
	cin >> localResponse;

	return localResponse;
}
void PrintResponse(char responseToPrint)
{
	// Вывод на экран ответа
	cout << "Your answer:" << responseToPrint << endl;
}
void AskYesOrNoQuestion()
{
	// Собрано всё в одну функцию
	welcome();
	char answer = GetYesNo();
	PrintResponse(answer);

}