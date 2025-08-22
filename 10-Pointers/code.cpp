// #include <iostream>
// using namespace std;

// int main () {
//     int a = 10;
//     int *ptr = &a;
//     // float b = 3.14;
//     // float * ptr2 = &b;

//     // int **pptr = &ptr;
//     // cout << &a << " = " << ptr1 << "\n";
//     // cout << &b << " = " << ptr2 << "\n";
//     // cout << &ptr << " = " << pptr << "\n";
//     cout << *(ptr);
//     return 0;
// }



// #include <iostream>
// using namespace std;
 
//Call by Value 
// void changeA(int a) {
//     a = 50;
//     cout << a << "\n";
// }

//Call by Reference using pointer
// void changeA(int *ptr) {
//   *ptr = 50;
//   cout << *ptr << "\n";
// }

// int main () {
//     int a = 10;
//     // changeA(a);
//     changeA(&a);
//     cout << a << "\n";
//     return 0;
// }


///Using Reference Variable

#include <iostream>
using namespace std;

int main () {
    int a = 10;
    int &b = a;
    b = 40;
    cout << b << "\n";
    cout << a << "\n";
    return 0;
}
