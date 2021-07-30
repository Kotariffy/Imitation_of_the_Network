#include <iostream>
#include <string>
#include <time.h>

#include "Abonent.h"
#include "Controller.h"

using namespace std;

int main()
{

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	bool bExit = false;


	Controller controller;

	Abonent ab1("name1");
	Abonent ab2("name2");
	Abonent ab3("name3");


	while (!bExit)
	{

		cout << "\n-------------����--------------" << endl;
		cout << "1 - �������� ������� � ����" << endl;
		cout << "2 - ������ �������� ���������" << endl;
		cout << "3 - �����" << endl;
		cout << "������� ���� �����: ";

		int variant;
		cin >> variant; cout << endl;


		switch (variant)
		{
		case 1:

			controller.AddAbonent(ab1);
			controller.AddAbonent(ab2);
			controller.AddAbonent(ab3);

			system("pause");
			system("cls");

			break;

		case 2:

			controller.StartNetwork();
			break;

		case 3:

			bExit = true;
			break;

		default:
			cout << "������������ ����. ��������� �����: 1, 2, 3" << endl;
		}
	}
	return 0;
}

