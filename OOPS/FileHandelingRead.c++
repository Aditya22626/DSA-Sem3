//// To read from file

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main(){
//     ifstream fin("sample.txt");
//     string line;
//     while(getline(fin, line)){
//         cout<<line<<endl;
//     }
//     fin.close();
//     return 0;
// }



//// to write and read in same file

#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream fout("numbers.txt");
    for(int i=1;i<=10;i++){
        fout<<i<<endl;
    }
    fout.close();
    ifstream fin("numbers.txt");
    int number;
    while(fin>>number){
        cout<<number<<endl;
    }
    fin.close();
    return 0;
}