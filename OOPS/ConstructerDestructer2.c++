// #include <iostream>
// using namespace std;

// class Demo {
// public:
//     Demo() {
//         cout << "Constructor called" << endl;
//     }
//     ~Demo() {
//         cout << "Destructor called" << endl;
//     }
// };

// int main() {
//     Demo d; // Constructor runs here
// } // Destructor runs here (object goes out of scope)



//// Constructor with static data members

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

int Counter::count = 0; // Definition

int main() {
    Counter c1, c2;
    {
        Counter c3;
    } // Destructor for c3 called
    Counter c4;
}


//// Distructor with static members

// #include <iostream>
// using namespace std;

// class Resource {
//     static int activeObjects;
// public:
//     Resource() {
//         activeObjects++;
//         cout << "Object created. Active = " << activeObjects << endl;
//     }
//     ~Resource() {
//         activeObjects--;
//         cout << "Object destroyed. Active = " << activeObjects << endl;
//     }
//     static int getActiveObjects() {
//         return activeObjects;
//     }
// };

// int Resource::activeObjects = 0;

// int main() {
//     Resource r1, r2;
//     {
//         Resource r3;
//         cout << "Currently active: " << Resource::getActiveObjects() << endl;
//     } // r3 destructor decrements counter
//     cout << "Finally active: " << Resource::getActiveObjects() << endl;
// }