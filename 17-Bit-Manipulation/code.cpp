// #include <iostream>
// using namespace std;

// int main () {
//     cout << (3 & 5) << endl; //1
//     cout << (3 | 5) << endl; //7
//     cout << (3 ^ 5) << endl; //6
//     cout << ~6 << endl; //-7
//     cout << ~0 << endl; //-1
//     cout << (7 << 2) << endl;
//     cout << (7 >> 2) << endl; 
//     return 0;
// }



//Check if a number is even or odd
// #include <iostream>
// using namespace std;

// int main () {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if(n & 1 == 0) {
//         cout << n << " is even" << endl;
//     }
//     else {
//         cout << n << " is odd" << endl;

//     }
//     return 0;
//  }



//Get ith bit
// #include <iostream>
// using namespace std;

// int main () {
//     int n, i;
//     int mask = 1;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Enter the position of bit: ";
//     cin >> i;
//     mask = mask << i; //Left shift
//     cout << (n & mask) << endl;
//     if((n & mask) > 0) {
//         cout << "Bit is 1" << endl;
//     }
//     else {
//         cout << "Bit is 0" << endl;
//     }
//     return 0;
// }



//Set ith bit

// #include <iostream>
// using namespace std;

// int main () {
//     int number, i;
//     int maskBit = 1;
//     cout << "Enter a number: ";
//     cin >> number;
//     cout << "Enter the position of bit: ";
//     cin >> i;
//     maskBit = maskBit << i; //Left shift
//     cout << (number | maskBit) << endl; //Set ith bit
//     return 0;
// }



//Clear the ith bit

// #include <iostream>
// using namespace std;

// int main () {
//     int number, i;
//     int maskBit = 1;
//     cout << "Enter a number: ";
//     cin >> number;
//     cout << "Enter the position of bit: ";
//     cin >> i;
//     maskBit = maskBit << i; //Left shift
//     maskBit = ~maskBit; //Negate the mask
//     cout << (number & maskBit) << endl; //Clear ith bit
//     return 0;
// }



//Check if a number is a power of 2

// #include <iostream>
// using namespace std;

// int checkPowerOf2(int n) {
//     if((n & (n - 1)) == 0) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int main () {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     checkPowerOf2(n) ? cout << n << " is a power of 2" << endl : cout << n << " is not a power of 2" << endl;
//     return 0;
// }



//WAF to update a bit at a given position to 0 or 1
// #include <iostream>
// using namespace std;

// int clearIthBit(int n, int i) {
//     int bitMask = ~(1 << i);
//     return n & bitMask;
// }

// int updateIthBit(int n, int i, int v) {
//     n = clearIthBit(n, i);
//     int bitMask = v << i;
//     return n | bitMask;
// }

// int main () {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int i;
//     cout << "Enter the position of bit: ";
//     cin >> i;
//     int v;
//     cout << "Enter the value to be updated (0 or 1): ";
//     cin >> v;
//     clearIthBit(n, i);
//     cout << updateIthBit(n, i, v) << endl;
//     return 0;
// }



//Clear last i bits

// #include <iostream>
// using namespace std;

// void clearLastIBits(int n, int i) {
//     int bitMask = (~0) << i;
//     n = n & bitMask;
//     cout << n << endl;
// }

// int main () {
//     clearLastIBits(15, 2);
//     return 0;
// }



// Count set bits in a number

// #include <iostream>
// using namespace std;

// void countSetBits(int n) {
//    int count = 0;
//    while (n > 0) {
//     if((n & 1) != 0) {
//         count++;
//     }
//    n = n >> 1;
//  }
//    cout << count << endl;
// }

// int main () {
//     countSetBits(10);
//     return 0;
// }



//Fast Exponentiation

#include <iostream>
using namespace std;

void FastExponentiation(int x, int n) {
    int result = 1;
    while (n > 0) {
         int lastBit = n & 1;
         if(lastBit) {
            result = result * x;
         }
         x = x * x;
         n = n >> 1;
    }
    cout << result << endl;
}

int main () {
    FastExponentiation(3,5);
    return 0;
}