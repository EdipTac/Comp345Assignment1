#include <string>
#include <iostream>
#include "RoleCard.h"



RoleCard::RoleCard()
	: _role{ "" }, _description{ "" }, _color{ "" }
{

}

RoleCard::RoleCard(std::string role, std::string description, std::string color)
	: _role( role ), _description( description ), _color( color )
{
	
}
RoleCard::RoleCard(const RoleCard &obj) {
	_color = obj.getColor;
	_role = obj.getRole;
	_description = obj.getDescrip;
}
void RoleCard::printRole() {
	std::cout << _role << std::endl << _color << std::endl << _description << std::endl;
}
