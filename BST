#include <stdio.h>
#include <stdlib.h>
int flag=0;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL, *newnode, *parent, *ptr, *current;

void insert(int key)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->left = NULL;
    newnode->right = NULL;

    if (root == NULL)
        root = newnode;
    else
    {
        ptr = root;
        while (ptr != NULL)
        {
            parent = ptr;
            if (key < ptr->data)
                ptr = ptr->left;
            else
                ptr = ptr->right;
        }
        if (key < parent->data)
            parent->left = newnode;
        else
            parent->right = newnode;
    }
}

struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
        current = current->left;
   return current;
}
struct node *delete(struct node *root, int key)
{
    if (root == NULL)
       printf("Tree is empty\n");
    if (key < root->data)
        root->left = delete(root->left, key);
    else if (key > root->data)
        root->right = delete(root->right, key);
    else
    {
        flag=1; 
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }  
return root;
  }

void search(int key)
{
 int flag=0;
 if (root == NULL)
     printf("Tree is empty\n");
 else
    {
        ptr = root;
        while ( ptr!=NULL )
        {
            if (key < ptr->data)
                ptr = ptr->left;
            else if(key > ptr->data)
                ptr = ptr->right;
            else
               {
               flag=1;
               break;
               }
        }
        if(flag)
          printf("Node Exist\n");
        else
          printf("Node Does not Exist\n");        
  }
 }


void preorderTraversal(struct node *ptr)
{
    if (ptr == NULL)
        return;
    printf("%d ", ptr->data);
    preorderTraversal(ptr->left);
    preorderTraversal(ptr->right);
}

void inorderTraversal(struct node *ptr)
{
    if (ptr == NULL)
        return;
    inorderTraversal(ptr->left);
    printf("%d ", ptr->data);
    inorderTraversal(ptr->right);
}

void postorderTraversal(struct node *ptr)
{
    if (ptr == NULL)
       return;
    postorderTraversal(ptr->left);
    postorderTraversal(ptr->right);
    printf("%d ", ptr->data);
}

void main()
{
    int ch,key;
    printf("\nEnter Elements you wish to add(-1 to stop)\n");
    for(int i=0;key!=-1;i++)
    { 
      if(key>0)
      scanf("%d", &key);
      insert(key);
    }    
    root=delete(root,-1);    
    printf("\nMAIN MENU");
    printf("\n1)  Insertion\n2)  Deletion\n3)  Searching\n4)  Traversal\n5) Exit\n");
    do
    {
        printf("\nEnter your choice--> ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter The Value you want to Add-->");
            scanf("%d", &key);
            insert(key);
            break;
        case 2:
            printf("\nEnter the value You want to delete-->");
            scanf("%d", &key);
            root=delete(root,key);
            if(flag)
 	    printf("%d is Deleted!!!\n",key);
            break;
        case 3: 
            printf("\nEnter the value You want to Search-->");
            scanf("%d", &key);
            search(key);
            break;
        case 4:
            printf("\nPreOrder Traversal -->");
            preorderTraversal(root);
            printf("\nInOrder Traversal  -->");
            inorderTraversal(root);
            printf("\nPostOrder Traversal-->");
            postorderTraversal(root);
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice\n");
            break;
        }
    } while (1);
}
