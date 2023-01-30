#include<stdio.h>
#include<math.h>

void q1();
void q2();
void q3();
void q4();
void q5();
void q6();
void q7();
void q8();
void q9();
void q10();
void q11();
void q12();
void q13();
void q14();
void q15();
void q16();
void q17();
void q18();
void q19();
void q28();
void q29();
void q30();
void q31();
void q32();
void q33();
void q34();
void q35();
void q36();
void q37();
void q38();
void q39();
void q51();
void q52();
void q53();
void q54();
void q55();
void q56();
void q57();
void q58();
void q59();
void q60();

void q61();
void q62();
void q63();
void q64();
void q65();
void q66();
void q67();
void q68();
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
void q79();
void q80();

void q81();

void q87();
void q88();
void q89();
void q90();
void q91();
void q92();
void q93();


int main()
{
	//q1();
	//q2();
	//q3();
	//q4();
	//q5();
	//q6();
	q7();
	//q8();
	//q9();
	//q10();
	//q11();
	//q12();
	//q13();
	//q14();
	//q15();
	//q16();
	//q17();
	//q18();
	//q19();
	//q28();
    //q29();
    //q30();
    //q31();
    //q32();
    //q33();
    //q34();
    //q35();
    //q36();
    //q37();
    //q38();
    //q39();
    
    
    //q51();
    //q52();
    //q53();
    //q54();
    //q55();
    //q56();
    //q57();
    //q58();
    //q59();
    //q60();
    
    //q61();
    //q62();
    //q63();
    //q64();
    //q65();
    //q66();
    //q67();
    //q68();
    //q69();
    //q70();
    
    //q71();
    //q72();
    //q73();
    q74();
    //q75();
    q76();
    //q77();
    q78();
    q79();
    //q80();
    
    //q81();
    
	//q87();
	//q88();
	//q89();
	//q90();
	//q91();
	//q92();
	//q93();	
}

void q1()
{
	int integer;
	
	printf("\nEnter Integer : ");
	scanf("%i",&integer);
	
	if(integer>0)
	{
		printf("\nIt is Positive");
	}
	else if(integer<0)
	{
		printf("\nIt is Negative");
	}
	else 
	{
		printf("\nNot Posibale");
	}
}


void q2()
{
	int no;
	
	printf("\nEnter Any Number : ");
	scanf("%i",&no);
	
	if(no<0)
	{
		printf("\nIt is Negative");
	}
	else 
	{
		printf("\nNot Posibale");
	}	
}

void q3()
{
	int no1, no2, no3;
	
	printf("\nEnter Value of No1 : ");
	scanf("%i",&no1);
	printf("\nEnter Value of No2 : ");
	scanf("%i",&no2);
	printf("\nEnter Value of No3 : ");
	scanf("%i",&no3);
	
	if(no1>no2 && no1>no3)
	{
		printf("\n%i is Maximum");
	}
	else if(no2>no1 && no2>no3)
	{
		printf("\n%i is Maximum");
	}
	else if(no3>no1 && no3>no2)
	{
		printf("\n%i is Maximum");
	}
	else if(no1=no2=no3)
	{
		printf("\nNo1,No2 and No3 are Equal");
	}
	else
	{
		printf("\nNot Posibale");
	}
}


void q4()
{
	int no1, no2;
	
	printf("\nEnter No1 : ");
	scanf("%i",&no1);
	printf("\nEnter No2 : ");
	scanf("%i",&no2);
	
	if(no1>no2)
	{
		printf("\n%i > %i",no1,no2);
	}
	else if(no1<no2)
	{
		printf("\n%i < %i",no1,no2);
	}
	else if(no1==no2)
	{
		printf("\n%i = %i",no1,no2);
	}
}


void q5()
{
	int no1, no2;
	
	printf("\nEnter No1 : ");
	scanf("%i",&no1);
	printf("\nEnter No2 : ");
	scanf("%i",&no2);
	
	if(no1>no2)
	{
		printf("\n%i > %i",no1,no2);
	}
	else if(no1<no2)
	{
		printf("\n%i < %i",no1,no2);
	}
	else if(no1==no2)
	{
		printf("\n%i = %i",no1,no2);
	}
}


void q6()
{
	int year;
	
	printf("\nEnter Year : ");
	scanf("%i",&year);
	
	if(year%4==0)
	{
		printf("\nIt is Leap Year");
	}
	else
	{
		printf("\nIt is Not Leap Year");
	}
}

