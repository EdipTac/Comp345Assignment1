#include <string>
#include <vector>
#include "ReferenceCard.h"
#include "RoleCard.h"
#include "DeckofRefs.h"
#include <memory>
using namespace std;

DeckOfRefs::DeckOfRefs(){
	for (int i = 0; i < 3; i++){
		deckOfRef.push_back(make_unique<ReferenceCard>());
	}
}

cardptr DeckOfRefs:: drawRefCard(){
	auto temp = move(*deckOfRef.begin());
	deckOfRef.erase(deckOfRef.begin());
	return (move(temp));

}