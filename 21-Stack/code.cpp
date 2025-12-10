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
#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;       // value
    Node* next;     // pointer to next node

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Stack class using Linked List
class Stack {
public:
    Node* top;   // top of stack

    Stack() {
        top = NULL;    // initially empty
    }

    // PUSH operation
    void push(int x) {
        Node* newNode = new Node(x);

        newNode->next = top;  // new node points to previous top
        top = newNode;        // update top

        cout << "Pushed " << x << endl;
    }

    // POP operation
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow (Stack is Empty)" << endl;
            return;
        }

        Node* temp = top;
        cout << "Popped " << top->data << endl;

        top = top->next;  // move top to next node
        delete temp;      // free memory
    }

    // PEEK operation (top element)
    void peek() {
        if (top == NULL) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Top Element = " << top->data << endl;
        }
    }

    // Check if stack is empty
    bool isEmpty() {
        return (top == NULL);
    }

    // Display all elements
    void display() {
        if (top == NULL) {
            cout << "Stack is Empty" << endl;
            return;
        }

        cout << "Stack elements (top to bottom): ";
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();
    s.peek();

    s.display();

    return 0;
}
