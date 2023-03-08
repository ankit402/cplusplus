#include "stdafx.h"
#include "Account.h"

void Account::set_name(string n) {
	name = n;
}
//Default constructor
Account::Account(){cout << "Default constructor Args" << endl;}
// two param constructor
Account::Account(string name, double balance) { name = this->name; balance = this->balance; }
//Delegating Constructor : code for one constructor can call another in the initialization list
//Account::Account(string name_val, double bal) : name{ name_val }, balance{ bal } {  };
// single -Delegating param constructor
//Account::Account(string name_val) : Account { name_val, 0 } {cout << "One Arguement Constructor overload args" << endl;}
// multivalued -Delegating constructor
//Account::Account(string name_val, double bal) : Account{ name_val , bal } {cout << "Multivalued constructor overload args"; }
//copy constructor without param 
//Account::Account(const Account &source) {}
//copy constructor 
Account::Account(const Account &source) : name{ source.name }, balance{ source.balance } { cout << "Copy constructor made of copy " << endl; }
string Account::get_name()
{
	return name;
}
bool Account::deposit(double amount) {
	balance += amount;
	return true;
}
bool Account::withdrawal(double amount) {
	if (balance - amount >= 0) {
		balance -= amount;
		return true;
	}
	else {
		return false;
	}
}
// destructor called
Account::~Account() {
	cout << "Destructor Args" << endl;
}

