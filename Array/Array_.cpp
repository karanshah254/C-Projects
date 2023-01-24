#include<stdio.h>
#define p printf
#define s scanf

void sum_even_odd_array();
void farhenhit_celsius();
void negative_zero_positive();
void display_prime_no();
void student_name_result();

int main()
{
	//sum_even_odd_array();
	//farhenhit_celsius();
    //negative_zero_positive();
    //display_prime_no();
    student_name_result();
}

void sum_even_odd_array()
{
	int a[100], n, i, sum_even=0, sum_odd=0;

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

void farhenhit_celsius()
{
	int n, i; 
	float a[100], c;
	
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

void negative_zero_positive()
{
	int a[100], n, i;
	
    p("\nEnter Size Of An Array : ");
    s("%i",&n);
    
    p("\nEnter %i Numbers : \n",n);
    for(i=0; i<n; i++)
    {
        s("%i",&a[i]);
    }
    
    p("\n\n\tOutput -->  ");
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            p("%5i",a[i]);
        }
    }
    
    for(i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            p("%5i",a[i]);
        }
    }
    
    for(i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            p("%5i",a[i]);
        }
    }
}

void display_prime_no()
{
    int a[100], n, i, prime;
    
    p("\nEnter Size Of An Array : ");
    s("%i",&n);
    
    p("\nEnter %i Numbers : \n",n);
    for(i=0; i<n; i++)
    {
        s("%i",&a[i]);
    }
    
    p("\n\n\tPrimr Numbers -->  ");
    
    for(i=0; i<n; i++)
    {
    	prime = 1;
    	
    	for(int c=2; c<=a[i]/2; c++)
    	if(a[i]%c==0)
    	{
    	    prime=0;
    	    break;
    	}
    	if(prime==1)
    	{
    	    p("%5i",a[i]);
    	}
    }
}

void student_name_result()
{
	int a[100], i, n, sum=0, average; 
	
	p("\nEnter Number Of Subjects : ");
	s("%i",&n);
	p("\nEnter Marks : ");
	for(i=0; i<n; i++)
    {
        s("%i",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    
    average = sum/n;
    
    p("\nThe Average of Total Marks Obtained By %i Subjects = %i",n,average);
	
}

