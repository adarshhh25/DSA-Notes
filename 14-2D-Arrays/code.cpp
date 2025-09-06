// #include <iostream>
// using namespace std;
 
// int main () {
//     int arr[3][3] = {{100, 100, 100}, 
//                      {89, 82, 88},
//                      {100, 79, 89}};

//     int new_arr[3][4];

//     for(int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cin >> new_arr[i][j];
//         }
//     }

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cout << new_arr[i][j] << ", ";
//         }
//         cout << endl;
//     }    

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             cout << arr[i][j] << ", ";
//         }
//         cout << endl;
//     }
// }



//Spiral Matrix

// #include <iostream>
// using namespace std;

// void spiralMatrix(int matrix[][4], int m, int n) {
//     int srow = 0, scol = 0;
//     int erow = n-1, ecol = m-1;
    
//     while (srow <= erow && scol <= ecol) {
//     //Top
//     for(int j = scol; j <= ecol; j++) {
//         cout << matrix[srow][j] << " ";
//     }

//     //Right
//     for(int i = srow + 1; i <= erow; i++) {
//         cout << matrix[i][ecol] << " ";
//     }

//     //Bottom
//     for(int j = ecol-1; j >= scol; j--) {
//         if(srow == erow) {
//             break;
//         }
//         cout << matrix[erow][j] << " ";
//     }

//     //Left
//     for(int i = erow-1; i >= srow+1; i--) {
//         if(scol == ecol) {
//             break;
//         }
//         cout << matrix[i][scol] << " ";
//     }

//    srow++;
//    scol++;
//    erow--;
//    ecol--;
//   }
// }

// int main () {
//     int matrix[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}
//     }; 
//     spiralMatrix(matrix, 4, 4);
//     return 0;
// }



//Diagonal Sum

// #include <iostream>
// using namespace std;

// int main () {
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {5, 6, 7},
//         {9, 10, 11}
//     }; 

//     int sum = 0;

//     // for(int i = 0; i < 3; i++) {
//     //   for(int j = 0; j < 3; j++) {
//     //     if(i == j) {
//     //       sum += matrix[i][j];
//     //     }
//     //     else if(j == 3-i-1){
//     //       sum += matrix[i][j];
//     //     }
//     //   }
//     // }
  
//     for(int i = 0; i < 3; i++) {
//         sum += matrix[i][i];
//         if(i != 3-i-1) {
//            sum += matrix[i][3-i-1];
//         }
//     }

//     cout << sum; 
//     return 0;
// }



//Search in Sorted Matrix
// TC - O(N^2)

// #include <iostream>
// using namespace std;

// int main () {
//     int matrix[4][4] = {
//         {10, 20, 30, 40},
//         {15, 25, 35, 45},
//         {27, 29, 37, 48},
//         {32, 33, 39, 50}
//     };
//     int key = 303;
//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 4; j++) {
//             if(key == matrix[i][j]) {
//                 cout << "Key Found At " << i << ", " << j;
//             }
//         }
//     }
//     cout << "Key is not there in the Matrix";
//     return 0;
// }



//Applying Binary Search to all Rows

// #include <iostream>
// using namespace std;

// int main () {
//     int matrix[4][4] = {
//         {10, 20, 30, 40},
//         {15, 25, 35, 45},
//         {27, 29, 37, 48},
//         {32, 33, 39, 50}
//     };
//     int key = 33;
//     int i = 0;
//     while(i < 4) {
//         int st = 0;
//         int end = 3;
//         while(st <= end) {
//               int mid = (st + end) / 2;
//               if(matrix[i][mid] == key) {
//                  cout << "Key Found At " << i << ", " << mid;
//                  return 0;
//               }
//               else if (matrix[i][mid] < key) {
//                  st = mid + 1;
//               }
//               else {
//                  end = mid - 1;
//               }
//         }
//         i++;
//     }
//     cout << "Key Not Found";
//     return 0;
// }



// Stair-Case Search

// #include <iostream>
// using namespace std;

// int main () {
//     int matrix[4][4] = {
//         {10, 20, 30, 40},
//         {15, 25, 35, 45},
//         {27, 29, 37, 48},
//         {32, 33, 39, 50}
//     };
//     int key = 33;
//     int row = 0, column = 3;
//     while (row < 4 && column >= 0) {   
//        if(matrix[row][column] == key) {
//         cout << "Key Found At Index : " << row << "," << column;
//         return 0;
//        }
//        else if (matrix[row][column] > key) {
//          column--;
//        }
//        else {
//         row++;
//        }
//     }
//     cout << "Key Not Found";
//     return 0;
// }



//Matrix Pointer

// #include <iostream>
// using namespace std;

// int main () {
//     int matrix[4][4] = {
//         {10, 20, 30, 40},
//         {15, 25, 35, 45},
//         {27, 29, 37, 48},
//         {32, 33, 39, 50}
//     };
//     cout<< matrix << " = " << &matrix[0][0] <<endl;
//     cout<< matrix + 1 << " = " << &matrix[1][0];
//     return 0;
// }



//some Questions

// #include <iostream>
// using namespace std;

// int main () {
//   int arr[2][3] = {{4,7,8}, {8,8,7}};
//   int count = 0;
//   for(int i = 0; i < 2; i++) {
//     for(int j = 0; j < 3; j++) {
//          if(arr[i][j] == 7) {
//            count++;
//          }
//     }
//   }
//   cout << count;
//   return 0;
// }



#include <iostream>
using namespace std;
 
int main () {
    int arr[3][2] = {{100, 100}, 
                     {89, 82,},
                     {100, 79}};

    // int new_arr[3][4];

    // for(int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         cin >> new_arr[i][j];
    //     }
    // }

    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 4; j++) {
    //         cout << new_arr[i][j] << ", ";
    //     }
    //     cout << endl;
    // }    

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << arr[j][i] << ", ";
        }
        cout << endl;
    }
}
