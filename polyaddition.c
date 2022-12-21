#include<stdio.h>
struct poly
{
    int coeff;
    int expo;
};
int main()
{
    int i,j,n,m,k=0,l=0;
    struct poly p1[10],p2[10],a[10];
    printf("enter no. of terms in polynomial 1\n");
    scanf("%d",&n);
    printf("enter no. of terms in polynomial 2\n");
    scanf("%d",&m);
    printf("POLYNOMIAL 1\n");
    for(i=0;i<n;i++)
    {
        printf("Enter x^%d Co-Efficient of Polynomial 1\n",i);
        scanf("%d",&p1[i].coeff);
        p1[k++].expo = i;
    }
    printf("POLYNOMIAL 2\n");
    for(i=0;i<m;i++)
    {
        printf("Enter x^%d Co-Efficient of Polynomial 2\n",i);
        scanf("%d",&p2[i].coeff);
        p2[l++].expo = i;
    }
    for(i=0;i<n;i++)
    {
        a[i].coeff=p1[i].coeff+p2[i].coeff;
        a[i].expo=p1[i].expo;
    }
    printf("%dx^%d ",a[0].coeff,a[0].expo);
    for(i=1;i<n;i++)
    {
        printf("+ %dx^%d ",a[i].coeff,a[i].expo);
    }
    return 0;
}