#include<stdio.h>

int main()
{
	int a[1000], s, n;
	
	printf("\nEnter Range Of Array : ");
	scanf("%i",&n);
	printf("\nEnter %i Elements : ",n);
	
	for(int i=0; i<n; i++)
	{
		scanf("\n%i",&a[i]);
	}
	
	printf("\n-----> Output <-----");
	for(int i=0; i<n; i++)
	{
		printf("\n%5i",a[i]);
	}
	
	printf("\n-----> Reverse <-----");
	for(int i=n-1; i>0; i--)
	{
		printf("\n%5i",a[i]);
	}
	
	printf("\n\n\t-----> Search Elements From List <-----");
	printf("\nEnter Value You Want To Search : ");
	scanf("%i",&s);
	
	int f=0;
	for(int i=0; i<n; i++)
	{
		if(s==a[i])
		{
			printf("\n-----> Data Found <-----");
			f=1;
			break;
		}
	}
	if(f==0)
    	{
			printf("\n-----> Data Not Found <-----");
    	}

}
