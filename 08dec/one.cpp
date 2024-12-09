//
// Created by ariha on 08-12-2024.
//
#include <bits/stdc++.h>
using namespace std;

// I will be implementing Binary Search algorithm (recursive) in a Binary search tree

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int c) {
        data = c;
        left = right = nullptr;
    }
};

class BinarySearchTree {
public:
    TreeNode* root;
    BinarySearchTree() {
        root = nullptr;
    }

    void insert(int c) {
        root = insertRec(root, c);
    }

    void searchBST(int chc) {
        TreeNode* found = search_ele(root, chc);
        if (found == nullptr) {
            cout << "Element not found.\n";
        } else {
            cout << "Element found." << endl;
        }
    }

private:
    TreeNode* insertRec(TreeNode* node, int val) {
        if (node == nullptr) {
            return new TreeNode(val);
        }

        if (node->data < val) {
            node->right = insertRec(node->right, val);
        } else {
            node->left = insertRec(node->left, val);
        }
        return node;
    }
    // now that the binary search tree has been created, shit is gonna get good.

    TreeNode* search_ele(TreeNode* node, int chc) {
        if (node == nullptr || node->data == chc) {
            return node;
        }

        if (node->data < chc) {
            return search_ele(node->right, chc);
        }

        return search_ele(node->left, chc);
    }
};

void j1() {
    BinarySearchTree bst;
    int n;
    cout << "Enter the number of elements you wish to insert: ";
    cin >> n;
    int tc;

    for (int i = 0; i < n; i++) {
        cin >> tc;
        bst.insert(tc);
    }

    int chc;
    cout << "Enter the element you wish to search: ";
    cin >> chc;

    bst.searchBST(chc);
}


int main() {
    j1();
    return 0;
}