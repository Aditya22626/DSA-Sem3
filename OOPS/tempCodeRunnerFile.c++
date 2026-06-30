#include <iostream>
using namespace std;

class Counter {
    static int count;  // Declaration
public:
    Counter() {
        count++;
        cout << "Constructor called. Count = " << count << endl;
    }
    ~Counter() {
        count--;
        cout << "Destructor called. Count = " << count << endl;
    }
};