#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;
};

Node *head = NULL;

// Create List
void create() {
    int n, x;
    cout << "Enter number of nodes: ";
    cin >> n;

    head = NULL;
    Node *temp, *last;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> x;

        temp = new Node;
        temp->data = x;
        temp->prev = NULL;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            last = temp;
        } else {
            last->next = temp;
            temp->prev = last;
            last = temp;
        }
    }
}

// Traverse
void traverse() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node *temp = head;
    cout << "List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Search
void search() {
    int key, pos = 1;
    cout << "Enter value to search: ";
    cin >> key;

    Node *temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            cout << "Found at position " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }

    cout << "Not Found\n";
}

// Insert at Position
void insert() {
    int pos, val;
    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;

    Node *newNode = new Node;
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (pos == 1) {
        newNode->next = head;
        if (head != NULL)
            head->prev = newNode;
        head = newNode;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Invalid Position\n";
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

// Delete at Position
void removeNode() {
    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node *temp = head;

    if (pos == 1) {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        delete temp;
        return;
    }

    for (int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Invalid Position\n";
        return;
    }

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    temp->prev->next = temp->next;

    delete temp;
}

// Reverse List
void reverse() {
    Node *curr = head;
    Node *temp = NULL;

    while (curr != NULL) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    if (temp != NULL)
        head = temp->prev;

    cout << "List Reversed\n";
}

int main() {
    int choice;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Create\n";
        cout << "2. Traverse\n";
        cout << "3. Search\n";
        cout << "4. Insert\n";
        cout << "5. Delete\n";
        cout << "6. Reverse\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: create(); break;
            case 2: traverse(); break;
            case 3: search(); break;
            case 4: insert(); break;
            case 5: removeNode(); break;
            case 6: reverse(); break;
            case 7: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice\n";
        }

    } while (choice != 7);

    return 0;
}