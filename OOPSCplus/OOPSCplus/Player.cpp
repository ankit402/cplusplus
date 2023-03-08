#include "stdafx.h"
#include <string>
#include "Player.h"
using namespace std;
// default copy constructor memberwise copy
//Delegating Constructor : code for one constructor can call another in the initialization list
// :: resolution operator
Player::Player() : name{ "None" }, health{ 0 }, xp{ 0 } { }
Player::Player(string name_val) : name{ name_val }, health{ 0 }, xp{ 0 } { }
// Default constructor parameter
Player::Player(string name_val, int health, int xp) : name{ name_val }, health{ health }, xp{ xp } {}
//constructor call
//Player::Player() : Player{ "None" ,0,0 }{cout << "No overload args" << endl;}
//Player::Player(string name_val) : Player{ name_val ,0,0 } {cout << "One Arguement Constructor overload args" << endl;}
//Player::Player(string name_val) : name{ name_val }, health{ 0 }, xp{ 0 } {cout << "One Arguement Constructor overload args" << endl;}
//Player::Player(string name_val, int health, int xp) : Player{ name_val, health, xp }{cout << "Three Arguement Constructor overload args" << endl;}
// copy constructor source is use to point the address of copy constructor
Player::Player(const Player &source) : name{ source.name }, health{ source.health }, xp{ source.xp } { cout << "copy constructor made copy of :" << endl; }
//Player::Player(string name, int health, int xp) {	
//	name = this->name;
//	health = this->health;
//	xp = this->xp;
//	cout << "overload method args" << endl;
//};
void Player::display_player(Player p) {
	cout << "Calling display player" << endl;
	cout << "Get Name " << p.get_name() << endl;
	cout << "Name" << p.name << endl;
	cout << "health" << p.health << endl;
	cout << "xp" << p.xp << endl;
}

Player::~Player()
{
	cout << "Destructor Args" << endl;
}
void Player::set_name(string n) {
	name = n;
}
string Player::get_name() {
	return name;
}
