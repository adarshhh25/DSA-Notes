// BInary to Decimal

#include <iostream>
using namespace std;

void binToDec(int binary) {
    int n = binary;
    int pow = 1;
    int decNum = 0;
    while (n > 0) {
        int lastDig = n % 10;
        decNum += lastDig * pow;
        pow *= 2;
        n = n /10;
    }
    cout << decNum << endl;
}

int main () {
    binToDec(101);
    return 0;
}



//Decimal to Binary

#include <iostream>
using namespace std;

int decToBin (int number) {
     int n = number;
}

int main () {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    return 0;
}