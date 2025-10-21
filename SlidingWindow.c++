#include <iostream>
using namespace std;
int MaxSubarray(vector<int>& arr , int k){
    int n=arr.size();
    int mak=0;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    mak=sum;
    for(int i=k;i<n;i++){
        sum+=arr[i]-arr[i-k];
        mak=max(mak,sum);
    }
    return mak;
}
int main(){

    vector<int>arr={1,2,3,4,5,6,7};
    int k = 3;
    cout << MaxSubarray(arr,k);

}