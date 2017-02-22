#pragma once
#include <string>




class RoleCard{
private:
	std::string _role;
	std::string _description;
	std::string _color;
public:
	RoleCard();
	RoleCard(std::string role, std::string description, std::string color);

	std::string getRole;
	std::string getDescrip;
	std::string getColor;
	void printRole();
};