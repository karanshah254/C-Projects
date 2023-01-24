// Calculate and Display the sum of all even no and odd no 

// Array

#include<stdio.h>
#define p printf
#define s scanf

int a[100], n, i, sum_even=0, sum_odd=0;

void sum_even_odd_array();

int main()
{
	sum_even_odd_array();
}

void sum_even_odd_array()
{
	p("\nEnter Size Of An Array : ");
	s("%i",&n);
	
	p("\nEnter %i Elements : ",n);
	
	for(i=0; i<n; i++)
	{
		s("%i",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			sum_even = sum_even + a[i];
		}
		else
		{
			sum_odd = sum_odd + a[i];
		}
	}
	p("\nSum Of Even No : %i",sum_even);
	p("\nSum Of odd No : %i",sum_odd);
	
}
