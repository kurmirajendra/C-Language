#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Structure definition for Stack
struct Stack {
    char ch;
    struct Stack *next;
} *top;

// Push function
void push(char ch) {
    struct Stack *ptr;
    ptr = (struct Stack *)malloc(sizeof(struct Stack));
    ptr->ch = ch;
    if (top == NULL) {
        top = ptr;
        top->next = NULL;
    } else {
        ptr->next = top;
        top = ptr;
    }
}

// Pop function
char pop() {
    if (top == NULL) {
        return '\0'; // Return null if stack is empty
    }
    struct Stack *temp = top;
    char poppedChar = temp->ch;
    top = top->next;
    free(temp);
    return poppedChar;
}

// Peek function to check the top element
char peek() {
    return (top == NULL) ? '\0' : top->ch;
}

// Function to check precedence of operators
int precedence(char operator) {
    if (operator == '^') return 3;
    if (operator == '*' || operator == '/') return 2;
    if (operator == '+' || operator == '-') return 1;
    return 0;
}

// Traverse function to clear remaining stack
void traverse() {
    while (top != NULL) {
        printf("%c", pop());
    }
}

// Main function
int main() {
    top = NULL;
    char infix[20];
    printf("\nEnter Infix Expression: "); // Prompt for input
    scanf("%s", infix);

    int len = strlen(infix);

    for (int i = 0; i < len; i++) {
        char x = infix[i];

        // If character is an operand, print it directly
        if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') || (x >= '0' && x <= '9')) {
            printf("%c", x);
        }
        // If character is an operator
        else if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^') {
            while (top != NULL && precedence(peek()) >= precedence(x)) {
                printf("%c", pop());
            }
            push(x);
        }
        // If character is an opening parenthesis
        else if (x == '(') {
            push(x);
        }
        // If character is a closing parenthesis
        else if (x == ')') {
            while (top != NULL && peek() != '(') {
                printf("%c", pop());
            }
            pop(); // Remove the opening parenthesis from stack
        }
    }

    // Pop all remaining operators in the stack
    traverse();

    return 0;
}
