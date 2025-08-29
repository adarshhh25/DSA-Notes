//Print Subarrays
// #include <iostream>
// using namespace std;

// int main () {
//     int arr[] = {1,2,3,4,5};
//     int i = 0;
//     while (i < 5) {
//         for (int j = i; j < 5; j++){
//             for (int k = i; k <= j; k++) {
//                 cout << arr[k] << ",";
//             }
//             cout << "\n";
//         }
//         i++;
//     }
//     return 0;
// }



//Maximum Subarray Sum

// #include <iostream>
// #include <climits>
// using namespace std;

// int main () {
//     int arr[] = {2,-3,6,-5,4,2};
//     int maxSum = INT_MIN;
//     int i = 0;
//     while (i < 6) {
//         for (int j = i; j < 6; j++){
//             int currValue = 0;
//             for (int k = i; k <= j; k++) {
//             currValue += arr[k];
//         }  
//            cout << currValue << ",";
//            maxSum = max(maxSum, currValue);
//     }
//     cout << endl;
//     i++;
// }
//     cout << "The Maximum Subarray sum is : "<<maxSum;
//     return 0;
// }



//
// #include <iostream>
// #include <climits>
// using namespace std;

// int main () {
//     int arr[] = {2,-3,6,-5,4,2};
//     int maxSum = INT_MIN;
//     int i = 0;
//     while (i < 6) {
//         int currSum = arr[i];
//         for (int j = i; j < 6; j++){
//            if(i == j) {
//               maxSum = max(maxSum, currSum);
//            }
//            else {
//               currSum += arr[i];
//               maxSum = max(maxSum, currSum);
//            }
//     }
//     cout << endl;
//     i++;
// }
//     cout << "The Maximum Subarray sum is : "<<maxSum;
//     return 0;
// }