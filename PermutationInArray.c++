#include <iostream>
using namespace std;
int main() {
    int size;
    cin>>size;
    int arr1[size];
    int arr2[size];
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<size;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr2[j]>arr2[j+1]){
                int temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
    int count=0;
    for(int i=0;i<size;i++){
        if(arr1[i]==arr2[i]){
            count++;
        }
    }
    if(count==size){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}