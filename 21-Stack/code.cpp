// //Stack Implementation using Array
// #include <iostream>
// using namespace std;

// const int N = 5;
// int stack[5];
// int top = -1;

// void push() {
//     int x;
//     cout<<"Enter a number to push: ";
//     cin>> x;
//     if(top == (N-1)) {
//        cout<<"Stack overflow occurred";
//     }
//     else {
//        top++;
//        stack[top] = x;
//        cout<< "Pushed " << x <<endl;
//     }
// }

// void pop () {
//     if(top == -1) {
//         cout << "Stack underflow occurred";
//     }
//     else {
//         cout<< "Poped "<<stack[top] <<endl;
//         top--;
//     }
// }

// void display() {
//     if(top == -1) {
//         cout << "Stack is Empty" << endl;
//         return;
//     }
//     cout << "Stack Elements => ";
//     for(int i = top; i >= 0; i--) {
//         cout <<stack[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     push();
//     push();
//     push();
//     display();
//     pop();
//     display();
//     return 0;
// }



//Stack Implementation using Linked-List
// #include <iostream>
// using namespace std;

// // Node structure
// class Node {
// public:
//     int data;       // value
//     Node* next;     // pointer to next node

//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// // Stack class using Linked List
// class Stack {
// public:
//     Node* top;   // top of stack

//     Stack() {
//         top = NULL;    // initially empty
//     }

//     // PUSH operation
//     void push(int x) {
//         Node* newNode = new Node(x);

//         newNode->next = top;  // new node points to previous top
//         top = newNode;        // update top

//         cout << "Pushed " << x << endl;
//     }

//     // POP operation
//     void pop() {
//         if (top == NULL) {
//             cout << "Stack Underflow (Stack is Empty)" << endl;
//             return;
//         }

//         Node* temp = top;
//         cout << "Popped " << top->data << endl;

//         top = top->next;  // move top to next node
//         delete temp;      // free memory
//     }

//     // PEEK operation (top element)
//     void peek() {
//         if (top == NULL) {
//             cout << "Stack is Empty" << endl;
//         } else {
//             cout << "Top Element = " << top->data << endl;
//         }
//     }

//     // Check if stack is empty
//     bool isEmpty() {
//         return (top == NULL);
//     }

//     // Display all elements
//     void display() {
//         if (top == NULL) {
//             cout << "Stack is Empty" << endl;
//             return;
//         }

//         cout << "Stack elements (top to bottom): ";
//         Node* temp = top;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Stack s;

//     s.push(10);
//     s.push(20);
//     s.push(30);

//     s.display();

//     s.pop();
//     s.peek();

//     s.display();

//     return 0;
// }


//901
//My-Approach
// #include <iostream>
// #include <vector>
// using namespace std;

// void span(vector<int> &v, vector<int> &ans) {
// for(int i = 0; i <= v.size()-1; i++) {
//     int currPrice = v[i];
//     int span = 1;
//     int j = i-1;
//     while(j < 0 ? false : currPrice >= v[j]) {
//         span++;
//         j--;
//     }
//     ans.push_back(span);
// }
// }

// int main () {
//     vector<int>v = {100,80,60,70,60,75, 85};
//     vector<int>ans;
//     span(v, ans);
//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }


//901
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// int main () {
//     vector<int> price = {100, 80, 60, 70, 60, 75, 85};
//     stack<int> s;
//     vector<int> ans(price.size(), 0);

//     for(int i = 0; i < price.size(); i++) {
//         while(s.size() > 0 && price[s.top()] <= price[i]) {
//             s.pop();
//         }

//         if(s.empty()) {
//           ans[i] = i + 1;
//         }
//         else {
//             ans[i] = i - s.top();
//         }
//         s.push(i);
//     }

//      for(int val : ans) {
//             cout << val << " ";
//      }

//     return 0;
// }



///Next Greater Element Approach
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// int main () {
//     vector<int> arr = {6, 8, 2, 1, 3};
//     vector<int> nextgreaterElement(arr.size(), 0);
//     stack<int> s;
//     int n = arr.size();
//     for(int i = n-1; i >= 0; i--) {

//     while(s.size () > 0 &&  s.top() <= arr[i]) {
//         s.pop();
//     }

//     if(s.empty()) {
//         nextgreaterElement[i] = -1;
//     } else {
//         nextgreaterElement[i] = s.top();
//     }

//     s.push(arr[i]);
//     }

//     for(int val : nextgreaterElement) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }


///496
// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int, int> m;
//         vector<int> ans;
//         stack<int> s;

//         for(int i = nums2.size()-1; i >= 0; i--) {
//             while(s.size() > 0 && s.top() < nums2[i]) {
//                 s.pop();
//             }
//             if(s.empty()) {
//                m[nums2[i]] = -1;
//             }
//             else {
//                 m[nums2[i]] = s.top();
//             }
//             s.push(nums2[i]);
//         }

//         for(int i = 0; i < nums1.size(); i++) {
//            ans.push_back(m[nums1[i]]);
//         }
//         return ans;
//     }
// };



///Previous Smaller Element
// #include<iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// int main () {
//     vector<int> arr = {3, 1, 0, 8, 6};
//     vector<int> ans(arr.size(), 0);
//     stack<int> s;
//     int n = arr.size() - 1;
//     for(int i = 0; i <= n; i++) {
//         while(s.size() > 0 && s.top() >= arr[i]) {
//             s.pop();
//         }
//         if(s.empty()) {
//             ans[i] = -1;
//         } else {
//             ans[i] = s.top();
//         }
//         s.push(arr[i]);
//     }

//     for(int val : ans) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// 155 - With SC(2n)
// class MinStack {
// public:
//     stack<pair<int, int>> s;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if(s.empty()) {
//             s.push({val, val});
//         }
//         else {
//             int minVal = min(val, s.top().second);
//             s.push({val, minVal});
//         }
//     }
    
//     void pop() {
//         s.pop();
//     }
    
//     int top() {
//         return s.top().first;
//     }
    
//     int getMin() {
//         return s.top().second;
//     }
// };

//// 155 with SC(n)
// class MinStack {
// public:
//     stack<pair<int, int>> s;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if(s.empty()) {
//             s.push({val, val});
//         }
//         else {
//             int minVal = min(val, s.top().second);
//             s.push({val, minVal});
//         }
//     }
    
//     void pop() {
//         s.pop();
//     }
    
//     int top() {
//         return s.top().first;
//     }
    
//     int getMin() {
//         return s.top().second;
//     }
// };