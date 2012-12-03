BUILD = ../build
CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: main main2 HashTable.o Entry.o

main: HashTableTest.cpp HashTable.o Entry.o
	  $(CPP) $(CFLAGS) -o $(BUILD)/HashTest HashTableTest.cpp HashTable.o Entry.o

main2: ETest.cpp Entry.o
	  $(CPP) $(CFALGS) -o $(BUILD)/EntryTest ETest.cpp Entry.o

Entry.o: Entry.h Entry.cpp
	  $(CPP) $(CFLAGS) -c Entry.cpp

HashTable.o: HashTable.h HashTable.cpp
	  $(CPP) $(CFLAGS) -c HashTable.cpp

clean:
	  rm -f *.o;
	  rm -f *~;
	  rm -f main; 
	  rm-f main2;
