#include <iostream>
#include <cstdlib>
#include <ctime>
#include "validateArgs.hpp"
#include "books_header.hpp"

using namespace std;


int main(int argc, char* argv[])  {
    
	int i, x, y, K, L;	
    
	if (argc < 2) {	
		cout << "You should give exactly 2 arguments" << endl;
		return -1; 
	}
    if (!validate(argv[1]) || !validate(argv[2])) {
        cout << "Arguments should be integers" << endl;
		return -2; 
    }
    K = atoi(argv[1]);
    L = atoi(argv[2]);
	Bookcase b(L);
	srand(time (NULL));
    cout << endl;
	for (i=0;i<K;i++) {
		x = rand()%5 + 1; // select shelf for the action
		y = rand()%2; // 0: place book in shelf x, 1: take book from self x 
		cout << "Action " << i+1 << ":" << endl; 
		if (y)	b.place_book(x);
		else b.take_book(x);
        cout << endl;
	}
	return 0;
}
