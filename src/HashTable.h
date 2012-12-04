#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__

#include "Entry.h"
#include <iostream>
#include <list>
#include <string>

using std::list;
using std::string;

template <typename V>
class HashTable {
    private:
	  list<Entry<V>* >* table;
	  V Def;

    public: 
	  HashTable(V def);
	  ~HashTable();
	  int hashFunction(string key);
	  void insert(string key, V v);
	  V find(string key);
	  void remove(string key);
};

#endif
