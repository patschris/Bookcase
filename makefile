CC		= g++
CFLAGS	= -g3 -Wall
EXEC 	= bookcase
OBJS 	= bookcaseFuncs.o main.o shelfFuncs.o closetFuncs.o baseFuncs.o validateArgs.o
SRCS 	= bookcaseFuncs.cpp main.cpp shelfFuncs.cpp closetFuncs.cpp baseFuncs.cpp validateArgs.cpp


.PHONY : all

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

bookcaseFuncs.o: bookcaseFuncs.cpp
	$(CC) $(CFLAGS) -c bookcaseFuncs.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

shelfFuncs.o: shelfFuncs.cpp
	$(CC) $(CFLAGS) -c shelfFuncs.cpp

closetFuncs.o: closetFuncs.cpp
	$(CC) $(CFLAGS) -c closetFuncs.cpp

baseFuncs.o: baseFuncs.cpp
	$(CC) $(CFLAGS) -c baseFuncs.cpp

validateArgs.o: validateArgs.cpp
	$(CC) $(CFLAGS) -c validateArgs.cpp


.PHONY: clean

clean:
	rm -f $(OBJS) $(EXEC)
