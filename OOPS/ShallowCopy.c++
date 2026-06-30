#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class sample {
    int *data;
    public:
    sample(int val){
        data=new int(val);
    }
    void show(){
        cout<<"Data: "<<*data<<endl;
    }
    ~sample(){
        delete data;
    }
};
int main() {
    sample s1(10);
    sample s2=s1;
    s1.show();
    s2.show();
    return 0;
}
