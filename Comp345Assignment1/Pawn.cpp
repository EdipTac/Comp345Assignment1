#include "Pawn.h"



Pawn::Pawn(){
	 _color = "";
	 _position = "Atlanta";
}

Pawn::Pawn(std::string col, std::string pos){
	_color = col;
	_position = pos;
}

