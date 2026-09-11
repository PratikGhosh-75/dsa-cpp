#include<stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push()
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow!!");
        return;
    }
    int value;
    printf("Enter the value: \n");
    scanf("%d",&value);
    stack[++top] = value;
    printf("%d is pushed into the stack successfully!!\n",value);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!!");
        return;
    }
    printf("%d is popped from the stack!!\n",stack[top--]);
}

void peek()
{
    if (top == -1)
    {
        printf("The stack is empty!!");
        return;
    }
    printf("%d is the topmost element in the stack\n",stack[top]);
}

void display()
{
    if (top == -1)
    {
        printf("The stack is empty!!");
        return;
    }
    printf("The elements in the stack are:\n");
    for(int i=top; i>=0; i--)
    {
        printf("%d\n",stack[i]);
    }
}

int main()
{
    while(1)
    {
        printf("\n---Enter 1 for stack push---\n");
        printf("---Enter 2 for stack pop---\n");
        printf("---Enter 3 for stack peek---\n");
        printf("---Enter 4 for stack display---\n");
        printf("---Enter 5 for exit---\n");
        printf("---!!!Enter your choice!!!---\n");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting the program...");
                return 0;
            default:
                printf("!!Enter a valid input!!");
        }
    }
}