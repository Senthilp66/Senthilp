#include <stdio.h>
#include <stdlib.h>
#define bool int

struct Node {
    char data;
    struct Node* next;
};

void push(struct Node** top, int new_data);

int pop(struct Node** top);

bool isMatchingPair(char character1, char character2)
{
    if (character1 == '(' && character2 == ')')
        return 1;
    else if (character1 == '{' && character2 == '}')
        return 1;
    else if (character1 == '[' && character2 == ']')
        return 1;
    else
        return 0;
}

bool areBracketsBalanced(char exp[])
{
    int i = 0;

    struct Node* stack = NULL;

    while (exp[i]) 
    {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
            push(&stack, exp[i]);

        if (exp[i] == '}' || exp[i] == ')'
            || exp[i] == ']') {

            if (stack == NULL)
                return 0;

            else if (!isMatchingPair(pop(&stack), exp[i]))
                return 0;
        }
        i++;
    }

    if (stack == NULL)
        return 1; // balanced
    else
        return 0; // not balanced
}

int main()
{
    char exp[100] = "{{()}{[]()}}";

    if (areBracketsBalanced(exp))
        printf("Balanced \n");
    else
        printf("Not Balanced \n");
    return 0;
}

void push(struct Node** top, int new_data)
{
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));

    if (new_node == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }

    new_node->data = new_data;

    new_node->next = (*top);

    (*top) = new_node;
}

int pop(struct Node** top)
{
    char res;
    struct Node* new;

    if (*top == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
    else {
        new = *top;
        res = new->data;
        *top = new->next;
        free(new);
        return res;
    }
}