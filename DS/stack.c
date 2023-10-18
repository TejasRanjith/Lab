#include <stdio.h>
void display(int a[100])
{
    for(i=0;i<n;i++)
    {
        printf("%d | ",a[i]);
    }
}
void remove_opt()
{
    printf("HIHIHI");
}
void add()
{
    printf("HIHIHI");
}

void main()
{
	int a[100],n=0,op=0;
    while(1==1)
    {
        printf("Enter the option : ");
        scanf("%d",&op);
        if(op==1)
        {
            a={1,2,3,4,5};
            display(a);
        }
        else if(op==2)
        {
            add();
        }
        else if(op==3)
        {
            remove_opt();
        }
        else if(op==4)
        {
            printf("Thank you for using the Program :)");
            break;
        }
    }
}
