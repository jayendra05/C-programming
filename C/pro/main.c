#include <stdio.h>
#include <stdlib.h>

int main()
{
    int table,choices,item,choice,i,sum=0,amount,account_no,pin,mode,pay,bal,show;
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
    // for noodle
    printf(" ___________________________________________________________\n");
    printf("|     VEG. Noodle          |         Non VEG. Noodle         |\n");
    printf("|__________________________|_________________________________|\n");
    printf("|15.Veg.Noodle       -80   |  18.Egg Noodle            -120  |\n");
    printf("|16.Schezwan Noodle  -100  |  19.Chicken Egg Noodle    -140  |\n");
    printf("|17.Veg.Hakka Noodle -100  |  20.Chicken Hakka Noodle  -140  |\n");
    printf("|__________________________|_________________________________|\n");
//___________________________________________________________________________
printf("\n");
printf("\n");
printf("ENTER NUMBER OF ITEM YOU WANT TO HAVE:");
scanf("%d",&item);
printf("\n");
printf("\n");
for (int i=1;i<=item;i++)
{
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&choice);

    switch(choice)
    {

    case 1:
        printf("SIR! You have order Tomato soup and cost is 80\n");
        choices=80;
        break;

     case 2:
        printf("SIR! You have order Mushroom soup and cost is 80\n");
        choices=80;
         break;

    case 3:
        printf("SIR! You have order Palak soup and cost is 80\n");
        choices=80;
         break;

    case 4:
        printf("SIR! You have order Chicken clear soup and cost is 100\n");
        choices=100;
         break;

    case 5:
        printf("SIR! You have order Mutton clear soup and cost is 100\n");
        choices=100;
         break;

    case 6:
        printf("SIR! You have order crab soup and cost is 100\n");
        choices=100;
         break;

    case 7:
        printf("SIR! You have order Steam Rice and cost is 80\n");
        choices=80;
         break;

    case 8:
        printf("SIR! You have order Masala Rice and cost is 100\n");
        choices=100;
         break;

    case 9:
        printf("SIR! You have order Veg Pulav and cost is 100\n");
        choices=100;
         break;

    case 10:
        printf("SIR! You have order Veg Biryani and cost is 120\n");
        choices=120;
         break;

   case 11:
        printf("SIR! You have order Chicken Rice and cost is 120\n");
        choices=120;
         break;

    case 12:
        printf("SIR! You have order Fish Biryani and cost is 140\n");
        choices=140;
         break;

    case 13:
        printf("SIR! You have order Egg's Biryani and cost is 100\n");
        choices=100;
         break;

    case 14:
        printf("SIR! You have order crab Biryani and cost is 120\n");
        choices=120;
         break;

    case 15:
        printf("SIR! You have order Veg.Noodle and cost is 80\n");
        choices=80;
         break;

    case 16:
        printf("SIR! You have order Schezwan Noodle and cost is 100\n");
        choices=100;
         break;

   case 17:
        printf("SIR! You have order Veg.Hakka Noodle and cost is 100\n");
        choices=100;
         break;

   case 18:
        printf("SIR! You have order Egg Noodle and cost is 120\n");
        choices=120;
         break;

  case 19:
        printf("SIR! You have order Chicken Egg Noodle and cost is 140\n");
        choices=140;
         break;

  case 20:
        printf("SIR! You have order Chicken Hakka Noodle and cost is 140\n");
        choices=140;
         break;



    default:
    printf("SORRY SIR! WE DON'T HAVE THIS ITEM \n \n");
    printf("SIR ENTER YOUR CHOICE AGAIN:");
    scanf("%d",&choice);




    switch(choice)
    {
            case 1:
        printf("SIR! You have order Tomato soup and cost is 80\n");
        choices=80;
        break;

     case 2:
        printf("SIR! You have order Mushroom soup and cost is 80\n");
        choices=80;
         break;

    case 3:
        printf("SIR! You have order Palak soup and cost is 80\n");
        choices=80;
         break;

    case 4:
        printf("SIR! You have order Chicken clear soup and cost is 100\n");
        choices=100;
         break;

    case 5:
        printf("SIR! You have order Mutton clear soup and cost is 100\n");
        choices=100;
         break;

    case 6:
        printf("SIR! You have order crab soup and cost is 100\n");
        choices=100;
         break;

    case 7:
        printf("SIR! You have order Steam Rice and cost is 80\n");
        choices=80;
         break;

    case 8:
        printf("SIR! You have order Masala Rice and cost is 100\n");
        choices=100;
         break;

    case 9:
        printf("SIR! You have order Veg Pulav and cost is 100\n");
        choices=100;
         break;

    case 10:
        printf("SIR! You have order Veg Biryani and cost is 120\n");
        choices=120;
         break;

   case 11:
        printf("SIR! You have order Chicken Rice and cost is 120\n");
        choices=120;
         break;

    case 12:
        printf("SIR! You have order Fish Biryani and cost is 140\n");
        choices=140;
         break;

    case 13:
        printf("SIR! You have order Egg's Biryani and cost is 100\n");
        choices=100;
         break;

    case 14:
        printf("SIR! You have order crab Biryani and cost is 120\n");
        choices=120;
         break;

    case 15:
        printf("SIR! You have order Veg.Noodle and cost is 80\n");
        choices=80;
         break;

    case 16:
        printf("SIR! You have order Schezwan Noodle and cost is 100\n");
        choices=100;
         break;

   case 17:
        printf("SIR! You have order Veg.Hakka Noodle and cost is 100\n");
        choices=100;
         break;

   case 18:
        printf("SIR! You have order Egg Noodle and cost is 120\n");
        choices=120;
         break;

  case 19:
        printf("SIR! You have order Chicken Egg Noodle and cost is 140\n");
        choices=140;
         break;

  case 20:
        printf("SIR! You have order Chicken Hakka Noodle and cost is 140\n");
        choices=140;
         break;
    }

    }
   // else
    //{
      //  printf("SORRY SIR! WE DON'T HAVE THIS ITEM\n");
    //}
    printf("\n");
    printf("\n");
    sum=sum+choices;

}
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
    printf("THE AMOUNT PAID BY THE USER:");
    scanf("%d",&amount);

    switch(amount)
    {
        case 0:
            printf("SIR PAY THE BILL");
            break;
        default:
            printf("\n");
            printf("\n");

            bal=amount-sum;
            show=-(amount-sum);
            if(bal>0)
            {
             //   printf("THE AMOUNT RETURN TO USER IS:%d\n",-(amount-sum));
                pay=0;
            }
            else if(bal<0)
            {
             //   printf("SIR YOU HAVE TO GIVE MORE AMOUNT :%d\n",-(amount-sum));
                pay=1;
            }


            switch(pay)
            {
            case 0:
                printf("THE AMOUNT RETURN TO USER IS:%d\n",show);
                break;
            case 1:
                printf("SIR YOU HAVE TO GIVE MORE AMOUNT :%d\n",show);

                less:
                     printf("THE AMOUNT PAID BY THE USER AGAIN:");
                     scanf("%d",&amount);
                     bal=amount-sum;

//                     if(amount-sum<0)
//                     {
//                        printf("SIR YOU HAVE TO PAY AGAIN:%d \n \n",bal);
//                        printf("THE AMOUNT PAID BY THE USER AGAIN:");
//                        scanf("%d",&amount);
//                        bal=amount-sum;
//                     }
                     break;
                more:
                    printf("THE AMOUNT RETURN TO USER IS:%d\n",show);
                    break;
                if((amount-sum>0))
                {
                    goto more;
                }
                while(bal<0)
                    {
                        goto less;
                    }
//                scanf("%d",&amount);
//                switch(pay)
//            {
//            case 0:
//                printf("THE AMOUNT RETURN TO USER IS:%d\n",-(amount-sum));
//                break;
//            case 1:
//                printf("SIR YOU HAVE TO GIVE MORE AMOUNT :%d\n",-(amount-sum));
//
//            }

            }


}
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
    printf("payment successful......................................");

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
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}

