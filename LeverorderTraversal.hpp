#ifndef __LEVELORDER__
#define __LEVELORDER__

#include <queue>
#include <iostream>

template <typename T>
struct Node {
    T value = 0;
    Node* left = nullptr;
    Node* right = nullptr;
};

template <typename T>
void levelOrderTraversal(Node<T>* root) {
    if (root == nullptr) {
        return;
    }
    std::queue<Node<T>*> Q;
    Q.push(root);
    
    while (!Q.empty()) {
        Node<T>* current = Q.front();
        std::cout << current->value << " ";
        if (current -> left != nullptr) {
            Q.push(current -> left);
        }
        if (current -> right != nullptr) {
            Q.push(current -> right);
        }
        Q.pop();
    }
    
}

#endif // __LEVELORDER__