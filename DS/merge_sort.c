#include <stdio.h>
int n,a[100], b[100];
void MergeSort(int l, int u)
{
    if (l < u)
    {
        int mid = (l + u) / 2;
        MergeSort(l, mid);
        MergeSort(mid + 1, u);
        merge(l, mid, u);
    }
}
void merge(int l, int mid, int u)
{
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= u)
	{
		if (a[i] <= a[j])
		{
			b[k] = a[i];
            i++;
		}
		else
		{
			b[k] = a[j];
            j++;
		}
		k++;
	}
    while (j <= u)
	{
    	b[k] = a[j];
        j++;
        k++;
	}
    while (i <= mid)
	{
        b[k] = a[i];
        i++;
        k++;
	}
    for (i = l; i <= u; i++)
	{
		a[i] = b[i];
	}
}
int main()
{
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    MergeSort(0, n-1);
    printf("Sorted array is: ");
    for (int i = 0; i < n; i++)
	{
        printf("%d  ", a[i]);
	}
	
    return 0;
  }
