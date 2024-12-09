#include <bits/stdc++.h>
using namespace std;

// implementation of a doubly linked list

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int c) {
        data = c;
        prev = next = nullptr;
    }
};

void j2() {
    Node* head = nullptr;

    int n;
    cout << "Enter the number of elements you wish to enter: ";
    cin >> n;
    int tc;

    // for (int i = 0; i < n; i++) {
    //     cin >> tc;
    //     if (head == nullptr) {
    //         head->next = new Node(tc);            
    //     } else {
    //         head->next = Node(tc);
    //     }
    // }

    
}