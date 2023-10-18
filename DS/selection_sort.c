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
		min=i;
		for(j=i+1;j<n;j++)
		{
			if (a[min]>a[j])
			{
				min=j;
			}
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
