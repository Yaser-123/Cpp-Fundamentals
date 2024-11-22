#include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
    ListNode* prev;
};

ListNode* head = nullptr;
ListNode* tail = nullptr;

void insertion_singly(int val, int k);
void del(int k);
void print();

int main() {
    // Function calls to demonstrate linked list operations
    insertion_singly(11, 1);
    insertion_singly(22, 2);
    insertion_singly(33, 3);
    print();  // Should print: 11 22 33
    
    cout << "\nAfter deleting the first element:\n";
    del(1);
    print();  // Should print: 22 33
    
    return 0;
}

void print() {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertion_singly(int val, int k) {
    ListNode* p = new ListNode();
    p->data = val;
    if (head == nullptr) {
        p->next = nullptr;
        p->prev = nullptr;
        head = p;
    } else if (k == 1) {
        head->prev = p;
        p->next = head;
        p->prev = nullptr;
        head = p;
    } else {
        ListNode* temp = head;
        while ((k - 2) > 0 && temp->next != nullptr) {
            temp = temp->next;
            k = k - 1;
        }
        if (temp->next == nullptr) {  // Inserting at the end
            temp->next = p;
            p->prev = temp;
            p->next = nullptr;
        } else {
            p->next = temp->next;
            p->prev = temp;
            (temp->next)->prev = p;
            temp->next = p;
        }
    }
}

void del(int k) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    ListNode* temp;
    if (k == 1) { // deletion at the beginning
        temp = head;
        if (head->next == nullptr) {
            head = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        cout << temp->data << endl;
        delete temp;
    } else { // deletion at k location
        temp = head;
        while (k - 1 > 0 && temp->next != nullptr) {
            temp = temp->next;
            k = k - 1;
        }
        if (temp->next != nullptr) {
            (temp->next)->prev = temp->prev;
            (temp->prev)->next = temp->next;
        } else {
            (temp->prev)->next = nullptr;
        }
        cout << temp->data << endl;
        delete temp;
    }
}
