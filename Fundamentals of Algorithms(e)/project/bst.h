//Gaire Ananta Prasad (M24W0272)
#ifndef BST_H
#define BST_H

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data);
struct Node* insert(struct Node* root, int data);
struct Node* search(struct Node* root, int data);
struct Node* deleteNode(struct Node* root, int data);
void inorderTraversal(struct Node* root);

#endif
