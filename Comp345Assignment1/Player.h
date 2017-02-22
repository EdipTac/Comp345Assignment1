#pragma once
#include <string>
#include <vector>
#include "ReferenceCard.h"
#include "RoleCard.h"
#include "DeckofRefs.h"
#include "Pawn.h"
#include "DeckofRoles.h"
#include <memory>


class Player{
private:
	std::string _name;
	std::unique_ptr<ReferenceCard> _myReference;
	std::unique_ptr<RoleCard> _myRole; //changed it from RoleCard _myRole;
	
public:
	Player();
	Player(std::string name, std::unique_ptr<RoleCard> role);
	void displayRole();
	void setName(std::string otherName);
	void setRoleCard(std::unique_ptr<RoleCard> role);
	void setReference(std::unique_ptr<ReferenceCard> reference);
	

	//void drawRef(DeckOfRefs deckofReferenceCards); not sure if this is required, can just be done in the constructor of player
	//void drawRole(DeckofRoles deckofRoleCards); not sure if this is required, can just be done in the constructor of player

};