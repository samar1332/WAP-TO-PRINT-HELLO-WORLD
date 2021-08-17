#include<stdio.h>
void main()
{
	int i,first,middle,last,second,n,search,ar[1000];
	printf("Enter Number Of Element ::");
	scanf("%d",&n);
	printf("Enter %d integer",n);
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	printf("Enter Value To Find :: ");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
    while(first<=last)
	{
		if(ar[middle]<search)
		first=middle+1;
		else if(ar[middle]==search)
		{
			printf("%d found at location %d",search,middle+1);
			break;
		}
		else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	printf("Not Fond %d is not present in the list",search);
}
