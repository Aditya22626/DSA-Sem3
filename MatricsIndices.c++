#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    cout<<"Matrix elements Indices are => \n";
    cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<" "<<endl;
        }
    }

    return 0;
}