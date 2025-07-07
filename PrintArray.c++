#include <iostream>
using namespace std;
void printALL(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    printALL(arr,5);
}