void q7()
{
}

void q8()
{
    int n1, n2, ans;
    char ch;
    
    printf("\n-------> Welcome to Simple Calculator <-------");
    printf("\nEnter No1 = ");
    scanf("%i",&n1);
    printf("\nEnter No2 = ");
    scanf("%i",&n2);
    printf("\n+ --> Addition");
    printf("\n- --> Subtraction");
    printf("\n* --> Multiplication");
    printf("\n/ --> Division");
    fflush(stdin);
    printf("\nEnter Your Choice : ");
    scanf("%c",&ch);
    
    switch(ch)
    {
        case '+' : ans = n1+n2;
                   printf("\nSum = %i",ans);
                   break;
        case '-' : ans = n1-n2;
                   printf("\nSub = %i",ans);
                   break;
        case '*' : ans = n1*n2;
                   printf("\nMul = %i",ans);
                   break;
        case '/' : ans = n1/n2;
                   printf("\nDiv = %i",ans);
                   break;
        default  : printf("\nInvalid....");
    }
}

void q9()
{
	int c;
	while(c<=5)
	{
		printf("%5i",c);
		c++;
	}
}

void q10()
{
	for(int c=1; c<=10; c++)
	{
		printf("%5i",c);
	}
}

void q11()
{
	int n, sum;
	
	printf("\nEnter Ending Range : ");
	scanf("%i",&n);
	
	for(int c=1; c<=n; c++)
	{
		sum = sum+c;
		
	}
	
	printf("\nSum = %i",sum);
}

void q12()
{
	int n, sum;
	
	printf("\nEnter Ending Range : ");
	scanf("%i",&n);
	
	for(int c=1; c<=n; c++)
	{
		sum = sum+c;
		
	}
	
	printf("\nSum = %i",sum);
}

void q13()
{
	int n, c ,sum=0;
	
	printf("\nEnter Ending Range : ");
	scanf("%i",&n);
	
	while(c<=n)
	{
		sum = sum+c;
		c++;
	}
	
	printf("\nSum = %i",sum);
}

void q14()
{
	int base, exp;
	float ans;
	
	printf("\nEnter Base Number : ");
	scanf("%i",&base);
	printf("\nEnter Exponent : ");
	scanf("%i",&exp);
	
	ans = pow(base,exp);
	
	printf("\nPower of Numbers = %f",ans);
}

void q15()
{
	int n;
	
    for(int c=1; c<=1000; c++)
    {
    	printf("\nEnter Your Fav Number : ");
    	scanf("%i",&n);
    	if(n==0)
    	{
    		break;
		}
	}
}

void q16()
{
	int no, rev=0;
	
	printf("\nEnter NO : ");
	scanf("%i",&no);
	
	while(no>0)
	{
		rev = (rev*10)+(no%10);
		no = no/10;
	}
	printf("\nReverse  Number = %i",rev);
}

void q17()
{
	int no, rev=0;
	
	printf("\nEnter No : ");
	scanf("%i",&no);
	int temp=no;
	while(no>0)
	{
		rev = (rev*10)+(no%10);
		no = no/10;
	}
	if(rev==temp)
	{
		printf("\nNumber is Palindrome");
	}
	else
	{
		printf("\nNumber is Not Palindrome");
	}
}

void q18()
{
	int no, prime, c, j;
    
    printf("\nEnter Anding Number : ");
    scanf("%i",&no);
    printf("\nPrime Numbers Between 1 to %i : \n",no);
    
    for(int c=2; c<=no; c++)
    {
    	prime = 1;
    	for(int j=2; j<=c/2; j++)
        {
    	    if(c%j==0)
        	{
    		prime = 0;
    		break;
		    }
    	}
    	if(prime==1)
     	{
		    printf("%i,",c);
	    }    
	}
}

void q19()
{
	int sr, er, prime, c, j;
	
	 printf("\nEnter Starting Number : ");
    scanf("%i",&sr);
    printf("\nEnter Anding Number : ");
    scanf("%i",&er);
    printf("\nPrime Numbers Between %i to %i : \n",sr,er);
    
    for(int c=sr; c<=er; c++)
    {
    	prime = 1;
    	for(int j=2; j<=c/2; j++)
        {
    	    if(c%j==0)
        	{
    		prime = 0;
    		break;
		    }
    	}
    	if(prime==1)
     	{
		    printf("%i,",c);
	    }    
	}
}

