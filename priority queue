#include<stdio.h>
#include<stdlib.h>
struct class{
            int val;
            int prio;
}a[10];
int rear=0;
int front=0;
void enque(int size);
void deque(int size);
void display(int size);
void swapa(int size);
void swapd(int size);



void main()
{
    int  ch,choice,maxsize;
    printf("enter the size of que\n");
    scanf("%d",&maxsize);
    printf("\nmenu\n1.ascending que\n2.descending\n");
    printf("enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            do{
                printf("\nmenu\n1.enque\n2.deque\n3.exit\n");
                printf("enter the choice\n");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1:
                    {
                        enque(maxsize);
                        swapa(maxsize);
                        display(maxsize);
                        break;
                    }
                    case 2:
                    {
                        deque(maxsize);
                       
                        display(maxsize);
                        break;
                    }
                    case 3:
                    {
                        exit(0);
                    }
                    default:
                    {
                        printf("choice not found\n");
                    }
                }
            }
            while(ch!=3);
        }
        case 2:
        {
            do{
                printf("\nmenu\n1.enque\n2.deque\n3.exit\n");
                printf("enter the choice\n");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1:
                    {
                        enque(maxsize);
                        swapd(maxsize);
                        display(maxsize);
                        break;
                    }
                    case 2:
                    {
                        deque(maxsize);
                       
                        display(maxsize);
                        break;
                    }
                    case 3:
                    {
                        exit(0);
                    }
                    default:
                    {
                        printf("choice not found\n");
                    }
                }
            }
            while(ch!=3);
            
        }
    }
}



void enque(int size)
{
   int item , pr;
   if(rear==0)
   {
       front++;
       rear++;
       printf("enter item\n");
       scanf("%d",&item);
       a[rear].val=item;
       printf("enter priority\n");
       scanf("%d",&pr);
       a[rear].prio=pr;
       
   }
   else if(rear==size)
   {
       printf("overflow\n");
       
   }
   else{
       rear++;
       printf("enter item\n");
       scanf("%d",&item);
       a[rear].val=item;
       printf("enter priority\n");
       scanf("%d",&pr);
       a[rear].prio=pr;
       
   }
   
    
}
void deque(int size)
{
    if(front==0)
    {
        printf("underflow\n");
    }
    else if(front==rear)
    {
        printf("deleted item is %d",a[front].val);
        front=0;
        rear=0;
    }
    else
    {
        printf("deleted item is %d",a[front].val);
        front++;
    }
}
void swapa(int size)
{
    int i,j;
    struct class temp;
    int min;
    
    for(i=front;i<rear;i++)
    {
        min=i;
        for(j=i+1;j<=rear;j++)
        {
            if(a[min].prio>a[j].prio)
            {
                min=j;
            }
        }
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
    }
}

void swapd(int size)
{
    int i,j;
    struct class temp;
    int max;
    
    for(i=front;i<rear;i++)
    {
        max=i;
        for(j=i+1;j<=rear;j++)
        {
            if(a[max].prio<a[j].prio)
            {
                max=j;
            }
        }
            temp=a[max];
            a[max]=a[i];
            a[i]=temp;
    }
}

void display(int size)
{
    int i;
    printf("\nstatus of que is\n");
    if(rear==0)
    {
        printf("que is empty\n");
    }
    else 
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",a[i].val);
        }
    } }


