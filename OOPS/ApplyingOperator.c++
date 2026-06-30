// overloading (-)operator

// #include <iostream>
// using namespace std;
// class space{
//     int x,y,z;
//     public:
//     void setdata(int,int,int);
//     void display();
//     void operator -();
// };
// void space:: setdata(int a,int b,int c){
//     x=a;
//     y=b;
//     z=c;
// }
// void space::display(){
//     cout<<x<<" "<<y<<" "<<z;
// }
// void space::operator-(){
//     x=-x;
//     y=-y;
//     z=-z;
// }
// int main(){
//     space S;
//     S.setdata(10,20,30);
//     S.display();
//     cout<<endl;
//     -S;
//     S.display();
// }



// overloading(+)operator

// #include <iostream>
// using namespace std;
 
// class CVector {
//   public:
//     int x,y;
//     CVector () {};
//     CVector (int a,int b) : x(a), y(b) {}
//     CVector operator + (CVector&);
// };
 
// CVector CVector::operator+ (CVector& param) {
//   CVector temp;
//   temp.x = x + param.x;
//   temp.y = y + param.y;
//   return temp;
// }
 
// int main () {
//   CVector a (3,1);
//   CVector b (1,2);
//   CVector result;
//   result = a + b;
//   cout << result.x << ',' << result.y << '\n';
//   return 0;
// }


// overloading Pre-Increment

// #include <iostream>
// using namespace std;

// class Counter {
//     int value;
// public:
//     Counter(int v = 0) : value(v) {}

//     // Pre-increment
//     Counter& operator++() {
//         ++value;   // increment first
//         return *this;
//     }

//     void display() { cout << "Value = " << value << endl; }
// };

// int main() {
//     Counter c1(5);
//     ++c1;  // Pre-increment
//     c1.display(); // Output: Value = 6
// }



// overloading pre-increment chaining;

// #include <iostream>
// using namespace std;

// class Number {
//     int n;
// public:
//     Number(int x = 0) : n(x) {}

//     // Pre-increment
//     Number& operator++() {
//         ++n;
//         return *this;  // returns reference for chaining
//     }

//     void print() { cout << n << endl; }
// };

// int main() {
//     Number a(10);
//     (++a).print();  // Output: 11
//     ++(++a);        // Chaining
//     a.print();      // Output: 13
// }



//// Post-Increment

// #include <iostream>
// using namespace std;

// class Counter {
//     int value;
// public:
//     Counter(int v = 0) : value(v) {}

//     // Post-increment
//     Counter operator++(int) {
//         Counter temp = *this; // save old value
//         value++;              // increment after returning
//         return temp;
//     }

//     void display() { cout << "Value = " << value << endl; }
// };

// int main() {
//     Counter c1(5);
//     c1++;  // Post-increment
//     c1.display(); // Output: Value = 6
// }



//// Post-increment

//  #include <iostream>
// using namespace std;

// class Number {
//     int n;
// public:
//     Number(int x = 0) : n(x) {}

//     // Post-increment
//     Number operator++(int) {
//         Number temp = *this;
//         n++;
//         return temp;
//     }

//     void print() { cout << n << endl; }
// };

// int main() {
//     Number a(10);
//     (a++).print();  // Prints 10 (old value)
//     a.print();      // Prints 11 (after increment)
// }



//// Compairing Objects

#include <iostream>
using namespace std;

class Index
{

   int value;
   public:
   Index()
    {
       value=0;
    }

   Index(int val)
   {
     value=val;
   }
   int GetIndex()
   {
     return value;
   }

  int operator < (Index idx) //idx is  idx2
   {
     return (value<idx.value?1:0);
   }
};

int  main()
{
  Index idx1(15),idx2(10);

  cout <<endl<<"Index1= "<<idx1.GetIndex();
  cout<<endl<<"Index2=  "<<idx2.GetIndex();

  if(idx1<idx2)
  {
     cout <<endl<<"Index1 is less than Index2";
  }
  else
    cout <<endl<<"Index1 is not less than Index2";
  
}
