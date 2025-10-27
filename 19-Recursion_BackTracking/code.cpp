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


#include <iostream>
using namespace std;

class Solution {

};

int main () {
    
}