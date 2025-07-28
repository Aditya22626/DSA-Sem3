#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum^=arr[i];
    }
    int range=0;
    for(int i=1;i<=n-1;i++){
        range^=i;
    }
    cout<<(sum^range);
    return 0;
}