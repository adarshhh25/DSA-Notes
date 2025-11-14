//Print Numbers from n to 1
// #include <iostream>
// using namespace std;

// void printNums (int n) {
//      if(n == 1) {
//         cout << n << " ";
//         return;
//      }

//      cout << n << " ";
//      printNums(n-1);
// }

// int main () {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     printNums(n);
//     return 0;
// }



//N factorial
// #include <iostream>
// using namespace std;

// int printfact(int n) {
//        if(n == 0) {
//         return 1;
//        }
//        return n * printfact(n-1);
// }

// int main () {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     cout << printfact(n);
//     return 0;
// }



//Sum of N numbers
// #include <iostream>
// using namespace std;

// int sum(int n) {
//     if(n == 1) {
//         return 1;
//     }
//     return n + sum(n-1);
// }

// int main () {
//     cout << sum(5);
//     return 0;
// }



//Fibonacci
// #include <iostream>
// using namespace std;

// int fibonacci(int n) {
//     if(n == 0 || n == 1) {
//         return n;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main () {
//     int n;
//     cout << "Enter a Number : ";
//     cin >> n;
//     cout << fibonacci(n);
//     return 0;
// }



//Check if Array is Sorted 
// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSorted(vector <int> arr, int n) {
//      if(n == 0 || n == 1) {
//         return true;
//      } 
//      return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
// }

// int main () {
//     vector <int> arr = {1, 2, 3, 74, 5};
//     cout << isSorted(arr, 5);
//     return 0;
// }



