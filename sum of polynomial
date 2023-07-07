#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int coeff;
	int pow;
	struct Node* next;
};

void readPolynomial(struct Node** poly)
{
	int coeff, exp;
	char ch;
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	*poly = temp;
	do{
		printf("\n Coeffecient: ");
		scanf("%d", &coeff);
		printf("\n Exponent: ");
		scanf("%d", &exp);
		temp->coeff = coeff;
		temp->pow = exp;
		temp-> next = NULL;
		printf("\nDo you wish to add more terms?? -->");
		scanf(" %c", &ch);
		if(ch=='y'||ch=='Y')
		{
			temp->next = (struct Node*)malloc(sizeof(struct Node));
			temp = temp->next;
			temp->next = NULL;
		}
	}while(ch=='y'||ch=='Y');	
}

void displayPolynomial(struct Node* poly)
{
	while(poly != NULL)
	{
		printf("%dX^%d", poly->coeff, poly->pow);
		poly = poly->next;
		if(poly != NULL)
			printf("+");
	}
	printf("\n");
}

void addPolynomials(struct Node** result, struct Node* first, struct Node* second)
{
 	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 	temp->next = NULL;
 	*result = temp;
 	while(first && second)
 	{
 		if(first->pow > second->pow)
 		{
 			temp->coeff = first->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 		}
 		else if(first->pow < second->pow)
 		{
 			temp->coeff = second->coeff;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 		else
 		{
 			temp->coeff = first->coeff + second->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 			second = second->next;
 		}

 		if(first && second)
 		{
 			temp->next = (struct Node*)malloc(sizeof(struct Node));
 			temp = temp->next;
 			temp->next = NULL;
 		}
 	}
 	while(first || second)
 	{
 		temp->next = (struct Node*)malloc(sizeof(struct Node));
 		temp = temp->next;
 		temp->next = NULL;
 			
 		if(first)
 		{
 			temp->coeff = first->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 		}

 		else if(second)
 		{
 			temp->coeff = second->coeff;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 	}
}

void main()
{

	struct Node* first = NULL;
	struct Node* second = NULL;
	struct Node* result = NULL;

	printf("\nEnter the corresponding data:-\n");
	printf("\nFirst polynomial:\n");
	readPolynomial(&first);
	printf("\n\nSecond polynomial:\n");
	readPolynomial(&second);
	addPolynomials(&result, first, second);
	printf("\nPolynomial 1 expression is: ");
	displayPolynomial(first);
	printf("Polynomial 2 expression is: ");
	displayPolynomial(second);
	printf("\nSum Polynomial expression is: ");
	displayPolynomial(result);
}
