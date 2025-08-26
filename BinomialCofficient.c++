//// Calculate Binomial cofficient for n,r;
//// nCr

// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int sum=1;
//     for(int i=1;i<=n;i++){
//         sum*=i;
//     }
//     return sum;
// }
// int ncr(int n,int a){
//     int factorial_n=factorial(n);
//     int factorial_a=factorial(a);
//     int factorial_nma=factorial(n-a);
//     return factorial_n/(factorial_a*factorial_nma);
// }
// int main() {
//     int n,a;
//     cin>>n;
//     cin>>a;
//     cout<<ncr(n,a);
//     return 0;
// }


// In java

// import java.util.Scanner;
// public class Main {
//     static int factorial(int n){
//         int sum=1;
//         for(int i=1;i<=n;i++){
//             sum*=i;
//         }
//         return sum;
//     }
//     static int ncr(int n,int a){
//         int factorial_n=factorial(n);
//         int factorial_a=factorial(a);
//         int factorial_nma=factorial(n-a);
//         return factorial_n/(factorial_a*factorial_nma);

//     }
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();
//         int a=sc.nextInt();
//         System.out.println(ncr(n,a));
//     }
// }