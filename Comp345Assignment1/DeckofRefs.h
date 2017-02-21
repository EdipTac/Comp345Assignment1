#include <string>
#include <vector>
#include "ReferenceCard.h"
#include "RoleCard.h"
#include <memory>
using namespace std;
using cardptr = unique_ptr < ReferenceCard > ;

class DeckOfRefs{
public:
	DeckOfRefs();
	cardptr drawRefCard();

private:
	vector <unique_ptr <ReferenceCard>> deckOfRef;
};