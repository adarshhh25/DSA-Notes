//Function

// #include <iostream>
// using namespace std;

// void sayHello () {
//     cout << "Hello Guys \n";
// }

// void assistant () {
//     sayHello();
//     cout << "Work is Done \n";
// }

// int main () {
//    assistant();
//    return 0;
// }



//Forward Declaration

// #include <iostream>
// using namespace std;

// void HelloWorld();

// int main () {
//     HelloWorld();
//     return 0;
// }

// void HelloWorld() {
//     cout << "Hello World \n";
// }



// Function with parameters

// #include <iostream>
// using namespace std;

// int sum (int a = 2, int b) { //a,b are parameter
//     int sum = a + b;
//     return sum;
// }

// int diff (int a, int b) { //a,b are parameter
//     int diff = a - b;
//     return diff;
// }

// int main () {
//     cout<< "The sum is: " << sum(5)<< endl; //5,4 are arguments
//     cout<< "The Difference is: " << diff(5,4) << endl; //5,4 are arguments
//     return 0;
// }



//Function to find product of 2 Numbers
// #include <iostream>
// using namespace std;

// int product (int a, int b) {
//     return a * b;
// }

// int main () {
//     cout << "The product is: " << product(2,5) << endl;
//     return 0;
// }



//Function to print odd or even 
// #include <iostream>
// using namespace std;

// bool oddoreven (int a) {
//     if (a % 2 == 0) {
//         return true;
//     } else {
//         return false;
//     }
// }

// int main () {
//     cout << oddoreven(4) << endl;
//     return 0;
// }



//Function for factorial

// #include <iostream>
// using namespace std;

// int findFactorial(int num) {
//     if (num == 0 || num == 1) {
//         return 1;
//     }
//     return num * findFactorial(num - 1);  // recursive call with num-1
// }

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     cout << "Factorial of " << n << " is " << findFactorial(n) << endl;
//     return 0;
// }




//Function for Number is prime or Not

#include <iostream>
using namespace std;

bool 