#include <iostream>
#include "books_header.hpp"

using namespace std;


Bookcase::Bookcase (int L): closet(L),shelfAbove(L), shelfMiddle(L), shelfBelow(L){
	books = 0;
	size = 5*L;
	cout << "Bookcase constructed with maximum capacity " << size << endl;
}


Bookcase::~Bookcase(){
	cout << "Bookcase destructed" << endl;
}


/* 
    Place a book in the shelf pos, if it's not full 
    Shelfs 4 and 5 are inside a closet
*/
void Bookcase::place_book(int pos) {
	cout << "Trying to place a book to the shelf " << pos << endl;
	switch(pos){
		case 1:     if (shelfAbove.place_book() == true) {
				        books++;
				        cout << "The book placed to the shelf " << pos << endl;
			        }
			        else {
                        cout << "The shelf " << pos << " is full"<< endl;
                    }
		            break;

		case 2:     if (shelfMiddle.place_book() == true) {
				        books++;
                        cout << "The book placed to the shelf " << pos <<endl;
			        }
			        else { 
                        cout << "The shelf " <<pos << " is full" << endl;
                    }
			        break;

		case 3:     if (shelfBelow.place_book() == true) {
                        books++;
				        cout << "The book placed to the shelf " << pos <<endl;
			        }
			        else {
                        cout << "The shelf " <<pos << " is full" << endl;
                    }
			        break;		

		case 4:     if (closet.place_book(1)==true) books++; 			
			        break;

		case 5:     if (closet.place_book(2)==true) books++;
			        break;

		default:    cout << "There is no shelf with number " << pos << endl; 
	}
}


/*
    Take a book in the shelf pos, if it's not empty 
    Shelfs 4 and 5 are inside a closet
*/
void Bookcase::take_book(int pos){
	cout <<"Trying to remove a book to the shelf " << pos << endl;
	switch(pos) {
		case 1: if (shelfAbove.take_book() == false) {
                    cout << "The shelf " <<pos << " is empty" << endl;
                } 
			    else {
                    books--;
				    cout << "The book was removed by the shelf " << pos << endl;
			    }
			    break;
		case 2: if (shelfMiddle.take_book() == false)	{
                    cout << "The shelf " <<pos << " is empty" << endl; 
                }
			    else {
                    books--;
				    cout << "The book was removed by the shelf " << pos << endl;
			    }
			    break;
		case 3: if (shelfBelow.take_book() == false) {
                	cout << "The shelf " << pos << " is empty "<< endl; 
                }
			    else {
                    books--;
				    cout << "The book was removed by the shelf " << pos << endl;
			    }
			    break;		
		case 4: if (closet.take_book(1)==true) books--;
			    break;
		case 5:     if (closet.take_book(2)==true) books--;
                    break;
		default:    cout << "There is no self with number " << pos << endl;
	}
}
