#ifndef __ABONENT_H__
#define __ABONENT_H__

#include <string>


class Abonent
{

public:

	Abonent(std::string name);

	std::string GetName();
	int GetindexRequest();

	void SendMessage(Abonent& abonent);
	void GenerationMessage(Abonent& abonent);
	void RecieveMessage(Abonent& abonent);


private:
	std::string name;
	std::string msg;
	int indexRequest;

};

#endif