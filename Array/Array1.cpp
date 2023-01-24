#include<stdio.h>

int a[10], n, i, s, pos, c, temp;

void input();
void search();
void display_elements();
void display_rev_elements();
void sort();

int main()
{
	//input();
	//search();
	//display_elements();
	//display_rev_elements();
	sort();
}

void input()
{
	printf("\nEnter Size of An Array : ");
	scanf("%i",&n);
	
	printf("\nEnter %i Elements : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%i",&a[i]);
	}
	//printf("Size = %i bytes",sizeof(a));
}

void search()
{
	input();
	
	printf("\nEnter Element You Want To Search : ");
	scanf("%i",&s);
	int f=0;
	for(i=0; i<n; i++)
	{
		if(s==a[i])
		{
			pos = i+1;
			printf("\n\t---> Search Successful At %i Position <---",pos);
			f = 1;
			break;
		}
	}
	if(f==0)
	{
		printf("\n\t---> Search Unsuccessful <---");
	}
}

void display_elements()
{
	input();
	
	printf("\n\n  Output ---->");
	
	for(i=0; i<n; i++)
	{
		printf("%5i",a[i]);
	}
}

void display_rev_elements()
{
	input();
	
	printf("\n\n  Output ---->");
	
	for(i=(n-1); i>=0; i--)
	{
		printf("%5i",a[i]);
	}
}

void sort()
{
	input();
	
	printf("\n Output ---> ");
	
	for(i=0; i<n; i++)
	{
		for(c=i+1; c<n; c++)
		{
			if(a[i]>a[c])
			{
				temp = a[i];
				a[i] =a[c];
				a[c] = temp;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%5i",a[i]);
	}
}
