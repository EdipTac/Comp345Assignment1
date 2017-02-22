#include <iostream>
#include "DeckofRefs.h"
#include "DeckofRoles.h"
#include "RoleCard.h"
#include "ReferenceCard.h"
#include "Pawn.h"
#include "Player.h"
#include <memory>
#include <string>




int main () {

	

	DeckOfRefs referenceDeck{};
	
	DeckofRoles roleCardDeck{};
	std::string player1name = "Player1";
	std::cout << player1name;
	system("pause");

	Player p1(player1name, roleCardDeck.drawRoleCard());

	//Player* p2 = new Player(player1name, roleCardDeck.drawRoleCard());
	//Player p2;
};