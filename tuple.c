#include <stdio.h>
#include <stdlib.h>
void read(int arr[][10], int m, int n) 
{
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", & arr[i][j]);}
        }
    }
    void display(int arr[][10], int m, int n)
    {
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                printf("%d\t", arr[i][j]);
                
            }
            printf("\n");
        }
    }
    int tuple(int a[][10], int a1[][10], int m, int n)
    {
        int k = 1;
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (a[i][j] != 0) 
                {
                    a1[k][0] = i;
                    a1[k][1] = j;
                    a1[k][2] = a[i][j];
                    k++;
                    
                }
            }
        }
        a1[0][0] = m;
        a1[0][1] = n;
        a1[0][2] = k - 1;
        return k;
    }
    void transpose(int a[][10], int count, int n)
    {
        for (int k = 0; k < count; k++) 
        {
            for (int i = 1; i < count; i++) 
            {
                if (a[i][1] == k)
                {
                    printf("%d\t%d\t%d\n", a[i][1], a[i][0], a[i][2]);
                    
                }
            }
        }
        printf("%d\t%d\t%d\n", a[0][1], a[0][0], a[0][2]);
    }
    int sumt(int a1[][10],int a2[][10],int a3[][10],int count1,int count2)
    {
        int k=1,f=1,i=0;
        while(i<(count1+count2) )
        {
            if (k>=count1 && f>=count2)
            {
                return i;
                break;
                
            }
            else if (k>=count1) 
            {
                a3[i][0]=a2[f][0];
                a3[i][1]=a2[f][1];
                a3[i][2]=a2[f][2];
                f++;
                
            }
            else if(f>=count2)
            {
                a3[i][0]=a1[k][0];
                a3[i][1]=a1[k][1];
                a3[i][2]=a1[k][2];
                k++; 
                
            }
            else if(a1[k][0]==a2[f][0] && a1[k][1]==a2[f][1] )
            {
                a3[i][0]=a1[k][0];
                a3[i][1]=a1[k][1];a3[i][2]=a1[k][2]+a2[f][2];
                k++;
                f++;
                
            }
            else if(a1[k][0]==a2[f][0] && a1[k][1]!=a2[f][1])
            {
                if(a1[k][1]<a2[f][1])
                {
                    a3[i][0]=a1[k][0];
                    a3[i][1]=a1[k][1];
                    a3[i][2]=a1[k][2];
                    k++;
                    
                }
                else
                {
                    a3[i][0]=a2[f][0];
                    a3[i][1]=a2[f][1];
                    a3[i][2]=a2[f][2];
                    f++;
                    
                }
            }
            else if(a1[k][0]!=a2[f][0])
            {
                if(a1[k][0]<a2[f][0])
                {
                    a3[i][0]=a1[k][0];
                    a3[i][1]=a1[k][1];
                    a3[i][2]=a1[k][2];
                    k++;
                    
                }
                else
                {
                a3[i][0]=a2[f][0];
                a3[i][1]=a2[f][1];
                a3[i][2]=a2[f][2];
                f++;
                    
                }
            }
            i++;
        }
    }
    void main() 
    {
        int m1, n1, m2, n2, a[100][10], a1[100][10], a2[100][10], a3[100][10], a4[100][10], a5[100][10],
        a6[100][10], a7[100][10];
        printf("Enter the row and column count of first matrix:\n");
        scanf("%d%d", & m1, & n1);
        read(a, m1, n1);
        printf("NORMAL FORM:\n");
        display(a, m1, n1);
        printf("TUPLE FORM:\n");
        int count = tuple(a, a1, m1, n1);
        display(a1, count, 3);
        printf("TRANSPOSE:\n");
        transpose(a1, count, m1);
        printf("Enter the row and column count of second matrix:\n");
        scanf("%d%d", & m2, & n2);
        read(a2, m2, n2);
        printf("NORMAL FORM:\n");
        display(a2, m2, n2);
        printf("TUPLE FORM:\n");
        int count2 = tuple(a2, a3, m2, n2);
        display(a3, count2, 3);
        printf("TRANSPOSE:\n");
        transpose(a3, count, m2);
        if (m1 != m2 || n1 != n2) {
        printf("MATRIX ADDITION NOT POSSIBLE\n");
        exit(0);}
        printf("SUM IN TUPLE FORM\n");
        int count3 = sumt(a1, a3, a7, count, count2);
        display(a7, count3, 3);
    }

