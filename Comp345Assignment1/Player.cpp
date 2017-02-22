#include <string>
#include <iostream>
#include <memory>
#include "Player.h"


Player::Player(){
	_name = "";
	_myReference = std::make_unique<ReferenceCard>();
	_myRole = std::make_unique<RoleCard>();
	
}

Player::Player(std::string name, std::unique_ptr<RoleCard> role) : _name(name), _myReference(std::make_unique<ReferenceCard>()), _myRole(std::make_unique<RoleCard>(role)) {
	/*_name = name;
	_myReference = make_unique<ReferenceCard>();
	_myRole = role;*/

}


void Player::displayRole() {
	_myRole->printRole();
	
}
void Player::setRoleCard(std::unique_ptr<RoleCard> role) {
	_myRole = std::make_unique<RoleCard> (role);
}

void Player::setName(std::string name) {
	_name = name;
}

void Player::setReference(std::unique_ptr<ReferenceCard>) {
	_myReference = std::make_unique<ReferenceCard>();
}


