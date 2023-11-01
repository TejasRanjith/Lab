#include <stidio.h>
#include <stdlib.h>

#define MAX 30
struct poly
{
    int coeff;
    int exp;
}term[MAX];

void polyadd(int af,int al,int bf,int bl,int free);
char compare(int a,int b);
int newterm(int a,int b,int fsize);
void main()
{
    int i,j,num1,num2,free;
    int af,al,bf,bl;
    printf("Enter the number of terms of the polynomial \n");
    scanf("%d",&num1);
    printf("Enter the coeffecients and exponents of the first polynomial\n");
    for(i=0;i<num1;i++)
    {
        scanf("%d",&term[i].coeff);
        scanf("%d",&term[i].exp);
    }
    printf("Enter the number of terms of the second polynomial \n");
    scanf("%d",&num2);
    free=(num1+num2);
    printf("Enter the coeffecients and exponents of the second polynomial \n")
    for(i=num1;i<free;i++)
    {
        scanf("%d",&term[i].coeff);
        scanf("%d",&term[i].exp);
    }
    printf("Entered polynomials are: \n");
    i=0;
    while(i<num1)
    {
        printf("%dx^%d",term[i].coeff,term[i].exp);
        i++;
        if(i==num1)
        {
            break;
        }
        printf("+");
    }
    printf("\n");
    i=num1;
    while(i<free)
    {
        printf("%dx^%d",term[i].coeff,term[i].exp);
        i++;
        if(i==free)
        {
            break;
        }
        printf("+");
    }
    printf("\n");
    af=0,al=num1-1,bf=num1,bl=free-1;
    polyadd(af,al,bf,bl,free);
}
void polyadd(int af,int al,int bf,int bl,int free)
{
    int p,i,q,e,sum=0,free1;
    free1 = free;
    p=af;
    q=bf;
    while((p<=al)&&(q<=bl))
    {
        switch(compare(term[p].coeff+term[q].coeff))
        {
            case '=':
            {
                sum=term[p].coeff + term[q].coeff;
                if(sum!=0)
                {
                    free = newterm(sum,term[p].exp,free);
                    p++;
                    q++;
                }
                
            }
        }
    }
}