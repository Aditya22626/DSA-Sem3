#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=1;
    for(int i=0;i<n;i++){
        if(end<n){
            int swap=arr[start];
            arr[start]=arr[end];
            arr[end]=swap;
            start+=2;
            end+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}