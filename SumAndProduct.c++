#include <iostream>
using namespace std;

int fun1(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int fun2(int arr[],int n){
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    return product;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res1=fun1(arr,n);
    int res2=fun2(arr,n);
    cout<<res1<<"\n";
    cout<<res2;
}