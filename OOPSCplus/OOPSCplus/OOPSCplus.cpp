#include <iostream>
#include "stdafx.h"
#include "Account.h"
#include "Player.h"
#include "Shallow.h"
using namespace std;

int main() {

//Account
	Account frankaccount;
	frankaccount.set_name("Ankit's Account");
	frankaccount.set_balance(1000.0);
	if (frankaccount.deposit(200.0)) 
		cout << "Deposit OK" << endl;
	else
		cout << "Deposite Not allowed" << endl;
	if (frankaccount.withdrawal(1500.0)) 
		cout << "withdrawal OK" << endl;
	else
		cout << "withdrawal Not allowed" << endl;

// Player
	Player player; // None , 0 , 0 
	Player frank{ frank }; // Frank ,0,0
	cout << "No constructor args" << endl;
	player.set_name("Slayer");
	Player villan("Villian", 100, 23); // villian , 100 ,23
	villan.set_name("villain");
	// constructor default parameter
	Player hero {"Hero" , 0 ,0 };
	Player *enemy = new Player("Enemy", 1000, 0);
	delete enemy; // destructor called
	player.display_player(hero);
	Player empty{ "XXXXX" , 100 , 0 };
	Player myobject_empty(empty);
	player.display_player(empty);

	Shallow obj1{ 100 };
	//obj1.Display_shallow(obj1);
	cout << obj1.get_data_value() << endl;

	return 0;
}