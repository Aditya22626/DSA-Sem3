// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int *arr = new int[n];    // allocate array of size n

//     for(int i = 0; i < n; i++) {
//         arr[i] = i * 2;       // initialize array
//     }

//     cout << "Array elements: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     delete[] arr;             // deallocate array memory
//     return 0;
// }



//// Dynamic Allocation of an Object

// #include <iostream>
// using namespace std;

// class Student {
//     string name;
//     int age;
// public:
//     Student(string n, int a) : name(n), age(a) {}
//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student *s = new Student("Alice", 20); // dynamically allocate object
//     s->display();

//     delete s;  // free memory
//     return 0;
// }



//// Array of Objects with Pointer


// #include <iostream>
// using namespace std;

// class Student {
//     int id;
// public:
//     void setId(int i) { id = i; }
//     void display() { cout << "Student ID: " << id << endl; }
// };

// int main() {
//     int n = 3;
//     Student *ptr = new Student[n];  // array of objects

//     for(int i = 0; i < n; i++) {
//         ptr[i].setId(100 + i);      // using array indexing
//     }

//     for(int i = 0; i < n; i++) {
//         ptr[i].display();
//     }

//     delete[] ptr;   // deallocate array
//     return 0;
// }



//// Pointer to a Member Variable


// #include <iostream>
// using namespace std;

// class Box {
// public:
//     int length;
// };

// int main() {
//     int Box::*ptr = &Box::length;   // pointer to member
//     Box b1, b2;
//     b1.*ptr = 10;   // access via object
//     b2.*ptr = 20;

//     cout << "b1.length = " << b1.length << endl;
//     cout << "b2.length = " << b2.length << endl;
//     return 0;
// }



//// Pointer to a Member Function


// #include <iostream>
// using namespace std;

// class Math {
// public:
//     void square(int x) { cout << "Square: " << x * x << endl; }
// };

// int main() {
//     void (Math::*fptr)(int) = &Math::square;  // pointer to member function
//     Math m;

//     (m.*fptr)(5);   // call using object
//     return 0;
// }



//// Resolving Name Conflict


// #include <iostream>
// using namespace std;

// class Student {
//     string name;
//     int age;
// public:
//     void setData(string name, int age) {
//         // local variables shadow class members
//         this->name = name;   // this->name means "object's name"
//         this->age = age;     // distinguishes from parameter age
//     }
//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student s;
//     s.setData("Alice", 20);
//     s.display();
//     return 0;
// }



//// Returning *this (Method Chaining)


#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v=0) : value(v) {}
    Number& add(int x) {
        value += x;
        return *this;   // return reference to current object
    }
    Number& multiply(int x) {
        value *= x;
        return *this;
    }
    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n(5);
    n.add(3);
    n.multiply(4);
    n.display();  // method chaining
    return 0;
}
