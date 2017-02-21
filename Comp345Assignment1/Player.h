#include <string>
#include <vector>
#include "ReferenceCard.h"
#include "RoleCard.h"
#include "DeckofRefs.h"
#include "Pawn.h"
#include "DeckofRoles.h"
#include <memory>
using namespace std;

class Player{
private:
	string _name;
	unique_ptr<ReferenceCard> _myReference;
	RoleCard _myRole;
	
public:
	Player();
	Player(string name, RoleCard role);
	void displayRole();
	

	//void drawRef(DeckOfRefs deckofReferenceCards); not sure if this is required, can just be done in the constructor of player
	//void drawRole(DeckofRoles deckofRoleCards); not sure if this is required, can just be done in the constructor of player

};