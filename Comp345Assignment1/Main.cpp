#include <iostream>
#include "DeckofRefs.h"
#include "DeckofRoles.h"
#include "RoleCard.h"
#include "ReferenceCard.h"
#include "Pawn.h"
#include "Player.h"
#include <memory>
#include <string>

using namespace std;


class Main {

	

	DeckOfRefs referenceDeck{};
	
	DeckofRoles roleCardDeck{};

	
	Player p1("player1", roleCardDeck.drawRoleCard());

	Player* p2 = new Player("player1", roleCardDeck.drawRoleCard());
	Player p2;
};