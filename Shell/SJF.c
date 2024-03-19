#include <stdio.h>
#include <conio.h>
int p[30],bt[30],tot_tat=0,wt[30],n,tot_wt=0,SJF_wt=0,SJF_tat=0,tat[30];
float awt,avg_tat,avg_wt;
void main()
{
	int i;
	//clrscr();
	printf("\n Enter the no of processes \n");
	scanf("%d",&n);
	printf("Enter burst time for each process\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		p[i]=i;
	}
	sort();
	WT_TAT(&SJF_tat,&SJF_wt);
	printf("\n\nTotal Turn Around Time : %d",SJF_tat);
	printf("\n Avarage Turn Around Time : %d",SJF_tat/n);
	printf("\n Total Waiting Time : %d",SJF_wt);
	printf("Total avg. Waiting Time : %d",SJF_wt/n);
}
int sort()
{
	int t,i,j;
	for(i=0;i<n;i++)
	{
		
	}

}