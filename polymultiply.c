#include<stdio.h>
int main()
{
    int i,j,n,m,k=0,l=0;
    int p1[10],p2[10],prod[100];
    printf("enter no. of terms in polynomial 1\n");
    scanf("%d",&n);
    printf("enter no. of terms in polynomial 2\n");
    scanf("%d",&m);
    printf("POLYNOMIAL 1\n");
    for(i=0;i<n;i++)
    {
        printf("Enter x^%d Co-Efficient of Polynomial 1\n",i);
        scanf("%d",&p1[i]);
    }
    printf("POLYNOMIAL 2\n");
    for(i=0;i<m;i++)
    {
        printf("Enter x^%d Co-Efficient of Polynomial 2\n",i);
        scanf("%d",&p2[i]);
    }
    for(i=0;i<m+n-1;i++)
    {
        prod[i]=0;
    }
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
            prod[i+j]= prod[i+j]+p1[i]*p2[j];
    }
    printf("%dx^0 ",prod[0]);
    for(i=1;i<m+n-1;i++)
    {
        printf("+ %dx^%d ",prod[i],i);
    }
    return 0;
}