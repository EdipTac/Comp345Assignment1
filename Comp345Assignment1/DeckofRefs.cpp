#include <string>
#include <vector>
#include "ReferenceCard.h"
#include "RoleCard.h"
#include "DeckofRefs.h"
#include <memory>


DeckOfRefs::DeckOfRefs(){
	for (int i = 0; i < 3; i++){
		deckOfRef.push_back(std::make_unique<ReferenceCard>());
	}
}

cardptr DeckOfRefs:: drawRefCard(){
	auto temp = move(*deckOfRef.begin());
	deckOfRef.erase(deckOfRef.begin());
	return (move(temp));

}