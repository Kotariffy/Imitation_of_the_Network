
/*---------------------------------------------*/
/*     Реализация методов класса Abonent.      */
/*---------------------------------------------*/

#include <string>
#include <iostream>
#include "Abonent.h"
#include "Controller.h"

using namespace std;

int countMsg = 0;										// Глобальная переменная, считающая кол-во отправленных сообщений. 


Abonent::Abonent(string name)							// Конструктор.
{
	this->name = name;
}

string Abonent::GetName()								//Функция, возвращающая имя абонента.
{
	return name;
}

int Abonent::GetindexRequest()							// Функция, возвращающая индекс запрашиваемого абонента. Нужна в описании класса "Контроллер".
{
	return indexRequest;
}

void Abonent::GenerationMessage(Abonent& abonent)			// Генерация отправки сообщения. Если "true", то запрос отправится, если "false", то нет.
{
	bool random = rand() % 2 == 1;

	if (random)
	{

		cout << "Запрос принят." << endl;
		countMsg++;											//Запрос принят, значит в сети добавилось +1 сообщение.
		SendMessage(abonent);								// Вызов функции отправки сообщения. 
	}
	else
	{


		cout << "Запрос не принят." << endl;
		system("pause");
		system("cls");
	}
}

void Abonent::SendMessage(Abonent& abonent)
{

	cout << "Введите индекс абонента, которому передается сообщение:";
	cin >> abonent.indexRequest; cout << endl;

	abonent.msg = "Абонент " + abonent.name + " Сообщение №" + to_string(countMsg);		//Формируем сообщение.
	cout << "Отправить абоненту " << abonent.indexRequest << " сообщение:" << " Абонент " + abonent.name + " Сообщение №" + to_string(countMsg) << endl;
	Controller::ServeRequest(abonent);
}

void Abonent::RecieveMessage(Abonent& abonent)
{
	cout << "Принято сообщение: " << msg << endl << endl;
	system("pause");
	system("cls");
}


