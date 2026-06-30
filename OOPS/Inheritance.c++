// # include <iostream>
// using namespace std;
// class A{
//     public:
//     void fun(){
//         cout<<"A\n";
//     }
// };
// class B:public A{
//     public:
//     void fun(){
//         cout<<"B\n";
//     }
// };
// int main(){
//     B obj;
//     obj.fun();
// }


//// If  class B fun in not there

// # include <iostream>
// using namespace std;
// class A{
//     public:
//     void fun(){
//         cout<<"A\n";
//     }
// };
// class B:public A{
//     public:
// };
// int main(){
//     B obj;
//     obj.fun();
// }


//// 

// # include <iostream>
// using namespace std;
// class A{
//     public:
//     A(){
//         cout<<"A\n";
//     }
// };
// class B:public A{
//     public:
//     B(){
//         cout<<"B\n";
//     }
// };
// class C:public B{
//     public:
//     C(){
//         cout<<"C\n";
//     }
// };
// int main(){
//     C obj;
// }



// # include <iostream>
// using namespace std;
// class A{
//     int x;
//     public:
//     A(){
//         cin>>x;
//     }
//     void display(){
//         cout<<x<<"\n";
//     }
// };
// class B:public A{
//     int y;
//     public:
//     B(){
//         cin>>y;
//     }
//     void display(){
//         // A::display();
//         cout<<y<<"\n";
//     }
// };
// int main(){
//     B obj;
//     obj.display();
//     obj.A::display();
// }