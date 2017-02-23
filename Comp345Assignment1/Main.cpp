#include <iostream>
#include "DeckofRefs.h"
#include "DeckofRoles.h"
#include "RoleCard.h"
#include "ReferenceCard.h"
#include "Pawn.h"
#include "Player.h"
#include <memory>
#include <string>

/* Student: Edip Tac, ID: 26783287 Comp 345: Assignment 1

this is the main area where the game is deployed. Since the code is written for only the common part and distinct part 1
of the assignment, only those 2 requirements are tested in the following code.
*/



int main () {

	

	DeckOfRefs referenceDeck{}; //creating a deck of reference cards
	
	DeckofRoles roleCardDeck{}; //creating a deck role cards


	Player p1("Player1", roleCardDeck.drawRoleCard()); //initializing the first player with his name and a randomly drawn role card
	p1.displayRole(); //displaying the role card and its content
	p1.displayReference(); //displaying the reference card and its content
	
	//the following is identical to above but for the 2nd player
	Player p2("Player2", roleCardDeck.drawRoleCard());
	p2.displayRole();
	p2.displayReference();

	system("pause");

};