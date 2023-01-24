#include<stdio.h>

int main()
{
	int a[10],n,i,p;
	
	printf("\nEnter Size Of An Array : ");
	scanf("%i",&n);
	printf("\nEnter %i Elements : ",n);
	
	for(i=0; i<n; i++)
	{
		scanf("%i",&a[i]);
	}
	
	printf("\nEnter Position To Delet The Element : ");
	scanf("%i",&p);
	
	if(p<0 || p>n)
	{
		printf("\nNot Vlaid Position ");
	}
	else
	{
		for(i=p-1; i<n-1; i++)
		{
			a[i]=a[i+1];
		}
		n--;
		printf("\nAfter Deletion -> ");
		for(i=0; i<n; i++)
		{
			printf("%5i",a[i]);
		}
	}
}
