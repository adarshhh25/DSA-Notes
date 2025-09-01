#include <iostream>
using namespace std;
 
int main () {
    int arr[3][3] = {{100, 100, 100}, 
                     {89, 82, 88},
                     {100, 79, 89}};

    int new_arr[3][4];

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> new_arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << new_arr[i][j] << ", ";
        }
        cout << endl;
    }    

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }
}