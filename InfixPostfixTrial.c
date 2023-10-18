#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

// Function to check if a character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to determine precedence of an operator
int precedence(char operator) {
    if (operator == '+' || operator == '-')
        return 1;
    else if (operator == '*' || operator == '/')
        return 2;
    else
        return 0; // Default precedence for other characters
}

// Function to convert infix expression to postfix
void infixToPostfix(char *infix, char *postfix) {
    char stack[MAX_STACK_SIZE]; // Stack to hold operators
    int top = -1; // Stack top index
    int i, j;

    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        char c = infix[i];

        if (c >= '0' && c <= '9') {
            postfix[j++] = c; // Append operands to the postfix expression
        } else if (c == '(') {
            stack[++top] = c; // Push opening parenthesis to the stack
        } else if (c == ')') {
            // Pop and append operators from the stack until we encounter '('
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            if (top != -1 && stack[top] == '(') {
                top--; // Discard the '('
            }
        } else if (isOperator(c)) {
            // Pop and append operators with higher or equal precedence from the stack
            while (top != -1 && precedence(stack[top]) >= precedence(c)) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = c; // Push current operator to the stack
        }
    }

    // Pop and append remaining operators from the stack
    while (top != -1) {
        postfix[j++] = stack[top--];
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
}

int main() {
    char infix[100];
    char postfix[100];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);

    return 0;
}
