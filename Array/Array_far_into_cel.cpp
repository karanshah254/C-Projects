// Array Fahrenhit to Celsius

#include<stdio.h>
#define p printf
#define s scanf

int n, i; 
float a[100], c;

void farhenhit_celsius();

int main()
{
	farhenhit_celsius();
}

void farhenhit_celsius()
{
	p("\nEnter Size Of An Array : ");
	s("%i",&n);
	
	p("\nEnter %i Temp in Farhenhit : ",n);
	
	for(i=0; i<n; i++)
	{
		s("%f",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		c = (a[i]-32)*0.55;
		p("\nTemp in Celsius = %f ",c);
	}
}
