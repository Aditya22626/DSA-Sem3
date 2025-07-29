#include <iostream>
using namespace std;
int main() {
    int arr[4]={1,2,4,5};
    int n=4,position=2,value=3;
    for(int i=n;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=value;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}