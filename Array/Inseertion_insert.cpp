#include<stdio.h>

int main()
{
	int a[10],n,i,e,p;
	
	printf("\nEnter Size Of An Array : ");
	scanf("%i",&n);
	printf("\nEnter %i Elements : ",n);
	
	for(i=0; i<n; i++)
	{
		scanf("%i",&a[i]);
	}
	
	printf("\nEnter Element You Want TO Insert : ");
	scanf("%i",&e);
	printf("\nEnter Position : ");
	scanf("%i",&p);
	
	if(p>0 && p<=n+1)
	{
		for(i=n; i>=p; i--)
    	{
	    	a[i]=a[i-1];
    	}
    	a[p-1]=e;
     	n++;
	
	    printf("\nAfter Inseertion -> ");
	    for(i=0; i<n; i++)
	    {
	    	printf("%5i",a[i]);
	    }
	}
	else
	{
		printf("\nNot Valid Position");
	}
	
}
