/*---------------------------------*/
/*   Описание класса Сontroller.   */
/*---------------------------------*/

#pragma once
#include "Abonent.h"
#include <vector>


class Controller
{
public:

	void AddAbonent(Abonent& abonent);
	static void ServeRequest(Abonent& abonent);
	void StartNetwork();


private:

	static int MaxSizeList;
	std::vector <Abonent> listAbonent;
};

