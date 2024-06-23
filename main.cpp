#include <iostream>
#include "LeverorderTraversal.hpp"



int main() {

    Node<int>* root = new Node<int>;
    root->value = 2;
    
    Node<int>* r1 = new Node<int>;
    r1->value = 4;
    root->right = r1;

    Node<int>* l1 = new Node<int>;
    l1->value = 3;
    root->left = l1;

    Node<int>* r2 = new Node<int>;
    r2->value = 5;
    r1->right = r2;

    Node<int>* l2 = new Node<int>;
    l2->value = 8;
    r1->left = l2;

    Node<int>* r3 = new Node<int>;
    r3->value = 10;
    l1->right = r3;

    
    Node<int>* l3 = new Node<int>;
    l3->value = 65;
    l1->left = l3;

    
    levelOrderTraversal(root);

    delete root;
    root = nullptr;
    
    delete r1;
    r1 = nullptr;

    delete l1;
    l1 = nullptr;

    delete r2;
    r2 = nullptr;

    delete l2;
    l2 = nullptr;

    delete r3;
    r3 = nullptr;

    delete l3;
    l3 = nullptr;

    return 0;
}