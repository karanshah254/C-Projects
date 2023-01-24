#include<stdio.h>
#include<string.h>
#define p printf
#define s scanf
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

int main()
{
	int a,b,c;
	
	p("\nEnter Three Numbers : ");
	s("%i %i %i",&a,&b,&c);
	
	p("\nMax From three Numbers = %i\n Min From Three Numbers = %i",max(max(a,b),c),min(min(a,b),c));
}

