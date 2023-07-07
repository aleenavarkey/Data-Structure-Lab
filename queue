#include<stdio.h>
void enqueue();
void dequeue();
void display();
int front=0,rear=0,ITEM,SIZE,a[20];
void main()
{
    int ch;
    printf("Enter the number of elements:\n");
    scanf("%d",&SIZE);
    do
    {
        printf("\nQUEUE OPERATIONS\n1.ENQUEUE\n2.DEQUEUE\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
            break;
            
            case 2:
            dequeue();
            break;
            
            default:
            printf("INVALID CHOICE");
        }
    }
    while(ch!=3);
}

void enqueue()
{
    if(rear==SIZE)
    {
        printf("QUEUE OVERFLOW");
    }
    else
    {
        if(front==0 && rear==0)
            front=1;
            rear=rear+1;
            printf("Enter the element to be inserted:\n");
            scanf("%d",&ITEM);
            a[rear]=ITEM;
            display();
    }
}

void dequeue()
{
    if(front==0)
    {
        printf("QUEUE UNDERFLOW");
    }
    else
    {
        printf("The deleted element is:%d\n",a[front]);
    }
    if(front==rear)
    {
        front=0;
        rear=0;
    }
    else
    {
        front=front+1;
    }
    display();
}

void display()
{
    if(front==0)
    {
        printf("The queue is empty");
    }
    else
    {
        printf("The queue elements are:\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\n");
    }
}
