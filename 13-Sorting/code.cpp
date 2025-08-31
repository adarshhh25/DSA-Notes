//Bubble Sort

// #include <iostream>
// using namespace std;

// int main () {
//     int arr[] = {5, 4, 1, 3, 2};
//     int n = sizeof(arr) / sizeof(int);
//     for(int i = 0; i < n; i++) {
//        for(int j = 0; j < n-i-1; j++) {
//         if(arr[j] > arr[j+1]) {
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//         }
//        }
//     }
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << ", ";
//     }
//     return 0;
// }



//  Selection Sort 

// #include <iostream>
// using namespace std;

// int main () {
//     int arr[] = {5, 4, 1, 3, 2};
//     int n = sizeof(arr) / sizeof(int);
//     for(int i = 0; i < n-1; i++) {
//         int minIdx = i;
//         for(int j = i+1; j < n; j++) {
//              if(arr[minIdx] > arr[j]) {
//                 minIdx = j;
//              }
//         }
//         int temp = arr[minIdx];
//         arr[minIdx] = arr[i];
//         arr[i] = temp;
//     }

//     for (int i = 0; i < n; i++) {
//        cout << arr[i] << ", ";
//     }
//     return 0;
// }



//Insertion Sort

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {5, 4, 1, 3, 2};
//     int n = sizeof(arr) / sizeof(int);

//     for (int i = 1; i < n; i++) {
//         int currValue = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > currValue) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = currValue; 
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i];
//         if (i < n - 1) cout << ", ";
//     }

//     return 0;
// }



//Counting Sort

// #include <iostream>
// #include <climits>
// using namespace std;

// int main () {
//     int arr[] = {1, 4, 1, 3,  2, 4, 3, 7};
//     int n = sizeof(arr) / sizeof(int);
//     int frequency[100000];
//     int minVal = INT_MAX, maxVal = INT_MIN;

//     for(int i = 0; i < n; i++) {
//         minVal = min(minVal, arr[i]);
//         maxVal = max(maxVal, arr[i]);
//     }

//     for(int i = 0; i < n; i++) {
//         frequency[arr[i]]++;
//     }
//     int j = 0;
//     for(int i = minVal; i <= maxVal; i++) {
//         while (frequency[i] > 0){
//              arr[j] = i;
//              j++;
//              frequency[i]--;
//         }
//     }
    
//     for(int i = 0; i < n; i++) {
//         cout << arr[i];
//         if (i < n-1) {
//             cout << ", ";
//         }
//     }
//     return 0;
// }



//In Built Sort in C++

// #include <iostream>
// #include <algorithm>  // for sort
// using namespace std;

// int main() {
//     int arr[] = {5, 44, 1, 3, 2, 72, 67, 89, 12, 0, 65};
//     int n = sizeof(arr) / sizeof(int);

//     sort(arr, arr + n, greater<int>());   // sorts in ascending order

//     for (int i = 0; i < n; i++) {
//         cout << arr[i];
//         if (i < n-1) cout << ", ";
//     }
//     return 0;
// }

