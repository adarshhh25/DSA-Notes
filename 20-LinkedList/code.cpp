//Linked List Implementations
// #include <iostream>
// using namespace std;

// class Node {
//     public:
//        int data;
//        Node* next;
    
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class List {
//     Node* head;
//     Node* tail;

//     public:
//     List() {
//         head = tail = NULL;
//     }
    
//     void push_front(int Val) {
//         Node* newNode = new Node(Val);
//         if(head == NULL) {
//           head = tail = newNode;
//           return;
//         }
//         else {
//           newNode->next = head;
//           head = newNode;
//         }
//     }

//     void push_back(int Val) {
//        Node* newNode = new Node(Val);
//        if(head == NULL) {
//           head = tail = newNode;
//           return;
//        }
//        else {
//         tail->next = newNode;
//         tail = newNode;
//        }
//     }

//     void pop_front() {
//         if(head == NULL) {
//             cout<<"Linked List is Empty";
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }

//     void pop_back() {
//         if(head == NULL) {
//             cout<<"Linked List is Empty";
//             return;
//         }
//         Node* temp = head;
//         while(temp->next != tail) {
//             temp = temp->next;
//         }
//         temp->next = NULL;
//         delete tail;
//         tail = temp;
//     }

//     void insert(int Val, int pos) {
//         if(pos < 0) {
//             cout << "Invalid Position";
//             return;
//         }
//         if(pos == 0) {
//             push_front(Val);
//             return;
//         }

