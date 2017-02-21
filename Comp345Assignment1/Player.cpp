#include <string>
#include <iostream>
#include "Player.h";
using namespace std;

Player::Player(){
	_name = "";
	_myReference = make_unique<ReferenceCard>();
	_myRole = RoleCard();
	
}

Player::Player(string name, RoleCard role) : _name(name), _myReference(make_unique<ReferenceCard>()), _myRole(role) {
	/*_name = name;
	_myReference = make_unique<ReferenceCard>();
	_myRole = role;*/

}


void Player::displayRole() {
	_myRole.printRole();
}



