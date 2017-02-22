#pragma once
#include <string>
#include <vector>
#include "ReferenceCard.h"
#include "RoleCard.h"
#include <memory>
using cardptr = std::unique_ptr < ReferenceCard > ;

class DeckOfRefs{
public:
	DeckOfRefs();
	cardptr drawRefCard();

private:
	std::vector <std::unique_ptr <ReferenceCard>> deckOfRef;
};