//         Node* temp = head;
//         for(int i = 0; i < pos-1; i++) {
//             if(temp == NULL) {
//                 cout << "Invalid Position";
//                 return;
//             }
//             temp = temp->next;
//         }
//         Node* newNode = new Node(Val);
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     int search(int Val) {
//         Node* temp = head;
//         int idx = 0;
//         while(temp != NULL) {
//             if(temp->data == Val) {
//                 cout << "Found";
//                 return idx;
//             }
//             temp = temp->next;
//             idx++;
//         }
//         cout<< "Not Found";
//         return -1;
//     }

//     void printLL() {
//         if(head == NULL) {
//         cout<<"Linked List is Empty";
//         return;
//         }
//        Node* temp = head;
//        while(temp != NULL) {
//         cout << temp->data << "->";
//         temp = temp->next;
//        }
//        cout << "NULL" << endl;
//     }
// };

// int main () {
//     List ll;
//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_back(3);
//     ll.push_back(4);
//     ll.printLL();
//     ll.pop_front();
//     ll.printLL();
//     ll.pop_back();
//     ll.printLL();
//     ll.search(3);
//     return 0;
// }


//206 Reverse a Linked Lsit
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = NULL;

//         while(curr != NULL) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
// };



//876 Middle Of Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp = head;
//         int len = 0;

//         while (temp != NULL) {
//             len++;
//             temp = temp->next;
//         }

//         int mid = len / 2;   // this automatically gives correct index for both even/odd
//         temp = head;

//         while (mid--) {
//             temp = temp->next;
//         }

//         return temp;
//     }
// };



///Detect a Cycle in Linked List (141)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };



//Return Node where cycle starts (142)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool isCycle = false;
//         while(fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast) {
//                 isCycle = true;
//                 break;
//             }
//         }

//         if(!isCycle) {
//          return NULL;
//         }

//         slow = head;
//         while(slow != fast) {
//             slow = slow->next;
//             fast = fast->next;
//         }
//         return slow;
//     }
// };



//Remove Cycle 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool isCycle = false;
//         while(fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast) {
//                 isCycle = true;
//                 break;
//             }
//         }

//         if(!isCycle) {
//          return NULL;
//         }

//         slow = head;
//         LisNode* prev = NULL;
//         while(slow != fast) {
//             slow = slow->next;
//             prev = fast;
//             fast = fast->next;
//         }
//         prev->next = NULL;
//         return slow;
//     }
// };



///Doubly Linked List
// #include <iostream>
// using namespace std;

// class Node {
//     public:
//        int data;
//        Node* prev;
//        Node* next;
    
//     Node(int val) {
//         data = val;
//         prev = next = NULL;
//     }
// };

// class DoublyList {
//     Node* head;
//     Node* tail;

//     public:
//        DoublyList() {
//         head = tail = NULL;
//        }

//       void push_front(int val) {
//         Node* newNode = new Node(val);
//         if(head == NULL) {
//             head = tail = newNode;
//         }
//         else {
//             newNode->next = head;
//             head->prev = newNode;
//             head = newNode;
//         }
//       }

//       void push_back(int val) {
//         Node* newNode = new Node(val);
//         if(head == NULL) {
//             head = tail = newNode;
//         }
//         else {
//             newNode->prev = tail;
//             tail->next = newNode;
//             tail = newNode;
//         }
//       }

//       void pop_front() {
//        if(head == NULL) {
//         cout << "List is Empty";
//         return;
//        }
//        Node* temp = head;
//        head = head->next;
//        if(head != NULL) {
//         head->prev = NULL;
//        }
//        temp->next = NULL;
//        delete temp;
//       }

//       void pop_back() {
//        if(head == NULL) {
//         cout << "List is Empty";
//         return;
//        }
//        Node* temp = tail;
//        tail = tail->prev;
//        if(tail != NULL) {
//          tail->next = NULL;
//        }
//        temp->prev = NULL;
//        delete temp;
//       }

//       void print () {
//         Node* temp = head;
//         while(temp != NULL) {
//             cout<< temp->data << "<=>";
//             temp = temp->next;
//         }
//         cout << "NULL\n";
//       }

// };

// int main () {
//     DoublyList dll;
//     dll.push_front(1);
//     dll.push_front(2);
//     dll.push_front(3);

//     dll.print();

//     dll.push_back(4);
//     dll.push_back(5);
//     dll.push_back(6);

//     dll.print();

//     dll.pop_front();

//     dll.print();

//     dll.pop_back();

//     dll.print();
//     return 0;
// }



///Circular Linked List
// #include <iostream>
// using namespace std;

// class Node {
//     public:
//        int data;
//        Node* next;

//     Node(int val) {
//        data = val;
//        next = NULL;
//     }
// };

// class CircularList {
//     Node* head;
//     Node* tail;

//     public:

//     CircularList() {
//         head = tail = NULL;
//     }

//     void inserAtHead(int val) {
//       Node* newNode = new Node(val);
//       if(head == NULL) {
//         head = tail = newNode;
//         tail->next = head;
//       }
//       else {
//         newNode->next = head;
//         head = newNode;
//         tail->next = newNode;
//       }
//     }

//     void insertAtTail(int val) {
//       Node* newNode = new Node(val);
//       if(head == NULL) {
//         head = tail = newNode;
//         tail->next = head;
//       }
//       else {
//         newNode->next = head;
//         tail->next = newNode;
//         tail = newNode;        
//       }
//     }

//     void deleteAtHead() {
//        if(head == NULL) {
//         return;
//        }
//        else if(head == tail) {
//            delete head;
//            head = tail = NULL;
//        }
//        else {
//          Node* temp = head;
//          head = head->next;
//          tail->next = head;
//          temp->next = NULL;
//          delete temp;
//        }
//     }

//     void deleteAtTail() {
//       if(head == NULL) {
//         return;
//        }
//        else if(head == tail) {
//            delete head;
//            head = tail = NULL;
//        }
//       else {
//          Node* temp =  tail;
//          Node* prev = head;
//          while(prev->next != tail) {
//            prev = prev->next;
//          }
//          tail = prev;
//          tail->next = head;
//          temp->next = NULL;
//          delete temp;
//       }
//     }

//     void print() {
//       if(head == NULL) return;

//       cout << head->data << "->";
//       Node* temp = head->next;
//       while(temp != head) {
//         cout << temp->data << "->";
//         temp = temp->next;
//       }
//       cout << temp->data << endl;
//     }
    
// };

// int main () {
//     CircularList cll;
    
//     cll.inserAtHead(1);
//     cll.inserAtHead(2);
//     cll.inserAtHead(3);

//     cll.print();

//     cll.insertAtTail(4);
//     cll.insertAtTail(5);
//     cll.insertAtTail(6);

//     cll.print();

//     cll.deleteAtHead();

//     cll.print();

//     cll.deleteAtTail();

//     cll.print();
//     return 0;
// }


///430
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

// class Solution {
// public:
//     Node* flatten(Node* head) {
//         if(head == NULL) {
//             return NULL;
//         }
//         Node* curr = head;
//         while(curr != NULL) {
//             if(curr->child != NULL) {

//                 //flatten the Linked List
//                 Node* next = curr->next;
//                 curr->next = flatten(curr->child);
//                 curr->next->prev = curr;
//                 curr->child = NULL;

//                 //find the tail
//                 while(curr->next != NULL) {
//                     curr = curr->next;
//                 }
                
//                 //Attach the tail to next ptr
//                 if(next != NULL) {
//                     curr->next = next;
//                     next->prev = curr;
//                 }
//             }
//             else {
//                 curr = curr->next;
//             }
//         }
//         return head;
//     }
// };
///Hello