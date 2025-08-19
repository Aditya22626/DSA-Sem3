// Online C++ compiler to run C++ program online
#include <iostream>
# include <vector>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>transpose(b,vector<int>(a));
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}