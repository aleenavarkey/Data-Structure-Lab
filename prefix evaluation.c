#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int top=-1,n1,n2,n3,n;
char a[100],str[100],str1[100],str2[100],str3[100],c;

void push(char item)
{
    top++;
    a[top]=item;
}

char pop()
{
    int item;
    item=a[top];
    top--;
    return item;
}

int precedence(char c1)
{
    if(c1=='^')
        return 3;
    if(c1=='*' || c1=='/' || c1=='%')
        return 2;
    else if(c1=='+' || c1=='-')
        return 1;
    else
        return -1;
}

int associ(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else if(n==3)
    {
        return 0;
    }
}

void rev(char str2[],char str[])
{
    for(int i=0,length=strlen(str2);i<length;i++)
    {
        str[length-i-1]=str2[i];
    }
}

void Toprefix()
{
    int num;
    for(int i=0,k=0;i<=strlen(str);i++)
    {
        c=str[i];
        if(isalnum(c))
        {
            str1[k]=c;
            k++;
        }
        else if(a[top]==')' || c==')' || top==-1)
        {
            push(c);
        }
        else if(c=='(')
        {
            do
            {
                num=pop();
                if(num==')')
                break;
                else
                {
                    str1[k]=num;
                    k++;
                }
            }
            while(1);
        }
        else if(c=='\0')
        {
            while(top!=-1)
            {
                str1[k]=pop();
                k++;
            }
            break;
        }
        else if(precedence(c)>precedence(a[top]))
        {
            push(c);
        }
        else if(precedence(c)<precedence(a[top]))
        {
            str1[k]=pop();
            k++;
            i--;
        }
        else if(precedence(c)==precedence(a[top]))
        {
            if(associ(precedence(c))==1)
            push(c);
        
            if(associ(precedence(c))==0)
            {
                str1[k]=pop();
                k++;
                push(c);
            }
        }
    }
}

void main()
{
    printf("Enter the infix expression:\n");
    scanf("%s",str2);
    rev(str2,str);
    Toprefix();
    rev(str1,str3);
    printf("The prefix expression is:%s\n",str3);
}
