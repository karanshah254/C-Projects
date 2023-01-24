#include<stdio.h>
#define p printf 
#define s scanf

int a[10], n, i, sum, count_o, count_e, b[10], se, cou, c[10], m, j, o;

void q1();
void q2();
void q3();
void q4();
void q5();
void q6();
void q7();
void calculate_count();
void merge();

int main()
{
	//q1();
	//q2();
	//q3();
    //q4();
	//q5();
	//q6();
	//q7();
	//calculate_count();
	merge();

}

void q1()
{
	p("\nEnter Size of An Array : ");
	s("%i",&n);
	p("\nEnter %i Elements : \n",n);
	for(i=0; i<n; i++)
	{
		s("%i",&a[i]);
	}
	p("\nOutput ---> ");
	for(i=0; i<n; i++)
	{
		p("%5i",a[i]);
	}
}

void q2()
{
	p("\nEnter Size of An Array : ");
	s("%i",&n);
	p("\nEnter %i Elements : \n",n);
	for(i=0; i<n; i++)
	{
		s("%i",&a[i]);
	}
	p("\nNegative Numbers ---> ");
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			p("%5i",a[i]);
		}
	}
}

void q3()
{
	p("\nEnter Size of An Array : ");
	s("%i",&n);
	p("\nEnter %i Elements : \n",n);
	for(i=0; i<n; i++)
	{
		s("%i",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		sum = sum+a[i];
	}
	p("\nSum = %i",sum);
}

void q4()
{
	int max=a[0];
	p("\nEnter Size of An Array : ");
	s("%i",&n);
	p("\nEnter %i Elements : \n",n);
	for(i=0; i<n; i++)
	{
		s("%i",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	int min=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	p("\nMax = %i \nMin = %i",max,min);
}

void q5()
{
	p("\nEnter Size of An Array : ");
	s("%i",&n);
	p("\nEnter %i Elements : \n",n);
	for(i=0; i<n; i++)
	{
		s("%i",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]%2!=0)
		{
			count_o++;
		}
	}
	p("\n%i Odd Numbers",count_o);
}

void q6()
{
	p("\nEnter Size of An Array : ");
	s("%i",&n);
	p("\nEnter %i Elements : \n",n);
	for(i=0; i<n; i++)
	{
		s("%i",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			count_e++;
		}
	}
	p("\n%i Even Numbers",count_e);
}

void q7()
{
	p("\nEnter Size of An Array : ");
	s("%i",&n);
	p("\nEnter %i Elements : \n",n);
	for(i=0; i<n; i++)
	{
		s("%i",&a[i]);
	}
	p("\nClone Output --->");
	for(i=0; i<n; i++)
	{
		b[i]=a[i];
	}
	for(i=0; i<n; i++)
	{
		p("%5i",b[i]);
	}
}

void calculate_count()
{
	p("\nEnter Size of An Array : ");
	s("%i",&n);
	p("\nEnter %i Elements : \n",n);
	for(i=0; i<n; i++)
	{
		s("%i",&a[i]);
	}
	p("\nEnter Element You Want to Search : ");
	s("%i",&se);
	int f=0;
	for(i=0; i<n; i++)
	{
		if(a[i]==se)
		{
			f=1;
		    p("\nSearch Sucsessfully");
			cou++;
		}
	}
	if(f==0)
	{
		p("\nNo Data Found");
	}
	p("\n%i Available %i Times",se,cou);
}

void merge()
{
	p("\nEnter Size Of An First Array : ");
	s("%i",&n);
	p("\nEnter %i Elements : \n",n);
	for(i=0; i<n; i++)
	{
		s("%i",&a[i]);	
	}
	
	p("\nEnter Size Of An Second Array : ");
	s("%i",&m);
	p("\nEnter %i Elements :\n",m);
	for(j=0;j<m;j++)
	{
		s("%i",&b[j]);
	}

	for(i=0; i<n; i++)
	{
		c[i]=a[i];
	}
	 i=n;
	for(j=0; j<m; j++)
	{
		c[i]=b[j];
		i++;
	}
	
	p("\nAfter Merge Output Is ---> ");
	for(i=0; i<n+m; i++)
	{
		p("%5i",c[i]);	
	}
	
}
