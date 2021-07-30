/*---------------------------------------------*/
/*    ���������� ������� ������ Controller.    */
/*---------------------------------------------*/

#include <iostream>
#include "Controller.h"

using namespace std;

int Controller::MaxSizeList;

void Controller::AddAbonent(Abonent& abonent)
{

	listAbonent.push_back(abonent);							// push_back() �� std::vector ��������� ������ abonent � ����� ���. ������� listAbonent.
	cout << " ������� ������� " << abonent.GetName() << endl;

}

void Controller::StartNetwork()
{
	MaxSizeList = listAbonent.size();					// ������ ������� MaxSizeList - ���������� ��������� � ����.



	for (int i = 0; i < MaxSizeList; i++)
	{
		cout << endl;
		cout << "-------------------------------" << endl;
		cout << "�������: " << listAbonent[i].GetName() << endl;
		cout << "-------------------------------" << endl;
		listAbonent[i].GenerationMessage(listAbonent[i]);
	}
}

void Controller::ServeRequest(Abonent& abonent)
{
	cout << "�������������� �������� �� �������� " << abonent.GetName() << endl << "..." << endl;

	if ((abonent.GetindexRequest() > (MaxSizeList - 1)) || (abonent.GetindexRequest() < 0))
	{
		cout << "������� �� ������. � ���� ������������ �������� �� 0 �� " << (MaxSizeList - 1) << ". �������� ������ ������������� ��������." << endl << endl;

		abonent.SendMessage(abonent);
	}
	else
	{
		cout << "��������� ������ �������. ��������� ���������� ��������-����������." << endl << "..." << endl;
		abonent.RecieveMessage(abonent);
	}


}

