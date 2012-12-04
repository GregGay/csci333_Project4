#include "HashTable.h"
#include <iostream>
#include <list>

using std::string;
using std::cout;
using std::endl;

template <typename V>
HashTable<V>::HashTable(V def) {
    table = new list<Entry<V>* >[1009];
    Def = def;
}
/*
template <template V>
HashTable<V>::~HashTable() {
    delete[] table;
}
*/
template <typename V>
int HashTable<V>::hashFunction(string key) {
    int size = 1009; 	//prime number
    int sum = 0;
    
    for (int i = 0; i < (int)key.size(); ++i) {
	  cout << "key: " << key << endl;
	  cout << "ASCII code: " << (int) key[i] << endl;
	  sum += (int)key[i];
    }
    
    int hash = sum%size;

    cout << "hash: " << hash << endl;
    return 0;
}

template <typename V>
void HashTable<V>::insert(string key, V v) {
    Entry<V>* temp = new Entry<V>(key, v);
    int x = hashFunction(key);
    typename list<Entry<V>* >::iterator it;
    
    for (it = table[x].begin(); it != table[x].end(); ++it) {
	  if ((*it)->getKey() == key) {
		(*it)->setValue(v);
		return;
	  }
	  //if (table[x].front()->getKey() == key) {
	//	table[x].front()->setValue(v);
	  //}
    }

    table[x].push_back(temp);
}

template <typename V>
V HashTable<V>::find(string key) {
    int x = hashFunction(key);
    list<Entry<V>* > cur = table[x];

    typename list<Entry<V>* >::iterator it;
    for (it = table[x].begin(); it != table[x].end(); ++it) {
	  if ((*it)->getKey() == key) {
		return (*it)->getValue();
	  }
    }
    /*while(!cur.empty()) {
	  if (cur.front()->getKey() == key) {
		return cur.front()->getValue();
	  }
	  cur.pop_front();  //Deletes cur element at front, finds next element
    }*/
    
    return Def;	        //Return default value(0)
}

template <typename V>
void HashTable<V>::remove(string key) {
    insert(key, Def);
}

template class HashTable<int>;
template class HashTable<double>;
template class HashTable<string>;
