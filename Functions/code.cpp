//  Basic Syntax of a Function

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



//Forward Declaration of a Function

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



// Function with a parameters

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



//Function to find a factorial

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

// #include <iostream>
// using namespace std;

// bool isPrime (int n) {
//    if(n == 1) {
//     return false;
//    } else {
//     for (int i = 2; i < n; i++) {
//         if(n % i == 0) {
//             return false;
//         } 
//     }
//     return true;
//    }
// }

// int main () {
//     int num;
//     cout << "Enter a Number: ";
//     cin >> num;
//     cout << (isPrime(num) ? "The Number is a Prime Number" 
//                           : "The Number is not a Prime Number") 
//          << endl;
//     return 0;
// }



// Function to find binomial coefficient

// #include <iostream>
// using namespace std;

// int findFactorial (int num) {
//     if(num == 1 || num == 0) {
//         return 1;
//     }
//     return num * findFactorial(num - 1);
// }

// int findbinomialCoefficient (int n, int r) {
//     int binomial_coefficient = findFactorial(n) / (findFactorial(n - r) * findFactorial(r));
//     return binomial_coefficient;
// }

// int main () {
//    int n, r;
//    cout << "Enter the Value of n: ";
//    cin >> n;
//    cout << "Enter the value of r: ";
//    cin >> r;
//   cout << "Binomial Coefficient (nCr) = " << findbinomialCoefficient(n, r) << endl;   return 0;
// }



//Function to print prime from 2 to n;

// #include <iostream>
// using namespace std;

// bool isPrime(int num) {
//     if(num == 1) {
//         return false;
//     }
//     for(int i = 2; i*i <= num; i++) {
//        if(num % i == 0) { 
//         return false;
//        }
//     }
//     return true;
// }

// void printAllPrimes (int n) {
//   for(int i = 2; i <= n; i++) {
//     if(isPrime(i)) {
//       cout << i << " " << endl;
//     }
//   }
// }

// int main () {
//     int num;
//     cout << "Enter to a Number: ";
//     cin >> num;
//     printAllPrimes(num);
//     return 0;
// }



//Function to check number is plaindrome or not 
#include <iostream>
using namespace std;

int reverseNumber (int n) {
  int res = 0;
  while(n > 0) {
    int lastDigit = n % 10;
    res = res*10 + lastDigit;
    n = n/10;
  }
  return res;
}

int main () {
   int number;
   cout << "Enter a Number: ";
   cin >> number;
   int revNumber = reverseNumber(number);
   if(revNumber == number) {
    cout << "The Entered Number is a Palindrome";
   }
   else {
     cout << "The Entered Number is not a Palindrome";
   }
   return 0;
}

//Function to print next character

// #include <iostream>
// using namespace std;

// void printNextCharacter (int ascii) {
//    if(ascii == 122) {
//     ascii = 97;
//     cout << (char)ascii; 
//    }
//    else if (ascii == 90) {
//     ascii = 65;
//     cout << (char)ascii;
//    }
//    else {
//     ascii++;
//     cout << (char)ascii;
//    }
// }

// int main () {
//     char ch;
//     cout << "Enter a Character: ";
//     cin >> ch;
//     printNextCharacter((int)ch);
//     return 0;
// }