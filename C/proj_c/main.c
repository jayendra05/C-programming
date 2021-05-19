#include <stdio.h>
#include <stdlib.h>

int main()
{
    int table,choices,item,choice,i,sum=0,amount,account_no,pin,mode;
    printf("YOUR TABLE NUMBER:");
    scanf("%d",&table);
    printf("WHAT YOU LIKE TO ORDER SIR!\n");
    printf("OUR MENU CARD SIR!\n");
    //_________________________________________________________________________
    // for soup
    printf(" _____________________________________________________________\n");
    printf("|     SOUP VEG.            |        Non VEG. SOUP            |\n");
    printf("|__________________________|_________________________________|\n");
    printf("|1.Tomato soup       -80   |  4.Chicken clear soup     -100  |\n");
    printf("|2.Mushroom soup     -80   |  5.Mutton clear soup      -100  |\n");
    printf("|3.Palak soup        -80   |  6.crab soup              -100  |\n");
    printf("|__________________________|_________________________________|\n");
    // for rice
    printf(" ____________________________________________________________\n");
    printf("|     RICE & BIRYANI       |      Non RICE & BIRYANI         |\n");
    printf("|__________________________|_________________________________|\n");
    printf("|7.Steam Rice        -80   |  11.Chicken Rice          -120  |\n");
    printf("|8.Masala Rice       -100  |  12.Fish Biryani          -140  |\n");
    printf("|9.Veg Pulav         -100  |  13.Egg's Biryani         -100  |\n");
    printf("|10.Veg Biryani      -120  |  14.crab Biryani          -120  |\n");
    printf("|__________________________|_________________________________|\n");
// for noodle__________________________________________________________________
    printf(" ___________________________________________________________\n");
    printf("|     VEG. Noodle          |         Non VEG. Noodle         |\n");
    printf("|__________________________|_________________________________|\n");
    printf("|15.Veg.Noodle       -80   |  18.Egg Noodle            -120  |\n");
    printf("|16.Schezwan Noodle  -100  |  19.Chicken Egg Noodle    -140  |\n");
    printf("|17.Veg.Hakka Noodle -100  |  20.Chicken Hakka Noodle  -140  |\n");
    printf("|__________________________|_________________________________|\n");
//_____________________________________________________________________________
printf("\n");
printf("\n");
d:
    printf("ENTER NUMBER OF ITEM YOU WANT TO HAVE:");
    scanf("%d",&item);

if(item==0 || item<=0)
{
    printf("SIR YOU HAVE TO ORDER SOME THING \n");
    goto d;
}
//else if(item>=1)
//{
//    goto d;
//}
printf("\n");
printf("\n");
for (i=1;i<=item;i++)
{
    a:
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&choice);

    if(choice==1)
    {   printf("SIR! You have order Tomato soup and it's cost is 80\n");
        choices=80;
    }
    else if(choice==2)
    {
        printf("SIR! You have order Mushroom soup and it's cost is 80\n");
        choices=80;
    }
    else if(choice==3)
    {
        printf("SIR! You have order Palak soup and it's cost is 80\n");
        choices=80;
    }
    else if(choice==4)
    {
        printf("SIR! You have order Chicken clear soup it's and cost is 100\n");
        choices=100;
    }
    else if(choice==5)
    {
        printf("SIR! You have order Mutton clear soup it's and cost is 100\n");
        choices=100;
    }
    else if(choice==6)
    {
        printf("SIR! You have order crab soup and it's cost is 100\n");
        choices=100;
    }
    else if(choice==7)
    {
        printf("SIR! You have order Steam Rice and it's cost is 80\n");
        choices=80;
    }
    else if(choice==8)
    {
        printf("SIR! You have order Masala Rice and it's cost is 100\n");
        choices=100;
    }
    else if(choice==9)
    {
        printf("SIR! You have order Veg Pulav and it's cost is 100\n");
        choices=100;
    }
    else if(choice==10)
    {
        printf("SIR! You have order Veg Biryani and it's cost is 120\n");
        choices=120;
    }
    else if(choice==11)
    {
        printf("SIR! You have order Chicken Rice and it's cost is 120\n");
        choices=120;
    }
    else if(choice==12)
    {
        printf("SIR! You have order Fish Biryani and it's cost is 140\n");
        choices=140;
    }
    else if(choice==13)
    {
        printf("SIR! You have order Egg's Biryani and it's cost is 100\n");
        choices=100;
    }
    else if(choice==14)
    {
        printf("SIR! You have order crab Biryani and it's cost is 120\n");
        choices=120;
    }
    else if(choice==15)
    {
        printf("SIR! You have order Veg.Noodle and it's cost is 80\n");
        choices=80;
    }
    else if(choice==16)
    {
        printf("SIR! You have order Schezwan Noodle and it's cost is 100\n");
        choices=100;
    }
    else if(choice==17)
    {
        printf("SIR! You have order Veg.Hakka Noodle and it's cost is 100\n");
        choices=100;
    }
    else if(choice==18)
    {
        printf("SIR! You have order Egg Noodle and it's cost is 120\n");
        choices=120;
    }
    else if(choice==19)
    {
        printf("SIR! You have order Chicken Egg Noodle and it's cost is 140\n");
        choices=140;
    }
    else if(choice==20)
    {
        printf("SIR! You have order Chicken Hakka Noodle and it's cost is 140\n");
        choices=140;
    }
    else if(choice<=0 )
    {
        printf("SORRY SIR! WE DON'T HAVE THIS ITEM\n");
        goto a;
    }
    else if(choice>20)
    {
        printf("SORRY SIR! WE DON'T HAVE THIS ITEM\n");
        goto a;
    }
    else
    {
        printf("SORRY SIR! WE DON'T HAVE THIS ITEM\n");
    }
    sum=sum+choices;
    }
    printf("\n");
    printf("\n");

