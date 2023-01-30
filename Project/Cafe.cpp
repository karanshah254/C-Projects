#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int ch,qty,amt,n_amt=0,id,c_gst,s_gst,tax,p_amt,x,q[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char y_n[10],nm[100],date[10], p[20][50]={"Cappuccino"," Caffe Latte","Caffe Americaano","Hazelnut Caffe Late","Hot Chocolate","Java Chip Frappuccino","Caramel Frappuccino","Mocha Frappuccino","Iced Caffe Late","Fererro Rocher Shake","Chilli Cheese Toast","Tandoori Paneer Sandwich","Vegetable Grill Sandwich","Mexican Grilled Sandwich","Peri Peri Grilled Sandwich","Margherita","Cheezy-7","Peri Peri Veg","Farm Villa","Tandoori Panner"};

	int price[20]={245,245,230,295,260,330,330,330,275,350,150,160,130,160,160,135,255,275,235,255};
	printf("\n\tWelcome to Barista Cafe ");
	printf("\nEnter Your Name : ");
	fflush(stdin);
	scanf("%[^\n]s",nm);
	printf("\nEnter Your Date : ");
	fflush(stdin);
	scanf("%[^\n]s",date);
	srand(time(NULL));
	id = rand();
    printf("\nOreder Id : %d",id);
    system("cls");
	
	
	
	l1:
	system("cls"); 
	printf("\n---------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\n|                                                                         Menu                                                                          |");
	printf("\n|-------------------------------------------------------------------------------------------------------------------------------------------------------|");
	printf("\n|            Hot Beverages           |           Cold Beverages             |                 Sandwiches                |             Pizza             |");
	printf("\n|------------------------------------|--------------------------------------|-------------------------------------------|-------------------------------|");
	printf("\n| 1. Cappuccino           245 Rs.    |  6. Java Chip Frappuccino  330 Rs.   |  11. Chilli Cheese Toast        150 Rs.   | 16. Margherita      135 Rs.   |");
	printf("\n| 2. Caffe Latte          245 Rs.    |  7. Caramel Frappuccino    330 Rs.   |  12. Tandoori Paneer Sandwich   160 Rs.   | 17. Cheezy-7        255 Rs.   |");
	printf("\n| 3. Caffe Americaano     230 Rs.    |  8. Mocha Frappuccino      330 Rs.   |  13. Vegetable Grill Sandwich   130 Rs.   | 18. Peri Peri Veg   275 Rs.   |");
	printf("\n| 4. Hazelnut Caffe Late  295 Rs.    |  9. Iced Caffe Late        275 Rs.   |  14. Mexican Grilled Sandwich   160 Rs.   | 19. Farm Villa      235 Rs.   |");
	printf("\n| 5. Hot Chocolate        260 Rs.    |  10. Fererro Rocher Shake  350 Rs.   |  15. Peri Peri Grilled Sandwich 160 Rs.   | 20. Tandoori Panner 255 Rs.   |");
	printf("\n---------------------------------------------------------------------------------------------------------------------------------------------------------");
	
	printf("\n\nEnter Your Choice : ");
	scanf("%i",&ch);
	x = ch-1;
	
	printf("\nEnter Qty : ");
	scanf("%i",&qty);
	
	if(ch==1)
    {
		amt = 245*qty+n_amt;
		printf("\nYou Choose Cappuccino");
		
		
	}
	else if(ch==2)
	{
		amt = 245*qty+n_amt;
		printf("\nYou Choosen Caffe Latte ");
	}
    else if(ch==3)
	{
		amt = 230*qty+n_amt;
		printf("\nYou Choose Caffe Americaano");
	}
	else if(ch==4)
	{
		amt = 295*qty+n_amt;
		printf("\nYou Choose Hazelnut Caffe Late ");
	}
	 else if(ch==5)
	{
		amt = 260*qty+n_amt;
		printf("\nYou Choose Hot Chocolate ");
	}
	else if(ch==6)
	{
		amt = 330*qty+n_amt;
		printf("\nYou Choose Java Chip Frappuccino ");
	}
	 else if(ch==7)
	{
		amt = 330*qty+n_amt;
		printf("\nYou Choose Caramel Frappuccin");
	}
	else if(ch==8)
	{
		amt = 330*qty+n_amt;
		printf("\nYou Choose Mocha Frappuccino  ");
	}
	 else if(ch==9)
	{
		amt = 275*qty+n_amt;
		printf("\nYou Choose Iced Caffe Late ");
	}
	else if(ch==10)
	{
		amt = 350*qty+n_amt;
		printf("\nYou Choose Fererro Rocher Shake ");
	}
	 else if(ch==11)
	{
		amt = 150*qty+n_amt;
		printf("\nYou Choose Chilli Cheese Toast");
	}
	else if(ch==12)
	{
		amt = 160*qty+n_amt;
		printf("\nYou Choose Tandoori Paneer Sandwich ");
	}
	 else if(ch==13)
	{
		amt = 130*qty+n_amt;
		printf("\nYou Choose Vegetable Grill Sandwich");
	}
	else if(ch==14)
	{
		amt = 160*qty+n_amt;
		printf("\nYou Choose Mexican Grilled Sandwich ");
	}
	 else if(ch==15)
	{
		amt = 160*qty+n_amt;
		printf("\nYou Choose Peri Peri Grilled Sandwich");
	}
	 else if(ch==16)
	{
		amt = 135*qty+n_amt;
		printf("\nYou Choose Margherita Pizza");
	}
	else if(ch==17)
	{
		amt = 255*qty+n_amt;
		printf("\nYou Choose Cheezy-7 Pizza");
	}
	 else if(ch==18)
	{
		amt = 275*qty+n_amt;
		printf("\nYou Choose Peri Peri Veg Pizza");
	}
	else if(ch==19)
	{
		amt = 235*qty+n_amt;
		printf("\nYou Choose Farm Villa Pizza ");
	}
	 else if(ch==20)
	{
		amt = 255*qty+n_amt;
		printf("\nYou Choose  Tandoori Panner Pizza");
	}
	else
	{
		printf("\nNot valid.....");
	}
	
	printf("\n\nDo You Want To Continue ? ");
	fflush(stdin);
	scanf("%[^\n]s",y_n);
    if(strcmp(y_n,"yes")==0)
    {
    	n_amt = amt;
    	goto l1;
	}
	else
	{
	   c_gst = amt*0.04;
	   s_gst = amt*0.04;
	   tax = c_gst+s_gst;
	   p_amt = amt+tax;
	   
	   printf("\n-------------------------------------------------------------------------------------------------------------------------");
	   printf("\n|                                                    Barista Cafe                                                       |");
	   printf("\n|-----------------------------------------------------------------------------------------------------------------------|");
	   
	   printf("\n| Customer Name    : %s",nm);
	   printf("\n| Date             : %s",date);
	   printf("\n| Order Id         : %i",id);
	   printf("\n| Item : %s",p[x]);
	   printf("\n| Amount           : %i",amt);
	   printf("\n|-----------------------------------------------------------------------------------------------------------------------|");
	   printf("\n| CGSt (4%%)       : %i",c_gst);
	   printf("\n| SGSt (4%%)       : %i",s_gst);
	   printf("\n| Tax              : %i",tax);
	   printf("\n|-----------------------------------------------------------------------------------------------------------------------|");
	   printf("\n| Total Amount     : %i",p_amt);
	    printf("\n|-----------------------------------------------------------------------------------------------------------------------|");
	}
	
	
	


}
