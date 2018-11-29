          //GRESHMA SHAJI
          //ROLL NO:24

#include<stdio.h>
int main()
{
	int a[20],i,j,temp;
	printf("Enter size:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
			 temp=a[j];
			 a[j]=a[j+1];
			 a[j+1]=temp;
			}
		}
	}
	printf("The sorted array is:");
	for(j=0;j<n;j++)
		printf("%d",a[j]);
	return 0;
	
}
output:
  Enter the size of the array: 2 
enter the elements: 2 3
array after sorting: 2 3
