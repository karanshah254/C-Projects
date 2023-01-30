#include<stdio.h>

int main()
{
	FILE *fptr;
	int val;
	char ch;
	fptr=fopen("abc.txt","w");
	if(fptr==NULL)
	{
		printf("\nInvalid.....");
	}
	else
	{
		fprintf(fptr,"\nHello.....");
		printf("\nEnter Integer : ");
		scanf("%i",&val);
		fprintf(fptr,"%i",val);
		fclose(fptr);
		printf("\nSuccessfull");
		
	}
	
	fptr=fopen("abc.txt","r");
	if(fptr==NULL)
	{
		printf("\nFile Does Not Eixst");
	}
	else
	{
		
		while(1)
		{
			ch=fgetc(fptr);
			if(ch==EOF)
			    break;
			else
			    printf("%c",ch);
		}
	}
}