void q28()
{
    int i=1;
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=r; c++)
        {
            printf(" %i",i);
            i++;
        }
        printf("\n");
    }
}

void q29()
{
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            if(r%2!=0)
            {
                printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }
}

void q30()
{
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            
            if(c%2!=0)
            {
                printf(" 0");
            }
            else
            {
                printf(" 1");
            }
        }
        printf("\n");
    }
}

void q31()
{
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            if(r==1 || r==5 || c==1 || c==5 )
            {
                printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }
}

void q32()
{
    
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            if(r==3 && c==3 )
            {
                printf(" 0");
            }
            else
            {
                printf(" 1");
            }
        }
        printf("\n");
    }
}

void q33()
{
    /* 10101
       01010
       10101 */
    int k=1;
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            if(k==1)
            	printf("1");
            else
            	printf("0");
            	
            k=k*-1;
        }
        printf("\n");
    }
}

void q34()
{
	int k=1;
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            if(r==3 || c==3)
            {
            	printf(" 0");
			}
			else
			{
				printf(" 1");
			}
        }
        printf("\n");
    }
}

void q35()
{
	int row,col;
	printf("\nEnter No of Rows= ");
	scanf("%i",&row);
	printf("\nEnter No of Columns = ");
	scanf("%i",&col);
    for(int i=1;i<=row;i++)
    {
    	for(int j=1;j<=col;j++)
    	{
    		if(i==j || j==(col+1)-i)
    			printf("1");
    		else
    			printf("0");
		}
		printf("\n");
	}
}

void q36()
{
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
           printf(" %i",r);
        }
        printf("\n");
    }
}

void q37()
{
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
           printf(" %i",c);
        }
        printf("\n");
    }
}

void q38()
{
/*   12345
    23456
    34567
    45678
    56789  */
    
   	int row,col;
	printf("\nEnter No of Rows= ");
	scanf("%i",&row);
	printf("\nEnter No of Columns = ");
	scanf("%i",&col);
    for(int i=1;i<=row;i++)
    {
    	for(int j=i;j<i+col;j++)
    	{
    		printf("%i",j);
		}
		printf("\n");
	}
}

void q39()
{
    int i=1;
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
           printf("%5i",i);
           i++;
        }
        printf("\n");
    }
}

void q51()
{
	/*  1
	    22
	    333
		4444
		55555    */   
		
	for(int r=1; r<=5; r++)
	{
		for(int c=1; c<=r; c++)
		{
			printf(" %i",r);
		}
		printf("\n");
	}
}

void q52()
{
	/*      1
	       22
	      333
		 4444
		55555    */  
		
	int r=5;
	for(int i=1;i<=r;i++)
	{
		for(int j=i;j<r;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("%i",i);
		}
		printf("\n");
	}
}

void q53()
{
	/* 55555
	   4444
	   333
	   22
	   1     */
	   
    for(int r=5; r>=1; r--)
    {
    	for(int c=r; c>=1; c--)
    	{
    		printf(" %i",r);
		}
		printf("\n");
	}
}

void q54()
{
	/* 55555
	    4444
	     333
	      22
	       1   */
	    
    for(int r=5; r>=1; r--)
    {
    	for(int j=r; j<5; j++)
    	{
    		printf(" ");
		}
    	for(int c=r; c>=1; c--)
    	{
    		printf("%i",r);
		}
		printf("\n");
	}
}

void q55()
{
	/* 11111
	   2222
	   333
	   44
	   5     */
	   
    for(int r=1; r<=5; r++)
    {
    	for(int c=5; c>=r; c-- )
    	{
    		printf(" %i",r);
		}
		printf("\n");
	}
}

void q56()
{
	/*  11111
	     2222
	      333
	       44
	        5   */
	        
	for(int r=1; r<=5; r++)
	{
		for(int j=1; j<r; j++)
		{
			printf(" ");
		}
		for(int c=r; c<=5; c++)
    	{
    		printf("%i",r);
		}
		printf("\n");
	}
}

void q57()
{
	/* 5
	   44
	   333
	   2222
	   11111 */
	   
	for(int r=5; r>=1; r--)
	{
		for(int j=r; j>r; j--)
		{
			printf(" ");
		}
		for(int c=5; c>=r; c--)
		{
			printf("%i",r);
		}
		printf("\n");
	}
}

