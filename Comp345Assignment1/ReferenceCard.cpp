#include "ReferenceCard.h"
#include <iostream>
#include <vector>



ReferenceCard::ReferenceCard(){
	
	
	//vector <string> _actions{ _driveFerry, _directFlight, _charterFlight, _shuttleFlight, _buildResearchStation, _treatDisease, _shareKnowledge, _discoverCure };
	
	
	std::vector <std::string> temp;
	temp.push_back("Drive/Ferry: \nMove to a city connected by a white line to the one you are in.");
	temp.push_back("Direct Flight: \nDiscard a city card to move to the city named on the card.");
	temp.push_back("Charter Flight: \nDiscard the city card that MATCHES the city you are in to move to ANY city.");
	temp.push_back("Shuttle Flight: \nMove from a city with a research station to any other city that has a research station.");
	temp.push_back("Build a Research Station: \nDiscard the city card that matches the city you are in to place a research station there. "
							"Take the research station from the pile next to the bard. If all the 6 research stations "
							"have been builtm take a research station from anywhere on the board.");
	temp.push_back("Treat Disease: \nRemove 1 disease cube from the city you are in, placing it in the cube suppled next to the board. "
					"If this disease color has been cured (see Discover a Cure below), remove all cubes of that color from "
					"the city you are in. \n If the LAST CUBE of a CURED DISEASE is removed from the board, this disease is "
					"ERADICATED. Flip its cure marker from its VIAL side to its ERADICATED side");
	temp.push_back("Share Knowledge: \nYou can do this action in two ways: \n GIVE the city card that matches the city you are in to another "
					"player, or \n TAKE a city card that matches the city you are in from another player. \n  The other player "
					"must also be in the city with you. Both of you need to agree to do this. if the player who gets the card "
					"now has more than 7 cards, that player must immediately discard a card or play an Event card.");
	temp.push_back("Discover a Cure: \nAt ANY research station, discard 5 city cards of the same color from your hand to cure the disease of THAT "
				"COLOR. Move the disease's cure marker to its Cure indicator. \n If no cubes of this color are on the board, this "
				"disease if now ERADICATED. Flip its cure marker from its VIAL side to its ERADICATED side.");

	std::vector <std::string> _actions = temp;

	/*_driveFerry = "Move to a city connected by a white line to the one you are in.";
	_directFlight = "Discard a city card to move to the city named on the card.";
	_charterFlight = "Charter Flight: \nDiscard the city card that MATCHES the city you are in to move to ANY city.";
	_shuttleFlight = "Shuttle Flight: \nMove from a city with a research station to any other city that has a research station.";
	_buildResearchStation = "Build a Research Station: \nDiscard the city card that matches the city you are in to place a research station there. "
							"Take the research station from the pile next to the bard. If all the 6 research stations "
							"have been builtm take a research station from anywhere on the board.";
	_treatDisease = "Treat Disease: \nRemove 1 disease cube from the city you are in, placing it in the cube suppled next to the board. "
					"If this disease color has been cured (see Discover a Cure below), remove all cubes of that color from "
					"the city you are in. \n If the LAST CUBE of a CURED DISEASE is removed from the board, this disease is "
					"ERADICATED. Flip its cure marker from its VIAL side to its ERADICATED side";
	_shareKnowledge = "Share Knowledge: \nYou can do this action in two ways: \n GIVE the city card that matches the city you are in to another "
					"player, or \n TAKE a city card that matches the city you are in from another player. \n  The other player "
					"must also be in the city with you. Both of you need to agree to do this. if the player who gets the card "
					"now has more than 7 cards, that player must immediately discard a card or play an Event card.";
	_discoverCure = "Discover a Cure: \nAt ANY research station, discard 5 city cards of the same color from your hand to cure the disease of THAT "
				"COLOR. Move the disease's cure marker to its Cure indicator. \n If no cubes of this color are on the board, this "
				"disease if now ERADICATED. Flip its cure marker from its VIAL side to its ERADICATED side.";*/
	

}