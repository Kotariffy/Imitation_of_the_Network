
/*---------------------------------------------*/
/*     ���������� ������� ������ Abonent.      */
/*---------------------------------------------*/

#include <string>
#include <iostream>
#include "Abonent.h"
#include "Controller.h"

using namespace std;

int countMsg = 0;										// ���������� ����������, ��������� ���-�� ������������ ���������. 


Abonent::Abonent(string name)							// �����������.
{
	this->name = name;
}

string Abonent::GetName()								//�������, ������������ ��� ��������.
{
	return name;
}

int Abonent::GetindexRequest()							// �������, ������������ ������ �������������� ��������. ����� � �������� ������ "����������".
{
	return indexRequest;
}

void Abonent::GenerationMessage(Abonent& abonent)			// ��������� �������� ���������. ���� "true", �� ������ ����������, ���� "false", �� ���.
{
	bool random = rand() % 2 == 1;

	if (random)
	{

		cout << "������ ������." << endl;
		countMsg++;											//������ ������, ������ � ���� ���������� +1 ���������.
		SendMessage(abonent);								// ����� ������� �������� ���������. 
	}
	else
	{


		cout << "������ �� ������." << endl;
		system("pause");
		system("cls");
	}
}

void Abonent::SendMessage(Abonent& abonent)
{

	cout << "������� ������ ��������, �������� ���������� ���������:";
	cin >> abonent.indexRequest; cout << endl;

	abonent.msg = "������� " + abonent.name + " ��������� �" + to_string(countMsg);		//��������� ���������.
	cout << "��������� �������� " << abonent.indexRequest << " ���������:" << " ������� " + abonent.name + " ��������� �" + to_string(countMsg) << endl;
	Controller::ServeRequest(abonent);
}

void Abonent::RecieveMessage(Abonent& abonent)
{
	cout << "������� ���������: " << msg << endl << endl;
	system("pause");
	system("cls");
}


