//Gaire Ananta Prasad (M24W0272)
#include <stdio.h>
#include <stdlib.h>
#include "avl.h"

int max(int a, int b) {
    return (a > b) ? a : b;
};

struct AVLNode* createAVLNode(int data) {
    struct AVLNode* newNode = (struct AVLNode*)malloc(sizeof(struct AVLNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    newNode->height = 1;
    return newNode;
};

int height(struct AVLNode* node) {
    if (node == NULL) {
        return 0;
    };
    return node->height;
};

int getBalance(struct AVLNode* node) {
    if (node == NULL) {
        return 0;
    };
    return height(node->left) - height(node->right);
};

struct AVLNode* rightRotate(struct AVLNode* y) {
    struct AVLNode* x = y->left;
    struct AVLNode* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
};

struct AVLNode* leftRotate(struct AVLNode* x) {
    struct AVLNode* y = x->right;
    struct AVLNode* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
};

struct AVLNode* insertAVL(struct AVLNode* node, int data) {
    if (node == NULL) {
        return createAVLNode(data);
    }

    if (data < node->data) {
        node->left = insertAVL(node->left, data);
    } else if (data > node->data) {
        node->right = insertAVL(node->right, data);
    } else {
        return node;
    }

    node->height = 1 + max(height(node->left), height(node->right));
    int balance = getBalance(node);

    if (balance > 1 && data < node->left->data) {
        return rightRotate(node);
    }

    if (balance < -1 && data > node->right->data) {
        return leftRotate(node);
    }

    if (balance > 1 && data > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && data < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
};

struct AVLNode* minValueNode(struct AVLNode* node) {
    struct AVLNode* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct AVLNode* deleteAVLNode(struct AVLNode* root, int data) {
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = deleteAVLNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteAVLNode(root->right, data);
    } else {
        if ((root->left == NULL) || (root->right == NULL)) {
            struct AVLNode* temp = root->left ? root->left : root->right;

            if (temp == NULL) {
                temp = root;
                root = NULL;
            } else {
                *root = *temp;
            }
            free(temp);
        } else {
            struct AVLNode* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteAVLNode(root->right, temp->data);
        }
    }

    if (root == NULL) {
        return root;
    }

    root->height = 1 + max(height(root->left), height(root->right));
    int balance = getBalance(root);

    if (balance > 1 && getBalance(root->left) >= 0) {
        return rightRotate(root);
    }

    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalance(root->right) <= 0) {
        return leftRotate(root);
    }

    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void inorderTraversalAVL(struct AVLNode* root) {
    if (root != NULL) {
        inorderTraversalAVL(root->left);
        printf("%d ", root->data);
        inorderTraversalAVL(root->right);
    }
}
