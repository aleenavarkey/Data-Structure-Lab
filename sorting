#include<stdio.h>
void bubble(int a[10],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
void selection(int a[10],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
                
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
  
}
void insertion(int a[10],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
void heapify(int a[10],int n,int i)
{
    int largest,left,right,temp;
    largest=i;
    left=2*i+1;
    right=2*i+2;
    
    if(left<n && a[left]>a[largest])
    largest=left;
    
    if(right<n && a[right]>a[largest])
    largest=right;
    
    if(largest!=i)
    {
        temp=a[largest];
        a[largest]=a[i];
        a[i]=temp;
        heapify(a,n,largest);
    }
}
void heap(int a[10],int n)
{
    int i,temp;
    for(i=n/2-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
    for(i=n-1;i>=0;i--)
    {
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heapify(a,i,0);
    }
}
void merge(int a[],int low,int mid,int high)
{   
    int temp[100];
    int i=low;
    int j=mid+1;
    int k=low;

    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        { 
            temp[k]=a[i];
            k++,i++;
        }
        else
        {
            temp[k]=a[j];
            k++,j++;
        }
    }
    while(i<=mid)
    {
        temp[k]=a[i];
        k++,i++;
    }
    while(j<=high)
    {
        temp[k]=a[j];
        k++,j++;
    }
        for(i=low;i<=high;i++)
        a[i]=temp[i];
    
}
    
void mergesort(int a[10],int low,int high)
{ 
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void quicksort(int a[10],int low,int high)
{
    if(low<high)
    {
        int start=low;
        int end=high;
        int mid=(low+high)/2;
        int pivot=a[mid];
        while(start<=end)
        {
            while(a[start]<=pivot)
            {
                start++;
            }
            while(a[end]>pivot)
            {
                end--;
            }
            if(start<=end)
            {
                int temp=a[start];
                a[start]=a[end];
                a[end]=temp;
                start++;
                end--;
            }
            quicksort(a,end,high);
            quicksort(a,start,low);
        }
    }
}
void binary(int a[10],int n,int key)
{
    int beg,end,mid,flag=0;
    beg=0;
    end=n;
    while(beg>=mid)
    {
        if(key<a[mid])
        {
            end=mid-1;
        }
        else if(key>a[mid])
        {
            beg=mid+1;
        }
        else
        {
            flag=1;
            break;
        }
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
void linear(int a[10],int key,int n)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
        
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

void main()
{
    int a[10],i,j,n,choice,key;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nMENU:\n1.BUBBLE SORT\n2.SELECTION SORT\n3.INSERTION SORT\n4.HEAP SORT\n5.QUICKSORT\n6.MERGESORT\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:bubble(a,n);
        break;
        
        case 2:selection(a,n);
        break;
        
        case 3:insertion(a,n);
        break;
        
        case 4:heap(a,n);
        break;
        
        case 5:quicksort(a,0,n-1);
        break;
        
        case 6:mergesort(a,0,n-1);
        break;
        
        default:
        printf("Invalid choice");
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter a key:\n");
    scanf("%d",&key);
    printf("\nMENU\n1)BINARY SEARCH\n2)LINEAR SEARCH\n");
    printf("Enter the choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:binary(a,n,key);
        break;
        
        case 2:linear(a,n,key);
        break;
        
        default:
        printf("Invalid choice");
    }
}









