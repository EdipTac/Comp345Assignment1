#pragma once
#include <string>


class Pawn{
public:
	Pawn();
	Pawn(std::string color, std::string position);
	
private:
	std::string _color;
	std::string _position;
};