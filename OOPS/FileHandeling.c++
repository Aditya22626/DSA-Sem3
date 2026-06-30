//// To write and create file

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main(){
//     ofstream fout("sample.txt");
//     fout<<"Hello, C++ File Handeling\n";
//     fout.close();
//     cout<<"Data written to file successfully.\n";
//     return 0;
// }


//// To check if file exists

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main(){
//     ifstream fin("sample.txt");
//     if(fin){
//         cout<<"File exists.\n";
//     }
//     else{
//         cout<<"File does not exist.\n";
//     }
//     fin.close();
//     return 0;
// }

//// to append in existing file

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main(){
//     ofstream fout("sample.txt", ios::app);
//     fout<<"Appending new line to file \n";
//     fout.close();
//     cout<<"Data appended in file successfully.\n";
//     return 0;
// }



//// To copy content from one file to another file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("sample.txt");
    ofstream fout("copy.txt");
    string line;
    while (getline(fin, line)) {
        fout << line << endl;
    }
    fin.close();
    fout.close();
    cout << "File copied successfully." << endl;
    return 0;
}
