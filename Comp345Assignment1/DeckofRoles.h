#include <string>
#include <vector>
#include "RoleCard.h"
#include <memory>
using namespace std;
using uniquerolecard = unique_ptr < RoleCard >;

class DeckofRoles{
public: 
	DeckofRoles();
	uniquerolecard drawRoleCard();

private:
	vector < uniquerolecard > deckofRole;
	
};