#include<stdio.h>
void push();
void pop();
void display();
int top=-1,ITEM,SIZE,a[20];
void main()
{
    int ch;
    printf("Enter the number of elements:\n");
    scanf("%d",&SIZE);
    do
    {
        printf("\nSTACK OPERATIONS\n1.PUSH\n2.POP\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;
            
            case 2:
            pop();
            break;
            
            default:
            printf("Invalid choice");
        }
    }
    while(ch!=3);
}

void push()
{
    if(top<SIZE-1)
    {
        printf("Enter the element to be pushed:\n");
        scanf("%d",&ITEM);
        top++;
        a[top]=ITEM;
        display();
    }
    else
    {
        printf("STACK OVERFLOW");
    }
}

void pop()
{
    if(top==-1)
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
        ITEM=a[top];
        top--;
        printf("The popped element is:\n");
        printf("%d\n",ITEM);
        display();
    }
}

void display()
{
    printf("The stack elements are:\n");
    if(top!=-1)
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\t",a[i]);
        }
    }
    printf("\n");
}
