#ifndef __ENTRY_H__
#define __ENTRY_H__
#include <string>

using std::string;

template <typename V>
class Entry {
    private:
	  string key;
	  V value;

    public:
	  Entry(string K, V v);
	  //~Entry();
	  string getKey();
	  V getValue();
	  void setValue(V v);
};

#endif
