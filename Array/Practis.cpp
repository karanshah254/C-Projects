#include<stdio.h>
#define p printf
#define s scanf

int a[10],b[10], i, sum=0;

void input();
void sum_elements();
void reverse();
void copy_elements_one_to_another();

int main()
{
	//input();
	//sum_elements();
	//reverse();
	copy_elements_one_to_another();
}

void input()
{
	p("\nEnter 10 Elements : ");
	for(i=0; i<10; i++)
	{
		p("\nElement %i : ",i);
		s("%i",&a[i]);
	}
	p("\nElements In Array Are -> ");
	for(i=0; i<10; i++)
	{
		p("%5i",a[i]);
	}
}

void sum_elements()
{
	p("\nEnter 10 Elements : ");
	for(i=0; i<10; i++)
	{
		p("\nElement %i : ",i);
		s("%i",&a[i]);
	}
	for(i=0; i<10; i++)
	{
		sum = sum + a[i];
	}
	p("\nSum of All Elements = %i",sum);
}

void reverse()
{
	p("\nEnter 10 Elements : ");
	for(i=0; i<10; i++)
	{
		p("\nElement %i : ",i);
		s("%i",&a[i]);
	}
	p("\nOutput --> ");
	for(i=9; i>=0; i--)
	{
		p("%5i",a[i]);
	}
}

void copy_elements_one_to_another()
{
	p("\nEnter 10 Elements : ");
	for(i=0; i<10; i++)
	{
		p("\nElement %i : ",i);
		s("%i",&a[i]);
	}
	for(i=0; i<10; i++)
	{
		b[i]=a[i];
	}
	p("\n\tClone Output \n");
	for(i=0; i<10; i++)
	{
		p("\nElement %i = %i",i,b[i]);
	}
}


