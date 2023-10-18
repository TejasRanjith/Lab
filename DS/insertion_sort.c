void print(int a[10],int n)
{
	int i;
	printf("Sorted list is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}
void insert(int a[10],int n)
{
	int i,j,key,k;
	for(j=1;j<n;j++)
	{
		key=a[j];
		i=j-1;
		while(i>=0 && key<a[i])
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	print(a,n);
}

void main()
{
	int a[10],n,i;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter data to be inserted\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insert(a,n);
}
