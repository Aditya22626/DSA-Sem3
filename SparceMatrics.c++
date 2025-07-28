#include <iostream>
using namespace std;
int main() {
    int arr[2][3]={{0,3,0},{8,0,0}};
    int rows=2;
    int column=3;
    cout<<"Triplets are"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]!=0){
                cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
            }
        }
    }
    return 0;
}