#include <iostream>
#include <string>

using namespace std;

int main()
{

	int a = 100;			//��������� ���� Int

	int* aPtr;			//������ ������� ���� int
	aPtr = &a;			//��������������� �������. ����� �� ����� ������ ��� int* aPtr = &a;

	cout << aPtr << endl;			//����� ������ � 16-�������� �������. ��� ����� � ������ ��� �������� ������ ���� ���������� �������� int a
	cout << *aPtr << endl;			//����������� �������. �� ���� ������� ��������.

	int b = 50;			//����� �������� ���� int

	aPtr = &b;			//����������� ��� �� ������� ��� �������������. �� ���� ������ � ��� �������� ���������� � ����� � ������ int b

	cout << *aPtr << endl;
}