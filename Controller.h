#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

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

#endif