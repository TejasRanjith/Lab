#include <stdio.h>
void main()
{
	int a[100],n=0,cond=0,i=0,search=0,low=0,high=0,mid=0;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
    high=n;
    printf("Enter the elements in Sorted Order --> \n");
	for(i=0;i<n;i++)
	{
		printf("Enter the Element: ");
		scanf("%d",&a[i]);
	}
    printf("Enter the Element to be searched: ");
    scanf("%d",&search);
	while(low<high)
    {
        mid=(high+low)/2;
        if (a[mid]==search)
        {
            printf("Element Found at %d.\n",mid);
            cond=1;
            break;
        }
        else if(a[mid]<search)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(cond==0)
    {
        printf("Element Not Found.\n");
    }
}
