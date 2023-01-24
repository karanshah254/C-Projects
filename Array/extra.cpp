#include<stdio.h>
#define p printf
#define s scanf

void q1();

int main()
{
	q1();	
}	

void q1()
{
	int a[10], n, x[10], i, sum=0;
	
	p("\nEnter Size of An Array : ");
	s("%i",&n);
	
	if(n>10)
	{
		p("\nNot valid");
	}
	else
	{ 
	    p("\nEnter %i Elements : \n",n);
		for(i=0; i<n; i++)
		{
			s("%i",&a[i]);
		}
		p("\n\t*** Output ***\n");
		for(i=0; i<n; i++)
		{
			p("%5i",a[i]);
		}
		for(i=0; i<n; i++)
		{
			x[i]=a[i];
		}
		p("\n\n\t*** Clone Output ***\n");
		for(i=0; i<n; i++)
		{
			p("%5i",x[i]);
		}
		for(i=0; i<n; i++)
		{
			sum = sum+a[i];
		}
		p("\n\nSum = %i",sum);
		p("\n");
		for(i=0; i<n; i++)
		{
			p("\nAdress = %i \tIndex = %i \tValue = %i",&a[i],i,a[i]);
		}
		
	}
}
