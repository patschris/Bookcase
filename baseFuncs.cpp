#include <iostream>
#include "books_header.hpp"

using namespace std;


Base :: Base (){
	cout << "Base constructed" << endl;
}


Base :: ~Base (){
	cout << "Base destructed" << endl;
}
