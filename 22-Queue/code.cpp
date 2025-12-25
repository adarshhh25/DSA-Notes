//Queue Implementation using Array
// #include <iostream>
// using namespace std;

// const int N = 5;
// int queue[N];
// int rear = -1, front = -1;

// void push(int data) {
//     if (rear == N - 1) {
//         cout << "Overflow";
//     }
//     else if (rear == -1 && front == -1) {
//         front = rear = 0;
//         queue[rear] = data;
//     }
//     else {
//         rear++;
//         queue[rear] = data;
//     }
// }

// void pop() {
//     if (rear == -1 && front == -1) {
//         cout << "Underflow";
//     }
//     else if (front == rear) {
//         front = rear = -1;
//     }
//     else {
//         cout << queue[front] << endl;
//         front++;
//     }
// }

// void peek() {
//     if (rear == -1 && front == -1) {   
//         cout << "Queue is Empty";
//     } else {
//         cout << queue[front];
//     }
// }

// void display() {
//     if (rear == -1 && front == -1) {   
//         cout << "Queue is Empty";
//     } else {
//         for (int i = front; i <= rear; i++) {
//             cout << queue[i] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     push(1);
//     push(2);
//     push(3);
//     display();
//     pop();     
//     display(); 
//     return 0;
// }



//Queue Implementation using Linked-List
// #include <iostream>
// using namespace std;

// class Node {  
//    public:
//       Node* next;
//       int data;
    
//       Node(int val) {
//        data = val;
//        next = NULL;
//     }
// };

// class Queue {
//    Node* head;
//    Node* tail;

//    public: 
//      Queue() {
//         head = tail = NULL;
//     }

//     void push(int val) {
//         Node* newNode = new Node(val);
//         if(isEmpty()) {
//            head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void pop() {
//         if(isEmpty()) {
//             cout << "Queue is Empty";
//             return;
//         } else {
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//         }
//     }

//     int front() {
//         if(isEmpty()) {
//             cout << "Queue is Empty";
//             return -1;
//         } else {
//             return head->data;
//         }
//     }

//     bool isEmpty() {
//         return head == NULL;
//     }
// };

// int main () {
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//     while(!q.isEmpty()) {
//        cout << q.front() << " ";
//        q.pop();
//     }
//     cout << endl;
//     return 0;
// }



// Queue implementation using Stack
// #include <iostream>
// using namespace std;

// const int N = 5;
// int S1[N], S2[N];
// int top1 = -1, top2 = -1;
// int count = 0;

// void push1(int data) {
//     if(top1 == N-1) {
//         cout << "Stack Overflow";
//     } else {
//         top1++;
//         S1[top1] = data;
//     }
// }

// void push2(int data) {
//     if(top2 == N-1) {
//         cout << "Stack Overflow";
//     } else {
//         top2++;
//         S2[top2] = data;
//     }
// }

// int pop1() {
//     if(top1 == -1) {
//         cout << "Stack Underflow";
//         return -1;
//     }
//     return S1[top1--];
// }

// int pop2() {
//     if(top2 == -1) {
//         cout << "Stack Underflow";
//         return -1;
//     }
//     return S2[top2--];
// }

// void enqueue (int data) {
//     push1(data);
//     count++;
// }

// void dequeue () {
//     if(top1 == -1) {
//         cout << "Queue is Empty";
//         return;
//     }

//     while(top1 != -1) {
//         push2(pop1());
//     }

//     cout<< pop2() << endl;
//     count--;

//     while(top2 != -1) {
//         push1(pop2());
//     } 
// }

// void display() {
//     for(int i = 0; i <= top1; i++) {
//         cout << S1[i] << " ";
//     }
//     cout << endl;
// }

// int main () {
//      enqueue(1);
//      enqueue(2);
//      enqueue(3);
//      display();
//      dequeue(); 
//      display();
//      return 0;
// }



// Deque Implemetation using STL
// #include <iostream>
// #include <deque>
// using namespace std;

// int main () {
//     deque<int> dq;
//     dq.push_back(1);
//     dq.push_back(2);
//     dq.push_back(3);

//     cout << dq.front() << endl;
//     dq.push_back(4);
//     dq.pop_front();
//     dq.pop_back();
//     cout << dq.back() << endl;
//     return 0;
// }



///First Unique Character (387) O(n*n)
// #include <iostream>
// #include <string>
// using namespace std;

// int getUniqueIndex(string str, int firstUniqueIndex) {
//     for(int i = 0; i < str.length(); i++) {
//      bool isUnique = true;
//        for(int j = 0; j < str.length(); j++) {
//         if(i != j && str[i] == str[j]) {
//            isUnique = false;
//            break;
//         }
//        }
//        if(isUnique) {
//           firstUniqueIndex = i;
//           break;
//        }
//     }
//     return firstUniqueIndex;
// }

// int main () {
//     int firstUniqueIndex = -1;
//     string str = "level";
//     int result = getUniqueIndex(str, firstUniqueIndex);
//     cout << result << endl;
//     return 0;
// }



////Sliding Window Maximum
// class Solution {
// public:

//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int> result;
//         deque<int> dq;
         
//         ///For 1st Window
//         for(int i = 0; i < k; i++) {
//             //Remove Smaller Elements
//             while(dq.size() > 0 && nums[dq.back()] <= nums[i] ) {
//                   dq.pop_back();
//             }
//             dq.push_back(i);
//         }

//         for(int i = k; i < nums.size(); i++) {
//             result.push_back(nums[dq.front()]);

//             //Remove Elements which are not part of the current Window
//             while(dq.size() > 0 && dq.front() <= i-k) {
//                   dq.pop_front();
//             }

//             //Remove Smaller Elements
//             while(dq.size() > 0 && nums[dq.back()] <= nums[i] ) {
//                   dq.pop_back();
//             }
//             dq.push_back(i);
//         }
//         result.push_back(nums[dq.front()]);
//         return result;
//     }
// };
