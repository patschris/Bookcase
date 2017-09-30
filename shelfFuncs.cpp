#include <iostream>
#include "books_header.hpp"

using namespace std;


Shelf::Shelf(int L) {
	N =0;
	max=L;
	cout << "Shelf constructed" << endl;
}


Shelf::~Shelf() {
	cout << "Shelf destructed" << endl;
}


/* If the shelf is not full, place a book in this shelf */
bool Shelf ::place_book () {
    bool status = true;
	if (N >= max) status = false;
    else N++;
	return status;
}


/* If the shelf is not empty, take a book */
bool Shelf::take_book() {
    bool status = false;
	if (N) {
		N--;
		status = true;
	}
	return status;
}
