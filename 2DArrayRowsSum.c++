// #include <iostream>
// using namespace std;

// void printRowSum(int arr[3][3]) {
//     for (int i = 0; i < 3; i++) {
//         int sum = 0;
//         for (int j = 0; j < 3; j++) {
//             sum = sum + arr[i][j];
//         }
//         cout << "The sum of row " << i + 1 << " is: " << sum << endl;
//     }
// }

// int main() {
//     int nums[3][3] = {
//         {3, 5, 7},
//         {8, 4, 6},
//         {8, 9, 10}
//     };
//     printRowSum(nums);
//     return 0;
// }



// Row max

// #include <iostream>
// #include <vector>
// using namespace std;

// void printRowSum(int arr[3][3], vector<int>& arr_max) {
//     for (int i = 0; i < 3; i++) {
//         int sum = 0;
//         for (int j = 0; j < 3; j++) {
//             sum += arr[i][j];
//         }
//         cout << sum << endl;
//         arr_max.push_back(sum);
//     }
// }

// void MaxRow(vector<int> arr_max) {
//     int max = arr_max[0];
//     for (int i = 1; i < 3; i++) {
//         if (arr_max[i] > max) {
//             max = arr_max[i];
//         }
//     }
//     cout << "Maximum row sum: " << max << endl;
// }

// int main() {
//     int arr[3][3];
//     vector<int> arr_max;

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout<<"arr["<<i<<"]["<<j<<"] =";
//             cin>>arr[i][j];
//         }
//     }

//     printRowSum(arr, arr_max);
//     MaxRow(arr_max);

//     return 0;
// }


