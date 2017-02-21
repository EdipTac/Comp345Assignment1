#include "Pawn.h"

using namespace std;


Pawn::Pawn(){
	 _color = "";
	 _position = "Atlanta";
}

Pawn::Pawn(string col, string pos){
	_color = col;
	_position = pos;
}