printf("\n");
printf("\n");
printf("PAYMENT MODE WILL BE CASH OR CARD\nFOR CASH PRESS 0 AND  FOR CARD PRESS 1:");
scanf("%i",&mode);
printf("\n");
printf("\n");
if(mode==0)
{
    printf("\n");
    printf("\n");
    printf("THE TOTAL IS AMOUNT:%d\n",sum);
    printf("\n");
    printf("\n");
    b:
    sum;
    if(amount>sum)
    {
        printf("THE AMOUNT WE HAVE TO PAID TO THE USER:");
        scanf("%d",&amount);
        printf("\n");
        printf("\n");
    }
    else if(amount<sum)
    {
        printf("THE AMOUNT PAID BY THE USER:");
        scanf("%d",&amount);
        printf("\n");
        printf("\n");
    }
    c:
    if(amount==0)
    {
       printf("SIR PAY THE BILL.\n");
    }

    //printf("THE AMOUNT RETURN TO USER IS:%d\n",amount-sum);
    if(amount>sum)
    {
        printf("THE AMOUNT WE HAVE TO RETURN  TO USER IS:%d\n",amount-sum);
        sum=amount-sum;
        goto b;
        sum=amount-sum;
    }
    else if(amount<sum)
    {
        printf("THE AMOUNT USER HAVE TO GIVE:%d\n",sum-amount);
        sum=sum-amount;
        goto b;
        sum=sum-amount;
    }
    if(amount==sum)
    {
        printf("THE USER HAVE PAID THE FULL MONEY\n");
    }
    else if(amount==0)
    {
        goto c;
    }
        sum;
}
else if(mode==1)
{
    printf("\n");
    printf("\n");
    printf("THE TOTAL IS AMOUNT:%d\n",sum);
    printf("ENTER YOUR ACCOUNT NUMBER:");
    scanf("%i",&account_no);
    printf("ENTER YOUR PIN:");
    scanf("%i",&pin);
    printf("\n");
    printf("\n");
    printf("payment successful");

}
else
{
    printf("Invalid mode of payment.");
}
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    return 0;
}
