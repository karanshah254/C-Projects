#include<stdio.h>

void q1();
void Sum_2Square_Matrix();
void Subtraction_2Square_Matrix();
void Multiplication_2Square_Matrix();
void Divison_2Square_Matrix();
void Cross_Output();
void Cross2_Output();
void q8();
void q9();

int main()
{
	//q1();
	//Sum_2Square_Matrix();
	//Subtraction_2Square_Matrix();
    //Multiplication_2Square_Matrix();
    //Divison_2Square_Matrix();
    //Cross_Output();
    //Cross2_Output();
    //q8();
    q9();
}
	
void q1()
{
	int a[3][3];
	
	printf("\nEnter Numbers : ");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
	printf("\n*** Output ***\n\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%5i",a[i][j]);
		}
		printf("\n");
	}
}

void sum_2Square_Matrix()
{
	int a[3][3], b[3][3], c[3][3];
	
	printf("\nEnter Numbers A : ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
	
	printf("\nEnter Numbers B : ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&b[i][j]);
		}
	}
	printf("\n*** Output ***\n\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%5i",c[i][j]);
		}
		printf("\n");
	}
}

void Subtraction_2Square_Matrix()
{
	int a[3][3], b[3][3], c[3][3];
	
	printf("\nEnter Numbers A : ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
	
	printf("\nEnter Numbers B : ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&b[i][j]);
		}
	}
	printf("\n*** Output ***\n\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%5i",c[i][j]);
		}
		printf("\n");
	}
}

void Multiplication_2Square_Matrix()
{
	int a[3][3], b[3][3], c[3][3];
	
	printf("\nEnter Numbers A : ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
	
	printf("\nEnter Numbers B : ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&b[i][j]);
		}
	}
	printf("\n*** Output ***\n\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%5i",c[i][j]);
		}
		printf("\n");
	}
}

void Divison_2Square_Matrix()
{
	int a[3][3], b[3][3], c[3][3];
	
	printf("\nEnter Numbers A : ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
	
	printf("\nEnter Numbers B : ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&b[i][j]);
		}
	}
	printf("\n*** Output ***\n\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			c[i][j] = a[i][j] / b[i][j];
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%5i",c[i][j]);
		}
		printf("\n");
	}
}

void Cross_Output()
{
	int a[3][3];
	
	printf("\nEnter Numbers : ");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
	printf("\n*** Output ***\n\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(i==j)
			{
				printf("%5i",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void Cross2_Output()
{
	int a[3][3];
	
	printf("\nEnter Numbers : ");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
	printf("\n*** Output ***\n\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(i+j==2)
			{
				printf("%5i",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void q8()
{
	int a[3][3];
	
	printf("\nEnter Numbers : ");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
	printf("\n*** Output ***\n\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<=i; j++)
		{
			printf("%5i",a[i][j]);
		}
		printf("\n");
	}
}

void q9()
{
	int a[3][3];
	
	printf("\nEnter Numbers : ");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
	printf("\n*** Output ***\n\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(i+j<2)
			{
				printf(" ");
			}
			else
			{
				printf("%i",a[i][j]);
			}
		}
	
		printf("\n");
	}
}
