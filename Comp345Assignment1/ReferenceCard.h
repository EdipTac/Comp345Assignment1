#pragma once
#include <vector>
#include <string>




class ReferenceCard{
private:
	std::vector <std::string> _actions;
	std::string _driveFerry;
	std::string _directFlight;
	std::string _charterFlight;
	std::string _shuttleFlight;
	std::string _buildResearchStation;
	std::string _treatDisease;
	std::string _shareKnowledge;
	std::string _discoverCure;
public:
	ReferenceCard();
	// print the contents of a card --> use string stream
};