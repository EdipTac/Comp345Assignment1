#include <string>

using namespace std;


class RoleCard{
private:
	string _role;
	string _description;
	string _color;
public:
	RoleCard();
	RoleCard(string role, string description, string color);
	void printRole();
};