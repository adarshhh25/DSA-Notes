// //Basics of 1D - Dynamic Arrays
// #include <iostream>
// using namespace std;

// //For Array
// // void function (int size) {
// //  int *ptr = new int[size];
// //  int x = 1;
// //  for (int i = 0; i < size; i++) {
// //     ptr[i] = x;
// //     cout << ptr[i] << ", ";
// //     x++;
// //  }
// //  delete ptr; 
// // }

// //For a single integer
// void function (int size) {
//     int *ptr = new int;
//     *ptr = 5;
//     cout << *ptr;
//     delete ptr;
// }

// int main () {
//     int size;
//     cin >> size;
//     // cout << ptr[1]; //Cannot be acessed 
//     function(size);
//     return 0;
// }



// //Basics of 2D - Dynamic Arrays
// #include <iostream>
// using namespace std;    

// int main () {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     int columns;
//     cout << "Enter number of columns: ";
//     cin >> columns;

//     int* *matrix = new int*[rows]; //Creating an array of pointers
//     for (int i = 0; i < rows; i++) {
//         matrix[i] = new int[columns]; //Creating an array of integers for each pointer
//     }
//     int x = 1;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < columns; j++) {
//             matrix[i][j] = x;
//             cout << matrix[i][j] << ", ";
//             x++;
//         }
//         cout << endl;
//     }
//     // cout << (matrix + 1) << endl; //Address of 2nd row
//     return 0;
// }



//Basics of Vectors
// #include <iostream>
// #include <vector>
// using namespace std;

// int main () {
//     vector <int> vec; //Creating a vector
//     cout << vec.size() << endl; //Size of vector
//     vector <int> vec1 = {1, 2, 3, 4};
//     cout  << vec1.size() << endl; //Size of vector
//     cout  << vec1.capacity() << endl; //Capacity of vector
//     vector <int> vec3(5, -1);
//     for (int i = 0; i < vec3.size(); i++) {
//         cout << vec3[i] << ", ";
//     }
//     return 0;
// }



//More About Vectors
// #include <iostream>
// #include <vector>
// using namespace std;

// int main () {
//     vector <int> vec = {1, 2, 3};
//     cout << "Size:" << vec.size() << endl; //Size of vector
//     cout << "Capacity:" << vec.capacity() << endl; //Capacity of vector
//     vec.push_back(4); //Inserting an element at the end
//     cout << "Size:" << vec.size() << endl; //Size of vector 
//     cout << "Capacity:" << vec.capacity() << endl; //Capacity of vector
//     vec.pop_back();
//     cout << "Size:" << vec.size() << endl; //Size of vector
//     cout << "Capacity:" << vec.capacity() << endl; //Capacity of vector
//     return 0;
// }



//Pair Sum

// #include <iostream>
// #include <vector>   
// using namespace std;

// int main () {
//     vector <int> vec = {2, 7, 11, 15};
//     int target = 26;
//     int n = vec.size();
//     // TC: O(n^2)
//     // for (int i = 0; i < n; i++) {
//     //     for (int j = i + 1; j < n; j++) {
//     //         if (vec[i] + vec[j] == target) {
//     //             cout << i << ", " << j << endl;
//     //         }
//     //     }
//     // }
//     // TC: O(n)
//     int st = 0;
//     int end = n - 1;
//     while (st < end) {
//         if(vec[st] + vec[end] == target) {
//             cout << st << ", " << end << endl;
//             return 0;
//          }
//          else if (vec[st] + vec[end] < target) {
//              st++;
//          }
//          else {
//              end--;
//          }
//     }
//     cout << "Target not found" << endl; 
//     return 0;
// }



//2D-Vectors

// #include <iostream>
// #include <vector>   
// using namespace std;

// int main () {
//     vector <vector<int>> vec = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     for (int i = 0; i < vec.size(); i++) {
//         for (int j = 0; j < vec[i].size(); j++) {
//             cout << vec[i][j] << ", ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



//More questions on 2D-Vectors

#include <iostream>
#include <vector>   
using namespace std;

int main () {
    vector <int> vec;
    for (int i = 0; i < 5; i++) {
        vec.push_back(i);
    }
   cout << vec.size() << endl;
   cout << vec.capacity() << endl;
   return 0;
}