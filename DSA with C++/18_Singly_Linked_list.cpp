#include <iostream>
using namespace std;

struct Node {
    int info;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void insert_last_singly();
void traversal();
void insert_start_singly();
void insert_position_singly();
void delete_first_singly();
void delete_last_singly();
void delete_position_singly();

int main() {
    int choice, ch;
    do {
        cout << "\n1. Insertion at start\n2. Insertion at last\n3. Insertion at location\n4. Traversal\n5. Delete first\n6. Delete last\n7. Delete position\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: insert_start_singly(); break;
            case 2: insert_last_singly(); break;
            case 3: insert_position_singly(); break;
            case 4: traversal(); break;
            case 5: delete_first_singly(); break;
            case 6: delete_last_singly(); break;
            case 7: delete_position_singly(); break;
            default: cout << "Invalid choice!" << endl;
        }
        cout << "\nDo you want to continue (0/1): ";
        cin >> ch;
    } while (ch);

    return 0;
}

void traversal() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->info << "\t";
        temp = temp->next;
    }
    cout << endl;
}

void insert_last_singly() {
    int value;
    cout << "\nEnter the value to be inserted: ";
    cin >> value;

    Node* p = new Node();
    p->info = value;
    p->next = nullptr;

    if (head == nullptr) {
        head = p;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = p;
    }
}

void insert_start_singly() {
    int value;
    cout << "\nEnter the value: ";
    cin >> value;

    Node* p = new Node();
    p->info = value;
    p->next = head;
    head = p;
}

void insert_position_singly() {
    int k, value;
    cout << "\nEnter the position: ";
    cin >> k;
    cout << "\nEnter the value: ";
    cin >> value;

    Node* p = new Node();
    p->info = value;

    if (k == 1) {
        p->next = head;
        head = p;
    } else {
        Node* temp = head;
        for (int i = 1; i < k - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position is out of bounds." << endl;
        } else {
            p->next = temp->next;
            temp->next = p;
        }
    }
}

void delete_first_singly() {
    if (head == nullptr) {
        cout << "\nList is empty\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    cout << "\nThe deleted node is " << temp->info << endl;
    delete temp;
}

void delete_last_singly() {
    if (head == nullptr) {
        cout << "\nList is empty\n";
        return;
    }
    if (head->next == nullptr) {
        cout << "\nThe deleted node is " << head->info << endl;
        delete head;
        head = nullptr;
        return;
    }
    Node* T1 = head;
    Node* T2 = head->next;
    while (T2->next != nullptr) {
        T1 = T2;
        T2 = T2->next;
    }
    T1->next = nullptr;
    cout << "\nThe deleted node is " << T2->info << endl;
    delete T2;
}

void delete_position_singly() {
    int k;
    cout << "\nEnter the position: ";
    cin >> k;

    if (head == nullptr) {
        cout << "\nList is empty\n";
        return;
    }
    if (k == 1) {
        delete_first_singly();
        return;
    }

    Node* T1 = head;
    Node* T2 = head->next;
    for (int i = 1; i < k - 1 && T2 != nullptr; i++) {
        T1 = T2;
        T2 = T2->next;
    }
    if (T2 == nullptr) {
        cout << "Position is out of bounds." << endl;
    } else {
        T1->next = T2->next;
        cout << "\nThe deleted node is " << T2->info << endl;
        delete T2;
    }
}
