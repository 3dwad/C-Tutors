#include <iostream>
using namespace std;

void welcome();
char GetYesNo();
void PrintResponse(char responseToPrint);
void AskYesOrNoQuestion();

int main()
{
	// ������ ������������ ������ Y ��� N � ������� �� �����
	AskYesOrNoQuestion();
	}

void welcome()
{
	// �����������
	cout << "welcome \n";
}
char GetYesNo()
{
	// ������ ������ 
	cout << "Please enter y or n \n";

	// ��������� ���������� ��� �������� ������
	char localResponse;

	// ������� �����
	cin >> localResponse;

	return localResponse;
}
void PrintResponse(char responseToPrint)
{
	// ����� �� ����� ������
	cout << "Your answer:" << responseToPrint << endl;
}
void AskYesOrNoQuestion()
{
	// ������� �� � ���� �������
	welcome();
	char answer = GetYesNo();
	PrintResponse(answer);

}