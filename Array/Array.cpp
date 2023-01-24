#include<stdio.h>
#define p printf
#define s scanf

void input();
void search();
void sort();

int a[100], n, se, temp;

int main()
{
	//search();
	sort();
}

display()
{
	for(int i=0; i<n; i++)
	{
		p("%5i",a[i]);
	}
}
void input()
{
	p("\nEnter Size Of Array : ");
	s("%i",&n);
	p("\nEnter %i Elements : ",n);
	
	for(int i=0; i<n; i++)
	{
		s("%i",&a[i]);
	}
}


void search()
{
	input();
	p("\nEnter Elements You Want To Search : ");
	s("%i",&se);
	int f=0;
	for(int i=0; i<n; i++)
	{
		if(se==a[i])
		{
			p("\n\t ----> Successful Search <----");
			f=1;
			break;
		}
	}
	if(f==0)
	{
		p("\n\t ----> Unsuccessful Search <----");
	}
}

void sort()
{
	input();
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
			    a[i] = a[j];
			    a[j] = temp;
			}
	
		}
	}
	display();
}
