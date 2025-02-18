#include<stdio.h>
void main()
{
    int customerid,customername[50],subcharge;
    float unitconsumed,billamount;
    printf("enter the customer ID : ");
    scanf("%d",&customerid);
    printf("enter the customer name :");
    scanf("%s",&customername);
    printf("number of unit consumed by the customer:");
    scanf("%f",&unitconsumed);
        if(unitconsumed<=199)
    {
        billamount=unitconsumed*1.20;
        printf("\n the customer want to paid the bill amount rs : %.2f",billamount);
    }
    else if(unitconsumed>=200&&unitconsumed<400)
    {
        billamount=unitconsumed*1.50;
        printf("\n the customer want to paid the bill amount rs : %.2f",billamount);
    }
    else if(unitconsumed>=400&&unitconsumed<600)
    {
        billamount=unitconsumed*1.80;
        printf(" \nthe customer want to paid the bill amount rs : %.2f",billamount);
    }
    else if(unitconsumed>=600)
      {
        billamount=unitconsumed*2.00;
        printf(" \nthe customer want to paid the bill amount rs : %f",billamount);
     }
   if(billamount>400)
      {
        subcharge=billamount*0.15;
        billamount=billamount+subcharge;
        printf("\n the customer want to paid the bill amount with including subcharge rs : %f",billamount);

    }
     printf("\n\n\n\n\n\n                  electricity bill details\n");
     printf("CUSTOMER ID : %d\n",customerid);
     printf("CUSTOMER NAME :%s\n",customername);
     printf("NUMBER OF UNIT CONSUMED BY THE CUSTOMER :%.2f\n",unitconsumed);
     printf("THE CUSTOMER WANTS TO PAID THE BILL AMOUNT RS:%.2f\n",billamount);
     if(billamount<100)
    {
        printf("\n THE CUSTOMER WANT TO PAID THE TOTAL BILL AMOUNT RS:100");

    }












}
