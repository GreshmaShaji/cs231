        //GRESHMA SHAJI
        //ROLL NO:24

#include<stdio.h>
void quicksort(int num[25],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot = first;
		i = first;
		j = last;
		while(i<j){
			while(num[i]<=num[pivot] &&i<last)
				i++;
			while(num[j]>num[pivot])
				j--;
			if(i<j)
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	temp = num[pivot];
	num[pivot] = num[j];
	num[j] = temp;
	quicksort(num,first,j-1);
	quicksort(num,j+1,last);
	}
}
int main()
{
	int i,count,num[25];
	printf("How many elements?");
	scanf("%d",&count);
	printf("Enter %d elements:",count);
	for(i=0;i<count;i++)
		scanf("%d",&num[i]);
	quicksort(num,0,count-1);
	printf("ORDERED:");
	for(i=0;i<count;i++)
		printf("%d",num[i]);
	return 0;
}
output:

Enter the number of elements : 2
Enter element 1 :6
Enter element 2 :3
Unsorted list is : 6 3
Size=1 
Elements are : 3 6 Sorted list is :
3 6
