#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	printf("enter the size of array1:");
	scanf("%d",&n1);
	int arr1[n1];
	printf("enter the elements ");
	for( i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter the size of array2:");
	scanf("%d",&n2);
	int arr2[n2];
	printf("enter the elements");
	for( i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int arr3[n1+n2];
	i=0;
	j=0;
	int ind=0;
	while (i<=n1 && j<=n2)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[ind]=arr1[i];
			i=i+1;
		}
		else
		{
			arr3[ind]=arr2[j];
			j=j+1;
		}
		ind=ind+1;
	}
	printf("the array formed is: ");
	for(i=0;i<(n1+n2);i++)
	{
		printf("%d",arr3[i]);
	}
	printf("\n");
	return main();
}
