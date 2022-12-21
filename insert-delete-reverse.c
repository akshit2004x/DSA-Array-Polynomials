#include<stdio.h>
int traversal(int arr[])
{
	int i;
	//int size=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<4;i++)
	{
		printf("%d ",arr[i]);
	}
}
int creation(int arr[],int n)
{
	int i;
	printf("enter elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int insertion(int arr[],int index,int n)
{
	int a,i;
	printf("enter the element you want to insert");
	scanf("%d",&a);
	for(i=n-1;i>=index;i--)
	{
		arr[i+1]=arr[i];		
	} 
	arr[index]=a;
	for(i=0;i<4;i++)
	{
		printf("%d ",arr[i]);
	}
} 
int deletion(int arr[],int index,int n)
{
	int i;
	for(i=n-1;i>=index;i--)
	{
		int temp;
		temp=arr[i-1];
		arr[i-1]=arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
}
int search(int arr[],int ab,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ab)
		{
			printf("element is present at %d index",i);
		}
	}
}
int updation(int arr[],int index,int n)
{
	int a,i;
	printf("enter the element you want to update");
	scanf("%d",&a);
	arr[index]=a;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int sorting(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf(".............");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int reversing(int arr[],int n)
{
	int temp,i,j;
	for(int i = 0; i<n/2; i++)
	{
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int a[100],n,j;
	printf("enter length of the array");
	scanf("%d",&n);
	creation(a,n);
//	printf("enter index of element you want to update");
	//scanf("%d",&j);
	//search(a,j,n);
	//updation(a,j,n);
	//sorting(a,n);
	reversing(a,n);
}
