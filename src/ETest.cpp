#include "Entry.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "Integer test" << endl;
    Entry<int> eI("hello", 7);
    cout << "Key: " << eI.getKey() << endl;
    cout << "Value: " << eI.getValue() << endl;
    
    cout << endl;

    cout << "Double Test" << endl;
    Entry<double> eD("world", 7.77);
    cout << "Key: " << eD.getKey() << endl;
    cout << "Value: " << eD.getValue() << endl;
    
    cout << endl;
    
    cout << "String Test" << endl;
    Entry<std::string> eS("hello", "world");
    cout << "Key: " << eS.getKey() << endl;
    cout << "Value: " << eS.getValue() << endl;

    return 0;
}
