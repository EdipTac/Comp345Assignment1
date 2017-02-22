#pragma once
#include <string>
#include <vector>
#include "RoleCard.h"
#include <memory>

using uniquerolecard = std::unique_ptr < RoleCard >;

class DeckofRoles{
public: 
	DeckofRoles();
	uniquerolecard drawRoleCard();

private:
	std::vector < uniquerolecard > deckofRole;
	
};