//Basics of Arrays
// #include <iostream>
// using namespace std;

// int main () {
//     int marks1 = 90;
//     int marks2 = 78;
//     int marks3 = 86;
//     int marks[50];
//     cout << marks[0] << endl; /// Will print some garbage value since array is not initialized
//     int marks4[50] = {1,2,3};
//     cout << marks4[4] << endl; // will print 0 as some array is initialized with some values
//     int marks5[] = {1,2,3,4};
//     cout << marks5[2] << endl;
//     int n = sizeof(marks5) / sizeof(int); // length of array
//     cout << n;
//     return 0;
// }



//Input and Output of the Array
// #include <iostream>
// using namespace std;

// int main () {
//     int arr[] = {7,5,6,1,2};
//     int n = sizeof(arr) / sizeof(int);

//     for(int i = 0; i < n; i++) {
//        cin >> arr[i];
//     }

//     for(int i = 0; i < n; i++) {
//       cout << arr[i] << ",";
//     }
//     cout << endl;
//     return 0;
// }



//Largest and Smallest Values of the Array
// #include <iostream>
// using namespace std;

// int main () {
//   int arr[] = {1,6,-7,-13,6};
//   int max = arr[0];
//   int min = arr[0];
//   for (int i = 0; i <= 4; i++) {
//     if(max < arr[i]) {
//         max = arr[i];
//     }
//     if(min > arr[i]) {
//       min = arr[i];
//     }
//   }
//   cout << "largest value = " << max << endl;
//   cout << "Smallest value = " << min << endl;
// }



// Array are passed as reference

// #include <iostream>
// using namespace std;

// void changeValue(int arr[]) {
//   cout << sizeof(arr) << endl;
//   arr[0] = 1000;
// }

// int main () {
//   int arr[] = {10, 11, 12, 13};
//   // int *ptr = &arr[0];
//   // cout << arr << endl; // Prints Address of the 0th index of the array  
//   // cout << ptr << endl; // Same as above

//   // cout << *arr << endl; //Value of 0th index in the array
//   // cout << *ptr << endl;  // Same as above 

//   // cout << *(arr + 1) << endl;
//   // cout << *(arr + 2) << endl;
  
//   changeValue(arr);
//   cout << arr[0] << endl;
//   return 0;
// }



//Linear Search

// #include <iostream>
// using namespace std;

// void findKey(int arr[], int n, int key) {
//   for (int i = 0; i < n; i++) {
//     if(arr[i] == key) {
//       cout << "Key Found at index " << i << endl;
//       return;
//     }
//   }
//    cout << "Key not found" << endl;
// }

// int main () {
//   int arr[] = {2,4,6,8,10,12,14,16};
//   int key = 10;
//   int n = sizeof(arr) / sizeof(int);
//   findKey(arr, n, key);
//   return 0;
// }



// Reverse an Array with an extra space

// #include <iostream>
// using namespace std;

// void printArr(int arr[], int n) {
//   for (int i = 0; i < n ; i++) {
//     cout << arr[i] << " ";
//   }
// }

// int main () {
//   int arr[] = {5,4,3,9,2};
//   int n = sizeof(arr) / sizeof(int);
//   int revArr[n];
//   for(int i = 0; i < n; i++) {
//      int j = n-i-1;
//      revArr[i] = arr[j];
//   }
//   for (int i = 0; i < n; i++) {
//     arr[i] = revArr[i];
//   }
//   printArr(arr,n);
//   return 0;
// }



// Reverse an array without extra space

// #include <iostream>
// using namespace std;

// int main () {
//   int arr[] = {5,4,3,9,2};
//   int n = sizeof(arr) / sizeof(int);
//   for (int i = 0; i < n/2; i++) {
//     int j = n-i-1;
//     int value = arr[i];
//     arr[i] = arr[j];
//     arr[j] = value;
//   }
//   for (int i = 0; i < n ; i++) {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }



//Another method to reverse an array without an extra space

// #include <iostream>
// using namespace std;

// void swap (int start, int end, int arr[]) {
//   int temp = arr[start];
//   arr[start] = arr[end];
//   arr[end] = temp;
// }

// int main () {
//   int arr[] = {5,4,3,9,2};
//   int n = sizeof(arr) / sizeof(int);
//   int start = 0, end = n-1;
//   while (start < end){
//     swap(start, end, arr);
//     start++;
//     end--;
//   }
//   for (int i = 0; i < n ; i++) {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }



//Binary Search

#include <iostream>
using namespace std;

int calculateMid(int start, int end) {
  int mid = (start + end) / 2;
  return mid;
}

void findKey(int key, int arr[]) {
int n = sizeof(arr)/sizeof(int);
int mid = calculateMid(0, n-1);
if() {

} else if () {

} 
else {

}
}

int main () {
  int arr[] = {2,4,6,8,10,12,14,16};
  int n = sizeof(arr) / sizeof(int);
  int key = 14;
  findKey(key, arr);
  return 0;
}