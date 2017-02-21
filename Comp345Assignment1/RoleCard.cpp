#include <string>
#include <iostream>
#include "RoleCard.h"
using namespace std;



RoleCard::RoleCard()
	: _role{ "" }, _description{ "" }, _color{ "" }
{

}

RoleCard::RoleCard(string role, string description, string color)
	: _role{ role }, _description{ description }, _color{ color }
{
	
}
void RoleCard::printRole() {
	std::cout << _role << endl << _color << endl << _description << endl;
}