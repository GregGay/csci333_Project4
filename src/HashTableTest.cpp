#include "HashTable.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
    HashTable<int>* intHash = new HashTable<int>(0);
    
    cout << "Integer insert, find, and remove" << endl;
    cout << "Value f(not in table) is: " << intHash->find("f") << endl;
    cout << endl;
    
    intHash->insert("h", 8);
    cout << endl;
    
    intHash->insert("g", 7);
    cout << endl;
    
    cout << "Value g is: " << intHash->find("g") << endl;
    cout << endl;
    
    cout << "Value h is: " << intHash->find("h") << endl;
    cout << endl;
    
    intHash->remove("h");
    cout << endl;
    
    cout << "Find value of removed key h: " << intHash->find("h") << endl;
    
    cout << "Double insert, find, and remove" << endl;
    HashTable<double>* dHash = new HashTable<double>(0.0001);
    
    cout << "Value f(not in table) is: " << dHash->find("f") << endl;
    cout << endl;
    
    dHash->insert("h", 8.5618);
    cout << endl;
    cout << "Value h is: " << dHash->find("h") << endl;
    
    dHash->insert("g", 77.777);
    cout << endl;
    
    cout << "Value g is: " << dHash->find("g") << endl;
    cout << endl;
    
    cout << "Value h is: " << dHash->find("h") << endl;
    cout << endl;
    
    dHash->remove("h");
    cout << endl;
    
    cout << "Find value of removed key h: " << dHash->find("h") << endl;

    cout << "String insert, find, and remove" << endl;
    //HashTable<string>* strHash = new HashTable<string>("default");
    HashTable<string>* strHash = new HashTable<string>("");
    
    cout << "Value f(not in table) is: " << strHash->find("f") << endl;
    cout << endl;
    
    strHash->insert("h", "hello");
    cout << endl;
    cout << "Value h is: " << strHash->find("h") << endl;
    
    strHash->insert("g", "goodbye");
    cout << endl;
    
    cout << "Value g is: " << strHash->find("g") << endl;
    cout << endl;
    
    cout << "Value h is: " << strHash->find("h") << endl;
    cout << endl;
    
    strHash->remove("h");
    cout << endl;
    
    cout << "Find value of removed key h: " << strHash->find("h") << endl;

    return 0;
}
