#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *newnode,*temp,*head,*temp1;

void insertBeg(int item)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}

void insertEnd(int item)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
}

void insertAtPos(int item)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    int pos=-1,key;
    printf("Enter the position:\n");
    scanf(" %d",&key);
    temp=head;
    while(temp->next!=NULL && pos!=key)
    {
        temp1=temp;
        temp=temp->next;
        pos++;
    }
    temp1->next=newnode;
    newnode->next=temp;
}

void insertAfEle(int item)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    int key;
    printf("Enter the element after which the node to be inserted:\n");
    scanf(" %d",&key);
    temp=head;
    while(temp->next!=NULL && temp->data!=key)
    {
        temp=temp->next;
    }
     newnode->next=temp->next;
    temp->next=newnode;
   
}

void deleteBeg()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        head=head->next;
    }
}

void deleteEnd()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
    }
}

void deleteAtPos()
{
    int pos=-1,key;
    printf("Enter the position:\n");
    scanf(" %d",&key);
    temp=head;
    while(temp->next!=NULL && pos!=key)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=temp->next;
}

void search()
{
    int key,flag=0;
    printf("Enter the element to be searched:\n");
    scanf(" %d",&key);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            flag=1;
            break;
        }
        temp=temp->next;
    }
    if(flag==1)
    {
        printf("Item found");
    }
    else
    {
        printf("Item not found");
    }
}

void traverse()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}

void main()
{
    int item,ch;
    do
    {
        printf("\nLINKED LIST OPERATIONS\n1.INSERTION AT BEGINNING\n2.INSERTION AT END\n3.INSERTION AT POSITION\n4.INSERTION AFTER AN ELEMENT\n5.DELETION AT BEGINNING\n6.DELETION AT END\n7.DELETION AT A PARTICULAR POSITION\n8.SEARCHING\n9.TRAVERSING\n10.EXIT\n");
        printf("Enter your choice:");
        scanf(" %d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the element to be inserted:\n");
            scanf(" %d",&item);
            insertBeg(item);
            break;
            
            case 2:
            printf("Enter the element to be inserted:\n");
            scanf(" %d",&item);
            insertEnd(item);
            break;
            
            case 3:
            printf("Enter the element to be inserted:\n");
            scanf(" %d",&item);
            insertAtPos(item);
            break;
            
            case 4:
            printf("Enter the element to be inserted:\n");
            scanf(" %d",&item);
            insertAfEle(item);
            break;
            
            case 5:
            deleteBeg();
            break;
            
            case 6:
            deleteEnd();
            break;
            
            case 7:
            deleteAtPos();
            break;
            
            case 8:
            search();
            break;
            
            case 9:
            traverse();
            break;
            
            case 10:
            exit(0);
            
            default:
            printf("INVALID CHOICE");
        }
    }
    
    while(1);
}

