#include <iostream>
using namespace std;

class Node {
    public:
       int data;
       Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

    public:
    List() {
        head = tail = NULL;
    }
    
    void push_front(int Val) {
        Node* newNode = new Node(Val);
        if(head == NULL) {
          head = tail = newNode;
          return;
        }
        else {
          newNode->next = head;
          head = newNode;
        }
    }

    void push_back(int Val) {
       Node* newNode = new Node(Val);
       if(head == NULL) {
          head = tail = newNode;
          return;
       }
       else {
        tail->next = newNode;
        tail = newNode;
       }
    }

    void pop_front() {
        if(head == NULL) {
            cout<<"Linked List is Empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        if(head == NULL) {
            cout<<"Linked List is Empty";
            return;
        }
        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int Val, int pos) {
        if(pos < 0) {
            cout << "Invalid Position";
            return;
        }
        if(pos == 0) {
            push_front(Val);
            return;
        }

        Node* temp = head;
        for(int i = 0; i < pos-1; i++) {
            if(temp == NULL) {
                cout << "Invalid Position";
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(Val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int Val) {
        Node* temp = head;
        int idx = 0;
        while(temp != NULL) {
            if(temp->data == Val) {
                cout << "Found";
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        cout<< "Not Found";
        return -1;
    }

    void printLL() {
        if(head == NULL) {
        cout<<"Linked List is Empty";
        return;
        }
       Node* temp = head;
       while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
       }
       cout << "NULL" << endl;
    }
};

int main () {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.printLL();
    ll.pop_front();
    ll.printLL();
    ll.pop_back();
    ll.printLL();
    ll.search(3);
    return 0;
}