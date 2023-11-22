# include <stdio.h>
# include <stdlib.h>

char compare();
void insertf();
void inserta();
void insertb();
void display();
void displayf();
struct poly
{
	int coefficient;
	int exp;
	struct poly *address;
}*starta=NULL,*a,*b,*temp,*ptr,*startb=NULL,*startf=NULL;
int count=0;
void main()
{
	int num1,co1,exp1,i,num2;

	printf("Enter the number of terms in first polynomial\n");
	scanf("%d",&num1);
	for(i=0;i<num1;i++)
	{
		inserta();
	}
	printf("Enter the number of the second polynomial\n");
	scanf("%d",&num2);
	for(i=0;i<num2;i++)
	{
		insertb();
	}
	a=starta,b=startb;
	while(a!=NULL&&b!=NULL)
	{
		switch(compare(a->exp,b->exp))
		{
			case '=':
			{
				int sum=a->coefficient+b->coefficient;
				if(sum!=0)
				{
					insertf(sum,a->exp);
					a=a->address;
					b=b->address;
				}
				break;
			}
			case '<':
			{
				insertf(b->coefficient,b->exp);
				b=b->address;
				break;
			}
			case '>':
			{
				insertf(a->coefficient,a->exp);
				a=a->address;
				break;
			}
		}  

	}
	while(a!=NULL)
	{
		insertf(a->coefficient,a->exp);
		a=a->address;
	}
	while(b!=NULL)
	{
		insertf(b->coefficient,b->exp);
		b=b->address;
	}
	display(num1,num2);
	displayf();
}

void inserta()
{	
	int co,exp;
	printf("Enter the coefficient\n");
	scanf("%d",&co);
	printf("Enter the exponent");
	scanf("%d",&exp);
	ptr=(struct poly*)malloc(sizeof(struct poly));
	if(ptr==NULL)
	{
		printf("Overflow Error!!\n");
		exit(0);
	}
	ptr->coefficient=co;
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
		temp->address=ptr;
		ptr->address=NULL;
	}
}    
void insertb()
{
	int co,exp;
	printf("Enter the coefficient\n");
	scanf("%d",&co);
	printf("Enter the exponent");
	scanf("%d",&exp);
	ptr=(struct poly*)malloc(sizeof(struct poly));
	if(ptr==NULL)
	{
		printf("Overflow Error!!\n");
		exit(0);
	}
	ptr->coefficient=co;
	ptr->exp=exp;
	if(startb==NULL)
	{
		ptr->address=startb;
		startb=ptr;
	}
	else
		{
		temp=startb;
		while(temp->address!=NULL)
		{
			temp=temp->address;
		}
		temp->address=ptr;
		ptr->address=NULL;
	}
}
void display(int num1,int num2)
{
	int i=0;
	if(starta==NULL||startb==NULL)
	{
		printf("List is Empty\n");
		exit(0);
	}
	temp=starta;
	printf("First polynomial :\n");
	while(temp!=NULL)
	{
		printf("%dx^%d",temp->coefficient,temp->exp);
		if(i!=num1-1)
		{
			printf("+ ");
			i++;
		}
		temp=temp->address;
	}
	printf("\n");
	temp=startb;
	i=0;
	printf("Second polynomial :\n");
	while(temp!=NULL)
	{
		printf("%dx^%d",temp->coefficient,temp->exp);
		if(i!=num2-1)
		{
			printf("+ ");
			i++;
		}
		temp=temp->address;
	}
	printf("\n");
}
char compare(int a, int b)
{
	if(a==b)
	return '=';
	else if (a<b)
	return '<';
	else
	return '>';
}
void insertf(int a,int b)
{
	ptr=(struct poly*)malloc(sizeof(struct poly));
	if (ptr==NULL)
	{
		printf("Overflow error");
		exit(0);
	}
	ptr->coefficient=a;
	ptr->exp=b;
	if(startf==NULL)
	{
		ptr->address=startf;
		startf=ptr;
	}
	else
	{
		temp=startf;
		while(temp->address!=NULL)
		{
			temp=temp->address;
		}
		temp->address=ptr;
		ptr->address=NULL;
	}
	count++;
}    
void displayf()
{
	int i=0;
	if (startf==NULL)
	{
		printf("List is Empty\n");
		exit(0);
	}
	temp=startf;
	printf("Resultant polynomial :\n");
	while(temp!=NULL)
	{
		printf("%dx^%d",temp->coefficient,temp->exp);
		if(i!=count-1)
		{
			printf("+ ");
			i++;
		}
		temp=temp->address;
	}
	printf("\n");
} 