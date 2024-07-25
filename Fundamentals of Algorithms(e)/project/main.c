//Gaire Ananta Prasad (M24W0272)
#include <stdio.h>
#include "bst.h"
#include "avl.h"

int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("BST Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    root = deleteNode(root, 20);
    printf("BST Inorder Traversal after deleting 20: ");
    inorderTraversal(root);
    printf("\n");

    root = deleteNode(root, 30);
    printf("BST Inorder Traversal after deleting 30: ");
    inorderTraversal(root);
    printf("\n");

    root = deleteNode(root, 50);
    printf("BST Inorder Traversal after deleting 50: ");
    inorderTraversal(root);
    printf("\n");

    // AVL Tree
    struct AVLNode* avlRoot = NULL;
    avlRoot = insertAVL(avlRoot, 50);
    avlRoot = insertAVL(avlRoot, 30);
    avlRoot = insertAVL(avlRoot, 20);
    avlRoot = insertAVL(avlRoot, 40);
    avlRoot = insertAVL(avlRoot, 70);
    avlRoot = insertAVL(avlRoot, 60);
    avlRoot = insertAVL(avlRoot, 80);

    printf("AVL Tree Inorder Traversal: ");
    inorderTraversalAVL(avlRoot);
    printf("\n");

    avlRoot = deleteAVLNode(avlRoot, 20);
    printf("AVL Tree Inorder Traversal after deleting 20: ");
    inorderTraversalAVL(avlRoot);
    printf("\n");

    avlRoot = deleteAVLNode(avlRoot, 30);
    printf("AVL Tree Inorder Traversal after deleting 30: ");
    inorderTraversalAVL(avlRoot);
    printf("\n");

    avlRoot = deleteAVLNode(avlRoot, 50);
    printf("AVL Tree Inorder Traversal after deleting 50: ");
    inorderTraversalAVL(avlRoot);
    printf("\n");

    return 0;
}

