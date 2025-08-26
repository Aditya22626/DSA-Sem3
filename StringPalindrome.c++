// #include <iostream>
// using namespace std;
// #include <string>
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string a;
//         int n=s.length();
//         int start=0;
//         int end=n-1;
//         for(int i=0;i<n;i++){
//             a.push_back(s[i]);
//             while(start<end){
//                 char temp=s[start];
//                 s[start]=s[end];
//                 s[end]=temp;
//                 start++;
//                 end--;
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(s[i]==a[i]){
//                 return true;
//             }
//         }
//         return false;
        
//     }
// };
// int main() {
//     string s;
//     getline(cin,s);
//     Solution obj;
//     cout<<obj.isPalindrome(s);
//     // if(isPalindrome(s)){
//     //     cout<<s;
//     // }
//     // else{
//     //     cout<<"False";
//     // }
//     return 0;
// }





// #include <iostream>
// using namespace std;
// #include <string>
// int main() {
//     string s;
//     getline(cin,s);
//     int n=s.length();
//     int start=0;
//     int end=n-1;
//     string a;
//     for(int i=0;i<n;i++){
//         // s[i]=a[i];
//         while(start<end){
//             char temp=s[start];
//             s[start]=s[end];
//             s[end]=temp;
//             start++;
//             end--;
//         }
//         // cout<<s[i];
//     }
//     for(int i=0;i<n;i++){
//         a=s[i];
//     }
//     if(s==a){
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
//     return 0;
// }