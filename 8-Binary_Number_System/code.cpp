// // BInary to Decimal

// #include <iostream>
// using namespace std;

// void binToDec(int binary) {
//     int n = binary;
//     int pow = 1;
//     int decNum = 0;
//     while (n > 0) {
//         int lastDig = n % 10;
//         decNum += lastDig * pow;
//         pow *= 2;
//         n = n /10;
//     }
//     cout << decNum << endl;
// }

// int main () {
//     binToDec(101);
//     return 0;
// }



// Decimal to Binary Without Stack

#include <iostream>
using namespace std;

void DecimalToBinary (int number) {
  int n = number;
  int Binary = 0;
  int pow = 1;
  while (n > 0) {
    int remainder = n % 2;
    remainder *= pow;
    Binary += remainder; 
    pow = pow * 10;
    n = n / 2;
  }
  cout << "The Binary Equivalent is: " << Binary;
}

int main () {
  DecimalToBinary(5);
  return 0;
}


//Decimal to Binary

// #include <iostream>
// using namespace std;

// #define SIZE 20  

// class Stack {
// private:
//     int arr[SIZE];  
//     int top;       

// public:
//     Stack() {
//         top = -1;
//     }

//     void push(int value) {
//         if (top == SIZE - 1) {
//             cout << "Stack Overflow! Cannot push " << value << endl;
//         } else {
//             arr[++top] = value;
//         }
//     }

//    void display() {
//     if (top == -1) {
//         cout << "Stack is empty." << endl;
//     } else {
//         cout << "Stack elements (Binary): ";
//         for (int i = top; i >= 0; i--) {   // FIXED: print from top to bottom
//             cout << arr[i];
//         }
//         cout << endl;
//     }
// }
// };

// // Main function
// int main() {
//     Stack s;
//     int n;
//     cout <<"Enter a Number: ";
//     cin >> n;
//     while (n >= 1) {
//       int remainder = n % 2;
//       s.push(remainder);
//       n = n/2;
//     };
//     s.display();
//     return 0;
// }
