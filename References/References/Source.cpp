#include <iostream>
#include <string>
using namespace std;

void ChangeStr(string& str);//�������� �������. & ������ ������, � �� ������ ����� ��������.


int main()
{
	string myStr = "Druid";//������� ����������

	ChangeStr(myStr);//������� �������

	cout << myStr << endl;

}

void ChangeStr(string& str) // ���� �������
{

	str += "!";

}