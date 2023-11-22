#include <stdio.h>
#include <stdlib.h>
char compare();
void Insertf();
void Inserta();
void Insertb();
void display();
void displayf();
struct poly 
{
	int coefficient;
	int exp;
	struct poly *address;
}*starta=NULL,*a,*b,*temp,*ptr,*startb=NULL,*startf=NULL;
int count = 0;
void main()
{
	int num1,co1,exp1,i,num2;
	printf("Enter the number of terms of the polynomial:\n");
	scanf("%d",&num1);
	for(i=0;i<num1;i++)
	{
		Inserta();
	}
	printf("Enter the number of terms of the Second Polynomial:\n");
	scanf("%d",&num2);
	for(i=0;i<num2;i++)
	{
		Insertb();
	}
	a=starta,b=startb;
	while(a!=NULL && b!=NULL)
	{
		switch(compare(a->exp,b->exp))
		{
			case '=':
			{
				int sum=a->coefficient+b->coefficient;
				if(sum!=0)
				{
					Insertf(sum,a->exp);
					a=a->address;
					b=b->address;
				}
				break;
			}
			case '<':
			{
				Insertf(b->coefficient,b->exp);
				b=b->address;
				break;
			}
			case '>':
			{
				Insertf(a->coefficient,a->exp);
				a=a->address;
				break;
			}
		}
	}
	while(a!=NULL)
	{
		Insertf(a->coefficient,a->exp);
		a=a->address;
	}
	while(b!=NULL)
	{
		Insertf(b->coefficient,b->exp);
		b=b->address;
	}
	display(num1,num2);
	displayf();
}
void Inserta()
{
	int co,exp;
	printf("Enter the coefficient : \n");
	scanf("%d",&co);
	printf("Enter the exponent : \n");
	scanf("%d",&exp);
	ptr=(struct poly*)malloc(sizeof(struct poly));
	if(ptr == NULL)
	{
		printf("Overflow Error!!\n");
		exit(0);
	}
	ptr->coeffecient=co;
	ptr->exp=exp;
	if(starta==NULL)
	{
		ptr->address=starta;
		starta=ptr;
	}
	else
	{
		temp=starta;
		while(temp->address!=NULL)
		{
			temp=temp->address;
		}
	}
}