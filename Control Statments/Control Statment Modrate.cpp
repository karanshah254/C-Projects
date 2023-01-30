#include<stdio.h>
#include<math.h>

void q33();
void q34();
void q35();
void q36();
void q37();
void q38();
void q39();
void q40();
void q41();
void q42();
void q43();
void q44();
void q45();
void q46();
void q47();
void q48();
void q49();
void q50();
void q51();
void q69();
void q70();
void q71();
void q72();
void q73();
void q74();
void q75();
void q76();
void q77();
void q78();

int main()
{
    //q33();
    //q34();
    //q35();
    //q36();
    //q37();
    //q38();
    q39();
    q40();
    //q41();
    q42();
    q43();
    q44();
    q45();
    q46();
    q47();
    //q48();
    //q49();
    q50();
    //q51();
    q69();
    //q70();
    //q71();
    //q72();
    //q73();
    q74();
    //q75();
    //q76();
    q77();
    q78();
}

void q33()
{
   	int no, temp, temp1, c=0, totaldigits=0, ld=0, sum=0;
    
    printf("\nEnter Three Digit Number = ");
    scanf("%i",&no);
    
    temp = no;
    temp1 = no;
    while(no>0)
    {
        c++;
        no = no/10;
    }
    totaldigits = c;
    
    while(temp>0)
    {
        ld = temp%10;
        sum = sum + pow(ld,totaldigits);
        temp = temp/10;
    }
    if(temp1==sum)
    {
        printf("\n%i is Armstrong Number",temp1);
    }
    else
    {
        printf("\n%i is Not Armstrong Number",temp1);
    }
}

void q34()
{
    int sr, er, temp, temp1, totaldigits, j=0, ld=0, sum=0;
    
    printf("\nEnter Strating Range : ");
    scanf("%i",&sr);
    printf("\nEnter Ending Range : ");
    scanf("%i",&er);
    printf("\nArmstrong Numbers Between %i to %i = ",sr,er);
    
    for(int c=sr; c<=er; c++)
    {
        temp = c;
        temp1 = c;
        sum =0;
        j=0;
        while(temp>0)
        {
            j++;
            temp = temp/10;
        }
        totaldigits = j;
        
        while(temp1>0)
        {
            ld = temp1%10;
            sum = sum+pow(ld,totaldigits);
            temp1 = temp1/10;
        }
        
        if(c==sum)
        {
            printf("%5i",c);
        }
    }
    
}

void q35()
{
	int er, i=0, a=0, b=1;
	
	printf("\n------> Fibonacci Series <------");
	printf("\nEnter Ending Number : ");
	scanf("%i",&er);
	
	for(int c=1; c<=er; c++)
	{
		i = a+b;
		a = b;
		b = i;
		
		printf("%5i",i);
	}
	
}

void q36()
{
	int a, b, c;
	float  d, r1, r2;
	printf("\nEnter A : ");
	scanf("%i",&a);
	printf("\nEnter B : ");
	scanf("%i",&b);
	printf("\nEnter C : ");
	scanf("%i",&c);
	
	d = (b*b)-(4*a*c);
	
	if(d>=0)
	{
		printf("\nRoots are Real and Exist");
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("\nRoot 1 = %f",r1);
		printf("\nRoot 2 = %f",r2);
	}
	else
	{
		printf("\nRoot does not exists");
	}
}

void q37()
{
	int b, e, ans, i;
	
	printf("\nEnter Base : ");
	scanf("%i",&b);
	printf("\nEnter Exponent : ");
	scanf("%i",&e);
	
	while(i<=e)
	{
		ans = pow(b,e);
		i++;
		
	}
	printf("\nPower of %i = %i ",b,ans);
}

void q38()
{
	int b, e, ans;
	
	printf("\nEnter Base : ");
	scanf("%i",&b);
	printf("\nEnter Exponent : ");
	scanf("%i",&e);
	
	ans = pow(b,e);
	
	printf("\nPower of %i = %i",b,ans);
}

void q39()
{
	
}

void q40()
{
	
}

void q41()
{
	int er, sum;
	
	printf("\nSeries : 1^2 + 2^2 + 3^2 +.......N^2");
	printf("\nEnter Ending Range : ");
	scanf("%i",&er);
	
	printf("\nSum of All Natural Numbers Square Between 1 to %i : ",er);
	
	for(int c=1; c<=er; c++)
	{
		sum = sum + pow(c,2);
	}
	printf(" %i",sum);
}

void q42()
{
	
}

void q43()
{
	
}

void q44()
{
	
}

void q45()
{
	
}

void q46()
{
	
}

void q47()
{
	
}

void q48()
{
	int er, ans, sum=0;
	
	printf("\nHARMONIC SERIES : 1 + 1/2 + 1/3 + 1/4 +....... 1/N");
	printf("\nEnter Ending Number : ");
	scanf("%i",&er);
	
	for(int c=1; c<=er; c++)
	{
		ans = 1/c;
		sum = sum + ans;
	}
	
	printf("\nSum = %i",sum);
}

void q49()
{
	int sr, er, sum;
	
	printf("\nEnter Strating Range : ");
	scanf("%i",&sr);
	printf("\nEnter Ending Range : ");
	scanf("%i",&er);
	
	for(int c=sr; c<=er; c++)
	{
		if(c%7==0)
		{
			sum = sum+c;
			
		}
	}
	printf("\nSum of All Numbers Between %i to %i that are Divisible by 7 = %i",sr,er,sum);
}

void q50()
{
	
}

