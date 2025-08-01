#include <iostream>
using namespace std;
int fun(int n, int arr[], int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main() {
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    int result=fun(n,arr,key);
    if(result!=-1){
        cout<<"Found at index = "<<result;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}