#include <stdio.h>
#define MAX_SIZE 100

int front = -1;
int rear = -1;
int queue[MAX_SIZE];

void enqueue(int element) {
  if (rear == MAX_SIZE - 1) {
    printf("Queue is full\n");
    return;
  }
  else if (front==-1 && rear==-1)
  {
    rear++;
    queue[rear] = element;
    front++;
  }
  queue[rear] = element;
  front++;
}

void dequeue() {
  if (front == rear) {
    printf("Queue is empty\n");
    // return -1;
  }
  front--;
//   return queue[front];
}

void display()
{
    for(int i=0;i<=front+2;i++)
    {
        printf("%d,%d\n",i,queue[i]);
    }
}

int some() {
  enqueue(1);
  enqueue(2);
  enqueue(3);
  display();

  return 0;
}

void main()
{
    int ch,n,iterator=0,a=0;
    while (1==1)
    {
        iterator++;
        printf("Enter choice: ");
        scanf("%d",&ch);
        if (ch == 1) display();
        else if (ch==2)
        {
            printf("Enter the number to be added : ");
            scanf("%d",&n);
            enqueue(n);
        }
        else if (ch==3) dequeue();
        else if (ch==4) break;
    }
    printf("--------------- ANALYSIS ----------------");
    for (a=0;a<=iterator;a++)
    {
        printf("%d\n",queue[a]);
    }
}