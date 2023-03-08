#include "stdafx.h"
#include <string>
#include "Shallow.h"
using namespace std;

Shallow::Shallow(int k) {
	cout << "Shallow constructor args" << endl;
}


//shallow copy 
Shallow::Shallow(const Shallow &source) : data(source.data) {
	cout << "Destructor constructor-shallow args" << endl;
}

Shallow::~Shallow() {
	delete data;
	cout << "Destructor constructor-shallow args" << endl;
}

//void display_shallow(Shallow s) {
//	cout << "Destructor constructor-shallow args" << s.Display_shallow() << endl;
//}
