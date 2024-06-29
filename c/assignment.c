/*GAIRE ANANTA PRASAD*/
/*M24W0272*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Structure for stack
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

// Function to create a stack
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push element onto stack
void push(struct Stack* stack, int item) {
    stack->array[++stack->top] = item;
}

// Function to pop element from stack
int pop(struct Stack* stack) {
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return '$';
}

// Function to return the precedence of an operator
int precedence(char op) {
    if(op == '+' || op == '-')
        return 1;
    if(op == '*' || op == '/')
        return 2;
    return 0;
}

// Function to convert infix expression to postfix expression
void infixToPostfix(char* infix, char* postfix) {
    struct Stack* stack = createStack(strlen(infix));
    int i, k;
    for(i = 0, k = -1; infix[i]; ++i) {
        if(isalnum(infix[i]))
            postfix[++k] = infix[i];
        else if(infix[i] == '(')
            push(stack, infix[i]);
        else if(infix[i] == ')') {
            while(!isEmpty(stack) && stack->array[stack->top] != '(')
                postfix[++k] = pop(stack);
            if(!isEmpty(stack) && stack->array[stack->top] != '(')
                return; // Invalid expression
            else
                pop(stack);
        } else { // Operator
            while(!isEmpty(stack) && precedence(infix[i]) <= precedence(stack->array[stack->top]))
                postfix[++k] = pop(stack);
            push(stack, infix[i]);
        }
    }
    while(!isEmpty(stack))
        postfix[++k] = pop(stack);
    postfix[++k] = '\0';
}

// Function to evaluate postfix expression
int evaluatePostfix(char* postfix) {
    struct Stack* stack = createStack(strlen(postfix));
    int i, op1, op2, result;
    for(i = 0; postfix[i]; ++i) {
        if(isdigit(postfix[i]))
            push(stack, postfix[i] - '0');
        else {
            op2 = pop(stack);
            op1 = pop(stack);
            switch(postfix[i]) {
                case '+': push(stack, op1 + op2); break;
                case '-': push(stack, op1 - op2); break;
                case '*': push(stack, op1 * op2); break;
                case '/': push(stack, op1 / op2); break;
            }
        }
    }
    result = pop(stack);
    return result;
}

int main() {
    char infix[100], postfix[100];
    printf("Enter infix expression: ");
    scanf("%s", infix);
    
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    
    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);
    
    return 0;
}
