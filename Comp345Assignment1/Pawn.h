#include <string>
using namespace std;

class Pawn{
public:
	Pawn();
	Pawn(string color, string position);
	
private:
	string _color;
	string _position;
};