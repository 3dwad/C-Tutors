#include <iostream>
#include <string>
using namespace std;

enum playerStatus // ������ ����� ��� ������
{

	PS_Running,
	PS_Walking,
	PS_Crouching
	
};


const float runSpeed = 800.f;
const float walkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(playerStatus locStatus, float& locMovementSpeed); // �������� �������



int main()
{

	float MovementSpeed;

	playerStatus status = PS_Crouching;

	UpdateMovementSpeed(status, MovementSpeed);

		cout << MovementSpeed << endl;


}

void UpdateMovementSpeed(playerStatus locStatus, float& locMovementSpeed) // ���� �������
{
	
	switch (locStatus) // �������

	{
	case PS_Running:
		locMovementSpeed = runSpeed;
		break;
	case PS_Walking:
		locMovementSpeed = walkSpeed;
		break;
	case PS_Crouching:
		locMovementSpeed = CrouchSpeed;
		break;
	default:					//������� �� ���������. ��� �� ��� ���� ������� ��� ������.
		cout << "Invalid type";
	}
	   
	}
