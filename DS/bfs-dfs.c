#include <stdio.h>

int q[20],top=-1,front=-1,rear=-1,a[20][20],vis[20],stack[20];
int delete();
void add(int item);
void bfs(int s,int n);
void dfs(int s,int n);
void push(int item);
int pop();

void main()
{
    int n,i,s,ch,j;
    char c,dummy;
    printf("Enter the number of Vertices : ")
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Adjacency Matrix is\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    do
    {
        for(i=1;i<=n;i++)
        {
            vis[i]=0;
        }
        printf("\nMENU");
        printf("\n1. BFS");
        printf("\n2. DFS");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        printf("Enter the Source Vertex : ");
        scanf("%d",&s);
        
        switch(ch)
        {
            case 1:bfs(s,n);
            break;
            case 2:dfs(s,n);
            break;
        }
        printf("Do you want to continue(Y/N) ?");
        scanf("%c",&dummy);
        scanf("%c",&c);
    }
    while((c=='y')||(c=='Y'));
}