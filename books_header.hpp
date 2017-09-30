#ifndef __books_header__
#define __books_header__


class Base {
    public: 
        Base();
        ~Base();

};


class Shelf {
    private:
        int N,max;

    public:
        Shelf(int);
        ~Shelf();
        bool place_book();
        bool take_book();
};


class Closet {
    private:
        Shelf shelfAbove, shelfBelow;
    public:
        Closet(int);
        ~Closet();
        bool place_book(int);
        bool take_book(int);
};
 


class Bookcase {
    private:
        Base base;
        Closet closet;
        Shelf shelfAbove, shelfMiddle, shelfBelow;
        int books, size;
    public:
        Bookcase(int);
        ~Bookcase();
        void place_book(int);
        void take_book(int);
};


#endif
