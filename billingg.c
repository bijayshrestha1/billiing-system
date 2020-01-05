#include<stdio.h>
#include<conio.h>
 main()
{
char a[20];
int price =0,scharge=0,total=0;
printf("\n billing system for the himalayan java coffee- hjc \n");
printf("\n*************************************************\n");
printf("\n enter the name of the item you want to eat in coffee shop");
scanf("%s",&a);
printf("\n enter the price of the item you want to eat in coffee shop ");
scanf("%d",&price);
scharge=  ((price/100)*18);
total=price+scharge;
printf("\n\n himalayan java coffee \n\n");
printf("\n**************************************************************\n");
printf("\nItem Price Scharge Total\n");
printf("\n%s %d %d %d\n",a,price,scharge,total);
printf("\n**************************************************************\n");
printf("\n thank you visit again \n");
return(0);
}






	
