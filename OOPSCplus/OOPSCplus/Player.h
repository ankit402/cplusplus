#include <iostream>
#include <string>
#include <thread>
using namespace std;

class Player {

private:
	string name;
	int health;
	int xp;
	bool stop;
public:
	//default constructor
	Player();
	// copy constructor added here
	Player(const Player &source);
	// overloaded constructor
	Player(string name_val);
	Player(string name, int health, int xp);

	// constructor with default parameter
//	Player(string name = "None", int health_vale = 0, int xp = 0);
	void set_name(string n);
	void display_player(Player p);
	string get_name();
	// Destructor
	~Player();
	
};