#include <stdio.h>
int a[100],n=0,top=-1,op=0;
void display()
{
	printf("| ");
    for(int i=0;i<n;i++)
    {
        printf("%d | ",a[i]);
    }
    printf("\n");
}
void pop()
{
    if(top>-1)
    {
	printf("The Element Removed is : %d\n",a[top]);
    a[top]=0;
    top--;
    }
    else
    {
        printf("\nThe Stack is Empty\n");
        display();
    }
}
void add()
{
    top++;
	if (top<n)
	{
		int elem;
		printf("Enter the element : ");
		scanf("%d",&elem);
		a[top]=elem;
	}
	else
	{
		printf("\nStack Full !!! \n");
        top--;
	}
}
void initialization()
{
    printf("Enter the size of the stack : ");
    scanf("%d",&n);
    display();
}
void main()
{
    initialization();
    while(1==1)
    {
        printf("\nOptions Available:\n1.display\n2.push\n3.pop\n4.exit\n");
        printf("Enter the option : ");
        scanf("%d",&op);
        if(op==1)
        {
            display();
        }
        else if(op==2)
        {
            add();
        }
        else if(op==3)
        {
            pop();
        }
        else if(op==4)
        {
            printf("Thank you for using the Program :)\n");
            break;
        }
        else
        {
            printf("Invalid Option\n");
        }
    }
}
