#include<stdio.h>
//#inlcude<conio.h>
struct student
{
	int grno,i;
	char name[100];
	int hindi,maths,computer,science,english;
	int total;
};
int main()
{
	student s[100];
	int n;
	
	printf("\nEnter Number Of Student : ");
	scanf("%i",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nEnter Gr No of Student %i: ",i+1);
		scanf("%i",&s[i].grno);
		
		fflush(stdin);
		printf("\nEnter Name of Student %i : ",i+1);
		scanf("%[^\n]s",s[i].name);
		
		fflush(stdin);
		printf("\nEnter Marks Of Hindi : ");
		scanf("%i",&s[i].hindi);
		fflush(stdin);
		printf("\nEnter Marks Of English : ");
		scanf("%i",&s[i].english);
		
		fflush(stdin);
		printf("\nEnter Marks Of Computer : ");
		scanf("%i",&s[i].computer);
		
		fflush(stdin);
		printf("\nEnter Marks Of Maths : ");
		scanf("%i",&s[i].maths);
		
		fflush(stdin);
		printf("\nEnter Marks Of Science : ");
		scanf("%i",&s[i].science);
		
		s[i].total=(s[i].computer+s[i].english+s[i].hindi+s[i].maths+s[i].science);
	}
	
	//fflush(stdin);
	//printf("\nTotal Marks : ");
	//scanf("%i",s[i].total);
	
	fflush(stdin);
	printf("\n *** Output *** \n");
	printf("\nGrNo\t Name\t\t Total\n");
	for(int i=0;i<n;i++)
	{
		printf("%5i %5s\t %5i",s[i].grno,s[i].name,s[i].total);
	}
}
