#include <iostream>
#include <string>

using namespace std;

enum playerStatus //������� ���� ��� ������
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

int main()

{
	playerStatus status; // ������ ���������� ���� playerStatus. ������������� status

	status = PS_Standing; //����� ��������� ��������



	if (status == PS_Standing)
	{
		cout << "Player status is:" << status << endl;

	}

	status = PS_Running;

	if (status == PS_Running)
	{
		cout << "Player status is:" << status << endl;
	}

	//switch (status)
	//{
	//	case PS_Running

	//}




}