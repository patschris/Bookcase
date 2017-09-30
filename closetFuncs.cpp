#include <iostream>
#include "books_header.hpp"

using namespace std;


Closet::Closet(int L):shelfAbove(L), shelfBelow(L) {
	cout << "Closet constructed" << endl;
}


Closet::~Closet(){
	cout << "Closet destructed" << endl;
}


/*
    Every closet has two shelves
    If the shelf defined by pos isn't full, a book can be placed
*/
bool Closet::place_book (int pos) {
    bool status = true;
    switch (pos) {
        case 1:     if (shelfAbove.place_book() == true) {
                        cout << "The book placed in the closet " << pos+3 << endl;
                    }
                    else {
                        cout << "The closet " << pos +3 << " is full" << endl;
                        status = false;
                    }
                    break;

        case 2:     if (shelfBelow.place_book() == true) {
                        cout << "The book placed in the closet " << pos+3 << endl;
                    }
                    else {
        			    cout << "The closet " << pos +3 << " is full" << endl;
        			    status = false;
                    }
                    break;

        default:    cout << "Non valid closet number" << endl;
                    status = false;            
    }
    return status;
}


/*
    Every closet has two shelves
    If the shelf defined by pos isn't empty, a book can be removed
*/
bool Closet::take_book (int pos) {
    bool status = true;
    switch (pos) {
        case 1:     if (shelfAbove.take_book() == false){
            		    cout << "The closet " << pos+3 << " is empty" << endl; 
			            status = false;
                    }
                    else {
                        cout << "The book was taken by the closet " << pos+3 << endl; 
                    }
                    break;
        case 2:     if (shelfBelow.take_book() == false){
            		    cout << "The closet " << pos+3 << " is empty" << endl; 
			            status = false;
                    }
                    else {
                        cout << "The book was taken by the closet " << pos+3 << endl; 
                    }
                    break;
        default:	cout << "Non valid closet number" << endl;
                    status = false;
    }
    return status;
}
