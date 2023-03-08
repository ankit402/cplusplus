#ifndef  __ACCOUNT_H__  //if not, it includes the code
#define __ACCOUNT_H__   //header guards
//Their primary purpose is to prevent C++ header files from being included multiple times.
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Account {
private :
	//attribute
	string name;
	double balance;
public:
	//default constructor
	Account();
	// copy constructor
	Account(const Account &source);
	// one parameter constructor
	Account(string name_val);
	// overloaded parameteric constrctor
	Account(string name, double balance);
//	Account(string name= "Account", double balance = 0.00);
	// overloaded constructor
	//Account();
	/*Account(string name, double balance);
	Account(string name);
	Account(double balance);*/
	//method
	//declare inline
	void set_balance(double bal) {
		balance = bal;
	}
	double get_balance() {
		return balance;
	}
	// method will be declared outside of the class declaration
	void set_name(string n);
	string get_name();
	bool deposit(double amount);
	bool withdrawal(double amount);
	// Destructor
	~Account();
};
#endif // ! __ACCOUNT_H__
