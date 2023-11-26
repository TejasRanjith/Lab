#include <stdio.h>
#define MAX 50
int a[100],rear=-1,front=-1,queue[MAX];
void insert()
{
    int item;
    if (rear==MAX-1)
    {
        printf("Queue Overflow \n");
    }
    else
    {
        if (front==-1)
        {
            front++;
            printf("Insert the element in queue : ");
            scanf("%d",&item);
            queue[front]=item;
        }
        else
        {
            front++;
            printf("Insert the element in queue : ");
            scanf("%d",&item);
            queue[front]=item;
        }
    }
}
void delete()
{
    if (front==-1)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        printf("Element deleted from queue is : %d\n",queue[front]);
        front--;
    }
}
void display()
{
    int i;
    if(front == -1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Queue is : ");
        for(i=rear+1;i<=front;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

void main()
{
    int op=0;
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
            insert();
        }
        else if(op==3)
        {
            delete();
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