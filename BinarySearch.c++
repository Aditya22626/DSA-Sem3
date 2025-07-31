// lecture 2

#include <iostream>
using namespace std;
int BinarySearch(int arr[],int len,int tar){
    int start=0,end=len-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==tar) return mid;
        else if(arr[mid]<tar) return start=mid+1;
        else end=mid-1;
    }
    return -1;
}
int main() {
    int arr[]={3,5,7,54,67,82};
    int index=BinarySearch(arr,7,54);
    cout<<"element found at "<<index<<endl;
    return 0;
}