void q51()
{
	int math, phy, che, total, totalmp;
	
	printf("\nEnter The Marks in Maths : ");
	scanf("%i",&math);
	printf("\nEnter The Marks in Physics : ");
	scanf("%i",&phy);
	printf("\nEnter The Marks in Chemistry : ");
	scanf("%i",&che);
	
	total = math+phy+che;
	totalmp = math+phy;
	
	if(math>=60 && phy>=50 && che>=40 && total>=200 || totalmp>=150)
	{
		printf("\nThe Candidate is Eligible For The Admission");
	}
	else
	{
		printf("\nThe Candidate is Not Eligible For The Admission");
	}

}

void q69()
{
	
}

void q70()
{
	int math, phy, che, total, totalmp;
	
	printf("\nEnter The Marks in Maths : ");
	scanf("%i",&math);
	printf("\nEnter The Marks in Physics : ");
	scanf("%i",&phy);
	printf("\nEnter The Marks in Chemistry : ");
	scanf("%i",&che);
	
	total = math+phy+che;
	totalmp = math+phy;
	
	if(math>=65 && phy>=55 && che>=50 && total>=190 || totalmp>=140)
	{
		printf("\nThe Candidate is Eligible For The Admission");
	}
	else
	{
		printf("\nThe Candidate is Not Eligible For The Admission");
	}
}

void q71()
{
	int rn, math, phy, che, total, per;
	char name[100];
	
	printf("\nEnter The Name Of Student : ");
	scanf("%[^\n]s",name);

	printf("\nEnter The Roll No Of Student : ");
	scanf("%i",&rn);
		
	printf("\nEnter The Marks in Maths : ");
	scanf("%i",&math);
	printf("\nEnter The Marks in Physics : ");
	scanf("%i",&phy);
	printf("\nEnter The Marks in Chemistry : ");
	scanf("%i",&che);
	total = math+phy+che;
	per = total/3.0;
	
	printf("\n\nRoll No : %i",rn);
	printf("\nName of Student : %s",name);
	printf("\nMarks in Maths : %i",math);
	printf("\nMarks in Physics : %i",phy);
	printf("\nMarks in Chemistry : %i",che);
	printf("\nTotal Marks : %i",total);
	printf("\nPercentage = %i",per);
	
	if(per>=60)
	{
		printf("\nDivision : First");
	}
	else if(per>=48 && per<60)
	{
		printf("\nDivision : Second");
	}
	else if(per>=33 && per<48)
	{
		printf("\nDivision : Third");
	}
	else
	{
		printf("\nDivision : Fail");
	}
}

void q72()
{
	int temp;
	
	printf("\nEnter Temperature : ");
	scanf("%i",&temp);
	
	if(temp<0)
	{
		printf("\nFreezing Weather");
	}
	else if(temp<10)
	{
		printf("\nVery Cold Weather");
	}
	else if(temp<20)
	{
		printf("\nCold Weather");
	}
	else if(temp<30)
	{
		printf("\nNormal in Temp");
	}
	else if(temp<40)
	{
		printf("\nIts Hot");
	}
	else
	{
		printf("\nIts Very Hot");
	}
}  

void q73()
{
	int cus_id, c_unit, amt, s_charge, n_amt;
	char cus_name[100];
	
	printf("\n\t ------> Electricity Bill <------");
	printf("\nEnter Customer Id : ");
	scanf("%i",&cus_id);
	printf("\nEnter Customer Name : ");
	fflush(stdin);
	scanf("%[^\n]s",cus_name);
	printf("\nEnter The Unit Consumed BY The Customer : ");
	scanf("%i",&c_unit);
	
	if(c_unit<200)
	{
		amt = c_unit*1.20;
	}
	else if(c_unit>=200 && c_unit<400)
	{
		amt = c_unit*1.50;
	}
	else if(c_unit>=400 && c_unit<600)
	{
		amt = c_unit*1.80;
	}
	else
	{
		amt = c_unit*2.00;
	}
	printf("\nAmount = %i",amt);
	
	if(amt>400)
	{
		s_charge = amt*0.15;
		printf("\nSurcharge = %i",s_charge);
	}
	
	if(amt<100)
	{
		n_amt = 100;
	}
	
	n_amt = amt+s_charge;
	
	printf("\nNet Amount = %i",n_amt);
}

void q74()
{
	
}

void q75()
{
	int a, b, c;
	float  d, r1, r2;
	printf("\nEnter A : ");
	scanf("%i",&a);
	printf("\nEnter B : ");
	scanf("%i",&b);
	printf("\nEnter C : ");
	scanf("%i",&c);
	
	d = (b*b)-(4*a*c);
	
	switch(d>=0)
	{
		case 1 : printf("\nRoots are Real and Exist");
		         r1=(-b+sqrt(d))/(2*a);
		         r2=(-b-sqrt(d))/(2*a);
		         printf("\nRoot 1 = %f",r1);
	           	 printf("\nRoot 2 = %f",r2);
	
	    case 0 : printf("\nRoot does not exists");
	}
}

void q76()
{
	
	int no;
	
	printf("\nEnter Day Number : ");
	scanf("%i",&no);
	
	if(no==1)
	{
		printf("\nIt is Monday");
	}
	else if(no==2)
	{
		printf("\nIt is Tuesday");
	}
	else if(no==3)
	{
		printf("\nIt is Wednesday");
	}
	else if(no==4)
	{
		printf("\nIt is Thursday");
	}
	else if(no==5)
	{
		printf("\nIt is Friday");
	}
	else if(no==6)
	{
		printf("\nIt is Saturday");
	}
	else if(no==7)
	{
		printf("\nIt is Sunday");
	}
	else
	{
		printf("\nNot Valid.....\nPlease Enter Day Number Between (1---7)");
	}
}

void q77()
{
	
}

void q78()
{
	
}
