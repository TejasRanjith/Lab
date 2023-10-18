#include <stdio.h>
void main()
{
	int a[100],n=0,c=1,i=0,j=0,t=0,search=0;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Element: ");
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if (a[i]==search)
		{
			c=0;
			j=i+1;
		}
	}	
	if(c==0)
	{
		printf("Element found at %d position.\n",j);
	}
	else
	{
		printf("Element not found.\n");
	}
	
}
