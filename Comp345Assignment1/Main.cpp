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
	


	
	/*p1.setName("Player1");
	p1.setRoleCard(roleCardDeck.drawRoleCard);
	p1.setReference;

	std::cout << p1.displayRole << std::endl;
*/


	Player p1("Player1", roleCardDeck.drawRoleCard());
	p1.displayRole();
	system("pause");
	//Player* p2 = new Player(player1name, roleCardDeck.drawRoleCard());
	//Player p2;
};