///Recursive Binary Search
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int target, int st, int end) {
//     if(st <= end) {
//         int mid = (st + end) / 2;

//         if(arr[mid] == target) return mid;

//         else if(arr[mid] <= target) {
//             return binarySearch(arr, target, mid+1, end);
//         }
//         else {
//             return binarySearch(arr, target, st, mid-1);
//         }
//     }
//     return -1;
// }

// int main () {
//     int arr[] = {-1, 0, 3, 5, 9, 12};
//     cout << binarySearch(arr, 9, 0, 5);
//     return 0;
// }



//Tiling Problem 
// #include <iostream>
// using namespace std;

// int tilingBoard(int n) {
//     if(n == 1 || n == 2) return n;
//     return tilingBoard(n-1) + tilingBoard(n-2);
// }

// int main () {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     cout << tilingBoard(n) << " Ways to tile the board";
//     return 0;
// }



//Remove Duplicates in a String
// #include <iostream>
// #include <string>
// using namespace std;

// void removeDuplicates(string str1, string &str2, int arr[], int idx) {
                
//         //Base Case
//         if(idx == str1.length()) {
//             return;
//         }
        
//          char currChar = str1.at(idx);
//          if(arr[currChar - 'a'] == 1) {
//             removeDuplicates(str1, str2, arr, idx+1);
//          }
//          else {
//             str2 += currChar;
//             arr[currChar - 'a'] = 1;
//             removeDuplicates(str1, str2, arr, idx+1);
//          }
// }

// int main () {
//    string str1 = "abbccda";
//    cout<< str1.length();
//    string str2;
//    int arr[26] = {0};
//    int idx = 0;
//    removeDuplicates(str1, str2, arr, 0);
//    cout << "String without duplicates: " << str2;
//    return 0;
// }


// //Friends Pairing Problem 
// // #include <iostream>
// // using namespace std;

// // int cal (int n) {
// //     if(n < 3) return n;
// //     return cal(n-1) + (n-1) * cal(n-2);
// // }

// // int main () {
// //     cout << cal(4);
// //     return 0;
// // }



//Understanding Recursion with BackTracking
//Print All Subset
// #include <iostream>
// #include <vector>
// using namespace std;

// void printSubsets(vector<int> &arr, vector<int> &ans, int i) {
//      if(i == arr.size()) {
//         for(int val : ans) {
//             cout << val << " ";
//         }
//         cout << endl;
//         return;
//      }
    
//      //Inclusion
//      ans.push_back(arr[i]);
//      printSubsets(arr, ans, i+1);

//      ans.pop_back();   //BackTrack

//      //Exclusion
//      printSubsets(arr, ans, i+1);
// }

// int main () {
//     vector<int> arr = {1, 2, 3};
//     vector<int> ans;
//     printSubsets(arr, ans, 0);
//     return 0;
// }



//Permutation of Character
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void getAllPermutations(vector<char> &character, int idx, vector<vector<char>> &ans) {
//         if(idx == character.size()) {
//             ans.push_back({character});
//             return;
//         }

//         for(int i = idx; i < character.size(); i++) {
//             swap(character[idx], character[i]);
//             getAllPermutations(character, idx+1, ans);
//             swap(character[idx], character[i]);
//         }
//     }

//     vector<vector<char>> permute(vector<char>& character) {
//         vector<vector <char>> ans;
//         getAllPermutations(character, 0, ans);

//         for (const auto &row : ans) {        
//             for (char c : row) {         
//                 cout << c << " ";
//             }
//         cout << endl;
//     }
//         return ans;
//     }
// };

// int main () {
//     Solution obj;
//     vector<char> chars = {'a', 'b', 'c'};
//     obj.permute(chars);
//     return 0;
// }



//Permutation for String
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     void getAllPermutations(string &s, int idx, vector<string> &ans) {
//         if (idx == s.size()) {
//             ans.push_back(s);   // push the whole string
//             return;
//         }

//         for (int i = idx; i < s.size(); i++) {
//             swap(s[idx], s[i]);                     // choose one character
//             getAllPermutations(s, idx + 1, ans);    // recurse
//             swap(s[idx], s[i]);                     // backtrack
//         }
//     }

//     vector<string> permute(string s) {
//         vector<string> ans;
//         getAllPermutations(s, 0, ans);
//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     string s = "abc";
//     vector<string> result = sol.permute(s);

//     for (const auto &str : result)
//         cout << str << endl;

//     return 0;
// }



//N-Queen Problem
// class Solution {
// public:

//     bool isSafe(vector<string> &board, int row, int col, int n) {
//         //Horizontal
//         for(int j = 0; j < n; j++) {
//             if(board[row][j] == 'Q') {
//                 return false;
//             }
//         }
//         //Vertical
//         for(int i = 0; i < n; i++) {
//             if(board[i][col] == 'Q') {
//                 return false;
//             }
//         }
//         //Left Diagonal
//         for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
//             if(board[i][j] == 'Q') {
//                 return false;
//             }
//         }
//         //Right Diagonal
//         for(int i = row, j = col; i >= 0 && j < n; i--, j++) {
//             if(board[i][j] == 'Q') {
//                 return false;
//             }
//         }
//         return true;
//     }
    
//     void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
//         if(n == row) {
//             ans.push_back({board});
//             return;
//         }
//         for(int j = 0; j < n; j++) {
//             if(isSafe(board, row, j, n)) {
//                 board[row][j] = 'Q';
//                 nQueens(board, row+1, n, ans);
//                 board[row][j] = '.';
//             }
//         }
//     }

//     vector<vector<string>> solveNQueens(int n) {
//         vector<string> board(n, string(n, '.'));
//         vector<vector<string>> ans;
//         nQueens(board, 0, n, ans);
//         return ans;
//     }
// };

//Rat in Maze
// #include <iostream>
// #include <vector>
// using namespace std;

// // void helper (vector<vector<int>> &mat, int row, int col, string path, vector<string> &ans, vector<vector<bool>> &vis) {
// void helper (vector<vector<int>> &mat, int row, int col, string path, vector<string> &ans) {
//     int n = mat.size();
//     // if(row >= n || col >= n || row < 0 || col < 0 || mat[row][col] == 0 || vis[row][col] == true) {
//     if(row >= n || col >= n || row < 0 || col < 0 || mat[row][col] == 0 || mat[row][col] == -1) {
//         return;
//     }

//     if(row == n-1 && col == n-1) {
//         ans.push_back(path);
//         return;
//     }
   
//     // vis[row][col] = true;
//     mat[row][col] = -1;

//     helper(mat, row+1, col, path+"D", ans); //Down
//     helper(mat, row-1, col, path+"U", ans); //Up
//     helper(mat, row, col-1, path+"L", ans); //Left
//     helper(mat, row, col+1, path+"R", ans); //Right

//     // vis[row][col] = false;
//     mat[row][col] = 1;
// }

// vector<string> findpath(vector<vector<int>> &mat) {
//     //   int n = mat.size();
//       vector<string> ans;
//       string path = "";
//     //   vector<vector<bool>> vis(n, vector<bool>(n, false));
//     //   helper(mat, 0, 0, path, ans, vis);
//       helper(mat, 0, 0, path, ans);
//       return ans;
// }

// int main () {
//     vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
//     vector<string> ans = findpath(mat);
//     for(string path : ans) {
//         cout << path << endl;
//     }
//     return 0;
// }



//Palindrome Partitioning
//LeetCode 131
// class Solution {
// public:

// bool isPalindrome(string s) {
//     string s2 = s;
//     reverse(s2.begin(), s2.end());
//     return s == s2;
// }

// void getAllParts(string s, vector<string> &partitions, vector<vector<string>> &ans) {
//     if(s.size() == 0) {
//         ans.push_back(partitions);
//         return;
//     }

//     for(int i = 0; i < s.size(); i++) {
//         string part = s.substr(0, i+1);

//         if(isPalindrome(part)) {
//             partitions.push_back(part);
//             getAllParts(s.substr(i+1), partitions, ans);
//             partitions.pop_back();
//         }
//     }
// }

// vector<vector<string>> partition(string s) {
//         vector<vector<string>> ans;
//         vector<string> partitions;
//         getAllParts(s, partitions, ans);
//         return ans;
//     }
// };


//Merge Sort
// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(vector<int> &arr, int st, int mid, int end) {
//       vector<int> temp;
//       int i = st, j = mid+1;

//       while(i <= mid && j <= end) {
//           if(arr[i] <= arr[j]) {
//             temp.push_back(arr[i]);
//             i++;
//           } else {
//             temp.push_back(arr[j]);
//             j++;
//           }
//       }

//       while(i <= mid) {
//         temp.push_back(arr[i]);
//         i++;
//       }

//       while(j <= end) {
//         temp.push_back(arr[j]);
//         j++;
//       }
 
//       for(int idx = 0; idx < temp.size(); idx++) {
//         arr[idx+st] = temp[idx];
//       }
// }

// void mergeSort(vector<int> &arr, int st, int end) {
//     int mid = st + (end-st)/2;
//     if(st < end) {
//         //Left Half
//         mergeSort(arr, st, mid);
//         // Right Half
//         mergeSort(arr, mid+1, end);

//         merge(arr, st, mid, end);
//     }
// }

// int main () {
//     vector<int> arr = {12, 31, 35, 8, 32, 17};
//     mergeSort(arr, 0, arr.size()-1);
//     for(int val : arr) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }



//Quick Sort
// #include <iostream>
// #include <vector>
// using namespace std;

// int partition (vector<int> &arr, int st, int end) {
//     int idx = st-1;
//     int pivot = arr[end];
//     for(int j = st; j < end; j++) {
//         if(arr[j] <= pivot) {
//             idx++;
//             swap(arr[j], arr[idx]);
//         }
//     }
//     idx++;
//     swap(arr[end], arr[idx]);
//     return idx;
// }

// void quickSort(vector<int> &arr, int st, int end) {
//     if(st < end) {
//         int pivotIdx = partition(arr, st, end);

//         quickSort(arr, st, pivotIdx-1); //Left Half
//         quickSort(arr, pivotIdx+1, end); //Right Half
//     }
// }

// int main () {
//     vector<int> arr = {12, 31, 35, 8, 32, 17};
//     quickSort(arr, 0, arr.size()-1);
//     for(int val : arr) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }



//Count Inversion
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<pair<int,int>> countInversion(vector<int> &arr) {
//     vector<pair<int,int>> ans;
//     for(int i = 0; i < arr.size(); i++) {
//         for(int j = i+1; j < arr.size(); j++) {
//             if(arr[i] > arr[j]) {
//                 ans.push_back({arr[i], arr[j]});
//             }
//         }
//     }
//     return ans;
// }

// int main () {
//     vector<int> arr = {6, 3, 5, 2, 7};
//     vector<pair<int,int>> inversions = countInversion(arr);

//     for(auto &p : inversions) {
//         cout << "(" << p.first << "," << p.second << ") ";
//     }
//     cout << endl;
//     return 0;
// }



//count Inversion
// #include <iostream>
// #include <vector>
// using namespace std;

// void countInversion(vector<int> &arr, int i, int &count) {
//     if(i == (arr.size() - 1)) {
//        return;
//     }
//     int curr = arr[i];
//     for(int j = i + 1; j < arr.size(); j++) {
//        if(curr > arr[j]) {
//             cout << curr << " " << arr[j] <<endl;
//             count++;
//        }
//     }
//     countInversion(arr, i+1, count);
// }

// int main () {
//     vector<int> arr = {6, 3, 5, 2, 7};
//     int count = 0;
//     countInversion(arr, 0, count);
//     cout << count << endl;
//     return 0;
// }



//Better optimization
#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int st, int mid, int end) { 
    vector<int> temp;
    int i = st, j = mid + 1;
    int count = 0;

    while(i <= mid && j <= end) {
         if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
         } 
         else {
            temp.push_back(arr[j]);
            j++;
            count += (mid - i + 1);
         }
    }
    
    while(i <= mid) {
       temp.push_back(arr[i]);
       i++;
    }

    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++) {
        arr[idx + st] = temp[idx];    
        
    }
    return count;
}

int mergeSort(vector<int> &arr, int st, int end) {
    if(st < end) {
       int mid = st + (end - st) / 2;
       int leftCount = mergeSort(arr, st, mid - 1);
       int rightCount = mergeSort(arr, mid + 1, end);
       int inversionCount = merge(arr, st, mid, end);
       return leftCount + rightCount + inversionCount;
    }
    return 0;
}

int main () {
    vector<int> arr = {6, 3, 5, 2, 7};
    int ans = mergeSort(arr, 0, arr.size()-1);
    cout << "Inversion Count: " <<ans << endl;
    return 0;
} 