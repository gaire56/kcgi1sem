//Gaire Ananta Prasad M24W0272
#ifndef AVL_H
#define AVL_H

struct AVLNode {
    int data;
    struct AVLNode* left;
    struct AVLNode* right;
    int height;
};

struct AVLNode* createAVLNode(int data);
struct AVLNode* insertAVL(struct AVLNode* node, int data);
struct AVLNode* deleteAVLNode(struct AVLNode* root, int data);
void inorderTraversalAVL(struct AVLNode* root);

#endif
