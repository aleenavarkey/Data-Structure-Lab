#include<stdio.h>
#include<stdlib.h>
int rear=-1,front=-1,a[10],MAXSIZE;

void display()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty");
    }
    else
    {
       printf("The queue elements are:\n");
    int count=((rear-front+MAXSIZE)%MAXSIZE)+1;
    for(int i=0;i<count;i++)
    {
        printf("%d\t",a[(front+i)%MAXSIZE]);
    }
    printf("\n");
}
}

void enqueue(int item)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        a[rear]=item;
    }
    else if((rear+1)%MAXSIZE==front)
    {
        printf("QUEUE OVERFLOW");
    }
    else
    {
        rear=(rear+1)%MAXSIZE;
        a[rear]=item;
    }
    display();
}

void dequeue()
{
    int item;
    if(front==-1 && rear==-1)
    {
        printf("QUEUE UNDERFLOW");
    }
    else if(front==rear)
    {
        printf("The deleted item is:%d\t",a[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("The deleted item is:%d\t",a[front]);
        front=(front+1)%MAXSIZE;
    }
    display();
}

void main()
{
    int ch,item;
    printf("Enter the number of elements:\n");
    scanf("%d",&MAXSIZE);
    do
    {
        printf("\nCIRCULAR QUEUE\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the element to be inserted:\n");
            scanf("%d",&item);
            enqueue(item);
            break;
            
            case 2:
            dequeue();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(0);
            
            default:
            printf("INVALID CHOICE");
        }
    }
    while(1);
}