void q58()
{
	/*     5
	      44
	     333
	    2222
	   11111 */
	for(int r=5; r>=1; r--)
	{
		for(int j=1; j<r; j++)
		{
			printf(" ");
		}
		for(int c=5; c>=r; c--)
		{
			printf("%i",r);
		}
		printf("\n");
	}
}

void q59()
{
	/*  1
	    12
	    123
	    1234
	    12345  */
	    
	for(int r=1; r<=5; r++)
	{
		for(int c=1; c<=r; c++)
		{
			printf("%i",c);
		}
		printf("\n");
	}
}

void q60()
{
	/*      1
	       12
	      123
	     1234
	    12345  */
	    
	for(int r=1; r<=5; r++)
	{
		for(int j=r; j<5; j++)
		{
			printf(" ");
		}
		for(int c=1; c<=r; c++)
		{
			printf("%i",c);
		}
		printf("\n");
	}
}

void q61()
{
	/*  12345
	    1234
	    123
	    12
	    1  */
	
	for(int r=5; r>=1; r--)
	{
		for(int c=1; c<=r; c++)
		{
			printf("%i",c);
		}
		printf("\n");
	}
}

void q62()
{
	/*  12345
	     1234
	      123
	       12
	        1  */
	        

	for(int r=5; r>=1; r--)
	{
		for(int j=r; j<5; j++)
		{
			printf(" ");
		}
		for(int c=1; c<=r; c++)
    	{
    		printf("%i",c);
		}
		printf("\n");
	}
}

void q63()
{
	/*  1
	    21
	    321
	    4321
	    54321 */
	    
	for(int r=1; r<=5; r++)
	{
		
		for(int c=r; c>=1; c--)
		{
			printf("%i",c);
		}
		printf("\n");
	}
}

void q64()
{
		/*      1
	           21
	          321
	         4321
	        54321 */
	    
	for(int r=1; r<=5; r++)
	{
		for(int j=r; j<5; j++)
		{
			printf(" ");
		}
		for(int c=r; c>=1; c--)
		{
			printf("%i",c);
		}
		printf("\n");
	}
}

void q65()
{
		/*  54321
	        4321
	        321
	        21
	        1 */
	    
	for(int r=5; r>=1; r--)
	{
		for(int c=r; c>=1; c--)
		{
			printf("%i",c);
		}
		printf("\n");
	}
}

void q66()
{
		/*  54321
	         4321
	          321
	           21
	            1 */
	    
	for(int r=5; r>=1; r--)
	{
		for(int j=r; j<5; j++)
		{
			printf(" ");
		}
		for(int c=r; c>=1; c--)
		{
			printf("%i",c);
		}
		printf("\n");
	}
}

void q67()
{
	/*   5
	     45
	     345
	     2345
	     12345   */
	     
    for(int r=5; r>=1; r--)
    {
    	for(int c=r; c<=5; c++)
    	{
    		printf("%i",c);
		}
		printf("\n");
	}
}

void q68()
{
	/*       5
	        45
	       345
	      2345
	     12345   */
	     
    for(int r=5; r>=1; r--)
    {
    	for(int j=1; j<r; j++)
    	{
    		printf(" ");
		}
    	for(int c=r; c<=5; c++)
    	{
    		printf("%i",c);
		}
		printf("\n");
	}
}

void q69()
{
	/*  12345
	    2345
	    345
        45
	    5   */
	        
	for(int r=1; r<=5; r++)
    {
    	for(int c=r; c<=5; c++)
    	{
    		printf("%i",c);
		}
		printf("\n");
	}
}

void q70()
{
	/*  12345
	     2345
	      345
           45
	        5   */
	        
	for(int r=1; r<=5; r++)
    {
    	for(int j=1; j<r; j++)
    	{
    		printf(" ");
		}
    	for(int c=r; c<=5; c++)
    	{
    		printf("%i",c);
		}
		printf("\n");
	}
}

void q71()
{
	/* 56789
	   4567
	   345
	   23
	   1  */
	   
	for(int r=5; r>=1; r--)
	{
		for(int c=r; c<r+r; c++)
	    {
	    	printf("%i",c);
		}
		printf("\n");
	}
}

void q72()
{
		/* 56789
	        4567
	         345
	          23
	           1  */
	   
	for(int r=5; r>=1; r--)
	{
		for(int j=r; j<5; j++)
		{
			printf(" ");
		}
		for(int c=r; c<r+r; c++)
	    {
	    	printf("%i",c);
		}
		printf("\n");
	}
}

