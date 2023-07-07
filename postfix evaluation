#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int top=-1,n1,n2,n3,n;
char a[100],str[100],str1[100],c;

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
        return 0;
    }
    else if(n==3)
    {
        return 1;
    }
}

void Topostfix()
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
        else if(a[top]=='(' || c=='(' || top==-1)
        {
            push(c);
        }
        else if(c==')')
        {
            do
            {
                num=pop();
                if(num=='(')
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

float evaluate(char str1[]){
 int a,b;
 float result,temp;
 for(unsigned int i=0;i<strlen(str1);i++)
 {
  if(str1[i]<='9'&& str1[i]>='0')
   push(str1[i]-48);
  else
  {
   a=pop();
   b=pop();
   switch(str1[i])
    {
     case '+': temp=b+a;
               break;
    case '-': temp=b-a;
               break;   
    case '*': temp=b*a;
               break;
    case '/': temp=b/a;
              break;
    case '%': temp=b%a;
              break;
    case '^': temp=b^a;
              break;                                                       
    }
    push(temp);
    }
    }
    result=pop();
    return result;
  }  

void main()
{
    printf("Enter the infix expression:\n");
    scanf("%s",str);
    Topostfix();
    printf("The postfix expression is:%s\n",str1);
    printf("Result is:%f",evaluate(str1));
}
