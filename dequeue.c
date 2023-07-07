#include<stdio.h>
#include<stdlib.h>
int front=0;
int rear=0;
void enquer(int a[],int size);
void dequer(int a[],int size);
void enquef(int a[],int size);
void dequef(int a[],int size);
void display(int a[],int size);

void main()
{
    int a[10],maxsize,ch,option;
    printf("enter the maxsize of array\n");
    scanf("%d",&maxsize);
    printf("1.input restricted que\n2.output restricted que\n");
    printf("select option\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        {
        do{
        printf("\nMENU \n1.enque rear\n2.deque front\n 3.deque rear\n4.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                enquer(a,maxsize);
                display(a,maxsize);
                break;
            }
            case 2:
            {
                dequef(a,maxsize);
                display(a,maxsize);
                break;
            }
            case 3:
            {
                dequer(a,maxsize);
                display(a,maxsize);
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("invalid choice\n");
            }
        }
    }
    while(ch!=4);
        }
        case 2:
        {
        do{
        printf("\nMENU \n1.enquerear\n2.dequefront\n3.enquefront\n4.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                enquer(a,maxsize);
                display(a,maxsize);
                break;
            }
            case 2:
            {
                dequef(a,maxsize);
                display(a,maxsize);
                break;
            }
            case 3:
            {
                enquef(a,maxsize);
                display(a,maxsize);
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("invalid choice\n");
            }
        }
    }
    while(ch!=4);
            
        }
}
}

void enquer(int a[],int size)
{
    int item;
    if(rear==0)
    {
        rear++;
        front++;
        printf("item is\n");
        scanf("%d",&item);
        a[rear]=item;
    }
    else if(front==(rear%size)+1)
    {
        printf("overflow\n");
    }
    else{
        rear=(rear%size)+1;
        printf("item is\n");
        scanf("%d",&item);
        a[rear]=item;
    }
}

void dequef(int a[],int size)
{
    if(front==0)
    {
        printf("underflow\n");
    }
    else if(front==rear)
    {
        printf("deleted item is %d\n",a[front]);
        front=0;
        rear=0;
        
    }
    else
    {
        printf("deleted item is %d\n",a[front]);
        front=(front%size)+1;
    }
}

void display(int a[],int size)
{
    int i;
    printf("status of que is\n");
    
    if(front==0)
    {
       printf("empty\n");
    }
    else if(front<=rear)
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    else
    {
        for(i=front;i<=size;i++)
        {
            printf("%d\t",a[i]);
        }
        for(i=1;i<=rear;i++)
        {
            printf("%d\t",a[i]);
        }
    }
}

void dequer(int a[],int size)
{
  if(rear==0)
  {
      printf("underflow\n");
      
  }
  else if(front==rear)
  {
      printf("deleted item is %d\n",a[rear]);
      rear=0;
      front=0;
  }
  else if(rear==1)
  {
      printf("deleted item is %d\n",a[rear]);
      rear=size;
      
  }
  else
  {
      printf("deleted item is %d\n",a[rear]);
      rear--;
  }
}
  
void enquef(int a[],int size)
{
  int item;
  if(front==0)
  {
      front=1;
      rear=1;
      printf("enter the item\n");
      scanf("%d",&item);
      a[front]=item;
  }
  else if(front==(rear%size)+1)
  {
      printf("overflow\n");
  }
  else if(front==1)
  {
      front=size;
      printf("enter the item\n");
      scanf("%d",&item);
      a[front]=item;
  }
  else
  {
      front--;
      printf("enter the item\n");
      scanf("%d",&item);
      a[front]=item;
  }
}


