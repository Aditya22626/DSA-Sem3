#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    int n=5,position=2;
    for(int i=position;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}