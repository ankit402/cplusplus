#include <iostream>
#include <string>
#include <thread>
using namespace std;

class Shallow {
private:
	int *data;  // pointer
public:
	Shallow(int d); // constructor
	Shallow(const Shallow &source);  // copy constructor
	~Shallow(); // destructor 
	int get_data_value() {
		return *data;
	}
	void set_data(int d) {
		*data = d;
	}
	void Display_shallow(int k) {
		data = new int;
		*data = k;
	}
};