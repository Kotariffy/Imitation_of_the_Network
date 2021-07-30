/*---------------------------------------------*/
/*    Реализация методов класса Controller.    */
/*---------------------------------------------*/

#include <iostream>
#include "Controller.h"

using namespace std;

int Controller::MaxSizeList;

void Controller::AddAbonent(Abonent& abonent)
{

	listAbonent.push_back(abonent);							// push_back() из std::vector добавляет объект abonent в конец дин. массива listAbonent.
	cout << " Передан абонент " << abonent.GetName() << endl;

}

void Controller::StartNetwork()
{
	MaxSizeList = listAbonent.size();					// Размер массива MaxSizeList - количество абонентов в сети.



	for (int i = 0; i < MaxSizeList; i++)
	{
		cout << endl;
		cout << "-------------------------------" << endl;
		cout << "Абонент: " << listAbonent[i].GetName() << endl;
		cout << "-------------------------------" << endl;
		listAbonent[i].GenerationMessage(listAbonent[i]);
	}
}

void Controller::ServeRequest(Abonent& abonent)
{
	cout << "Обрабатывается собщение от абонента " << abonent.GetName() << endl << "..." << endl;

	if ((abonent.GetindexRequest() > (MaxSizeList - 1)) || (abonent.GetindexRequest() < 0))
	{
		cout << "Абонент не найден. В сети присутствуют абоненты от 0 до " << (MaxSizeList - 1) << ". Выберите индекс существующего абонента." << endl << endl;

		abonent.SendMessage(abonent);
	}
	else
	{
		cout << "Обработка прошла успешно. Сообщение передается абоненту-получателю." << endl << "..." << endl;
		abonent.RecieveMessage(abonent);
	}


}

