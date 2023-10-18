#include <stdio.h>
void main()
{
	int a[100],n=0,min=0,i=0,j=0,t=0;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Element: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
