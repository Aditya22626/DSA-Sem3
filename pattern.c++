
////square star pattern in c++;

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=a;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

//// In java;

// import java.util.Scanner;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int a=sc.nextInt();
//         for(int i=1;i<=a;i++){
//             for(int j=1;j<=a;j++){
//                 System.out.print("*"+" ");
//             }
//             System.out.println();
//         }
//     }
// }




//// non repeting numbers;

#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int count=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}


// // In java

// import java.util.Scanner;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int a=sc.nextInt();
//         int count=1;
//         for(int i=1;i<=a;i++){
//             for(int j=1;j<=a;j++){
//                 System.out.print(count+" ");
//                 count++;
//             }
//             System.out.println();
//         }
//     }
// }


//// Right angle trialgle;

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


//// In java

// import java.util.Scanner;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int a=sc.nextInt();
//         for(int i=1;i<=a;i++){
//             for(int j=1;j<=i;j++){
//                 System.out.print("*"+" ");
//             }
//             System.out.println();
//         }
//     }
// }

// // reverse number triangle;

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     for(int i=1;i<=a;i++){
//         for(int j=i;j>=1;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


//// In java;

// import java.util.Scanner;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int a=sc.nextInt();
//         for(int i=1;i<=a;i++){
//             for(int j=i;j>=1;j--){
//                 System.out.print("j"+" ");
//             }
//             System.out.println();
//         }
//     }
// }

//// spaces and inverted triangle;

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     for(int i=1;i<=a;i++){
//         for(int j=i;j>=1;j--){
//             cout<<"  ";
//         }
//         for(int j=1;j<=a-i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


//// In java;

// import java.util.Scanner;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int a=sc.nextInt();
//         for(int i=1;i<=a;i++){
//             for(int j=1;j<=i;j++){
//                 System.out.print("  ");
//             }
//             for(int j=0;j<a-i;j++){
//                 System.out.print("*"+" ");
//             }
//             System.out.println();
//         }
//     }
// }




//// Equilateral triangle or half diamond;


// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     for(int i=0;i<a;i++){
//         for(int j=0;j<a-i-1;j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         for(int j=i;j>0;j--){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


//// In java;

// import java.util.Scanner;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int a=sc.nextInt();
//         for(int i=0;i<a;i++){
//             for(int j=0;j<a-i-1;j++){
//                 System.out.print("  ");
//             }
//             for(int j=1;j<=i+1;j++){
//                 System.out.print(j+" ");
//             }
//             for(int j=i;j>0;j--){
//                 System.out.print(j+" ");
//             }
//             System.out.println();
//         }
//     }
// }