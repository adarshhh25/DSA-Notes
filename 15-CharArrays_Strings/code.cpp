//Basics of Char Array
// #include <iostream>
// using namespace std;

// int main () {
//     char arr[5] = {'a', 'b', 'c', 'd', '\0'};
//     char ch[] = "adarsh";
//     char work[10] = "code";
//     cout << work[4];
//     // cout << ch << endl;
//     // cout << arr << endl;
//     return 0;
// }



// #include <iostream>
// #include <cstring>
// using namespace std;

// int main () {
//     // char word[30];
//     // cin >> word; // ignorres space ke baad wale letters
//     // cout << "Your Length was: " << word << endl;
//     // cout << "Length: " << strlen(word) << endl;

//     char sentence[30];
//     // cin.getline(sentence, 30);
//     cin.getline(sentence, 30);
//     cout << "Output is: " << sentence << endl;
//     cout << "Output is: "<<sentence[5] << endl;
//     cout << strlen(sentence) << endl;
//     return 0;
// }



//Convert to Upper Case

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main () {
//     char word[10];
//     cin >> word;
//     for(int i = 0; i < strlen(word); i++) {
//       if(word[i] >= 'a' && word[i] <= 'z') {
//           int position = word[i] - 'a';
//           word[i] = 'A' + position;
//       }
//       else {
//         continue;
//       }
//     } 
//     cout << word;
//     return 0;
// }



//Reverse a char Array

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main () {
//     char ch[10];
//     cin >> ch;
//     int st = 0;
//     int end = strlen(ch) - 1;
//     while(st <= end) {
//         int temp = ch[st];
//         ch[st] = ch[end];
//         ch[end] = temp;
//         end--;
//         st++;
//     }
//     cout << ch;
//     return 0;
// }



//Valid Palindrome

// #include <iostream>
// #include <cstring>
// using namespace std;

// bool isValidPalindrome(char ch[], int n) {
//     int st = 0, end = n-1;
//     while(st < end) {
//         if(ch[st] != ch[end]) {
//             cout << "Not a Valid Palindrome\n";
//             return false;
//         }
//         st++;
//         end--;
//     }
//     cout << "Valid Palindrome";
//     return true;
// }

// int main () {
//     char ch[] = "racecar";
//     isValidPalindrome(ch, strlen(ch));
//     return 0;
// }


//cstring Functions
// #include <cstring>
// strcpy(destination, source) //copies source string to destination
// strcat(destination, source) //concatenates source string to destination
// strcmp(str1, str2) //compares two strings and returns 0 if they are equal



//Basics of Strings in C++

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main () {
//     string str1;
//     getline(cin, str1);
//     // cout << str1 << endl;
//     cout << "The letter is :"<<str1[2]<<endl;
//     cout << str1[4]<<endl;
//     return 0;
// }



// String Member Function
// #include <iostream>
// #include <cstring>  
// using namespace std;
 
// int main () {
//     string str1 = "Hello Everyone";
//     cout << str1.length() << endl;
//     cout << str1.substr(1, 3) << endl;
//     cout << str1.find("lo") << endl;    
//     cout << str1.find("e", 2) << endl;
//     cout << str1.at(3) <<endl;
//     return 0;
// }



//Anagram Problem

#include <iostream>
#include <cstring>  
using namespace std;

int main () {
    string str1 = "rat";
    string str2 = "tar";

     if(str1.length() != str2.length()){
            cout << "Not an Anagram";
            return 0;
    }
    
    char count[26] = {0};
    for(int i = 0; i < str1.length(); i++){
      count[str1[i] - 'a']++;   
    }

    for(int i = 0; i < str2.length(); i++){
        if(count[str2[i] - 'a'] == 0){
            cout << "Not an Anagram";
            return 0;
        }
        count[str2[i] - 'a']--;
    }
    cout << "Valid Anagram";
    return 0;
}