void q73()
{
	/*  1
	    10
	    101
	    1010
	    10101   */
	  
	for(int r=1; r<=5; r++)
	{
		for(int c=1; c<=r; c++)
		{
			if(c%2!=0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}

void q74()
{
	/*  1
	    10
	    101
	    1010
	    10101   */
	    
	
}
void q75()
{
	/*  1
	    00
	    111
	    0000
	    11111   */
	    
	for(int r=1; r<=5; r++)
	{
		for(int c=1; c<=r; c++)
		{
			if(r%2!=0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}    
	    
}

void q76()
{
	/*  1
	    00
	    111
	    0000
	    11111   */
	    
	
}

void q77()
{
	/*  1
	    01
	    010
	    1010
	    10101   */
	    
	int k=1;
	
	for(int r=1; r<=5; r++)
	{
		for(int c=1; c<=r; c++)
		{
			if(k==1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			k = k*-1;
		}
		printf("\n");
	}
}

void q78()
{
	/*  1
	    01
	    010
	    1010
	    10101   */
	    
	
}

void q79()
{
	/*  1
	    11
	    101
	    1001
	    11111   */
}

void q80()
{
	/* 1
	   123
	   12345
	   1234567
	   12345689   */
	   
	for(int r=1; r<=5; r++)
	{
		for(int c=1; c<r+r; c++)
		{
			printf("%i",c);
		}
		printf("\n");
	}
}

void q81()
{
	/*        1
	        123
	      12345
	    1234567
	   12345689   */
	   
	for(int r=1; r<=5; r++)
	{
		for(int j=r; j<5; j++)
		{
			printf("  ");
		}
		for(int c=1; c<r+r; c++)
		{
			printf("%i",c);
		}
		printf("\n");
	}
}


void q87()
{
	int no1, no2;
	
	printf("\nenter No1 : ");
	scanf("%i",&no1);
	printf("\nenter No2 : ");
	scanf("%i",&no2);
	
	if(no1==no2)
	{
		printf("\nThey Are Equal");
	}
	else
	{
		printf("\nThey Are Not Equal");
	}
}

void q88()
{
	int age;
	
	printf("\nEnter Candidate Age : ");
	scanf("%i",&age);
	
	if(age>=18)
	{
		printf("\nCandidate is Eligilble for Vote");
	}
	else
	{
		printf("\nCandidate is Not Eligilble for Vote");
	}
}


void q89()
{
	int m, n;
	
	printf("\nEnter Value Of An Integer M : ");
	scanf("%i",&m);
	
	if(m>0)
	{
		n=1;
	}
	else if(m<0)
	{
		n=-1;
	}
	else
	{
		n=0;
	}
	printf("\n%i",n);
}

void q90()
{
	char ch;
	
	printf("\nEnter Any Character : ");
	scanf("%c",&ch);
	
	if(ch>='a'&&ch<='z' || ch>='A'&&ch<='Z')
	{
		printf("\nIt is Alphabet");
	}
	else if(ch>=0 && ch>=0)
	{
		printf("\nIt is Number");
	}
	else
	{
		printf("\nIt is Special Character");
	}
}

void q91()
{
	char ch;
	
	printf("\nEnter Any Alphabet : ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		if(ch=='a' ||ch=='A' || ch=='e'||ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
	    {
	    	printf("\nIt is a Vowel");
		}
 	    else 
 	    {
 	        printf("\nIt is Consonant");	
		}
	}
	else
	{
		printf("\nNot Posibale");
	}
}

void q92()
{
	int c_amt, s_amt;
	float p_amt, l_amt;
	
	printf("\nEnter Cost Amount = ");
	scanf("%i",&c_amt);
	printf("\nEnter Selling Amount = ");
	scanf("%i",&s_amt);
	
	p_amt = s_amt-c_amt;
	l_amt = c_amt-s_amt;
	
	if(s_amt>c_amt)
	{
		printf("\nProfit = %f",p_amt);
	}
	else if(s_amt<c_amt)
	{
		printf("\nLoss = %f",l_amt);
	}	
	else
	{
	    printf("\nNo Profit No loss");
	}
}

void q93()
{
	int no;
	
	printf("\nEnter Any Day Number : ");
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
	
}
