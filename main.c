#include <stdio.h>
#include <stdlib.h>

int login()
{
    int correctpin=1234;
    int userpin;
    int count=1;

        for(count=1;count<=3;count++){
    //capture input of the user
    printf("please input your pin\n");
    scanf("%d", &userpin);

          //Pin Length verification
    //user pin verification
    if(userpin<999)
        {
        printf("pin too short,must be a four digit number\n");}
    else if(userpin>9999) {
        printf("pin too long,must be a four digit number\n");}
    else{
            if (userpin==correctpin)
                {
            printf("Access granted.\n");
                return 1;
                }

             else{
                    printf("Pin incorrect.\n");
            {
            printf("Too many attempts. System locked. \n");
        }
     }
    }
        }
    return 0;
}

int deposit(double *balance)
{
    double amount;
     printf("Deposit\n");
            printf("please enter amount to deposit:kshs. \n");
            scanf("%lf" , & amount);

        if (amount>0){
            *balance += amount;
             printf("Successfully deposited: Kshs.%.2lf\n", amount);
             printf("Your new balance is: Kshs.%.2lf", *balance);

                       }
        else{printf("Invalid amount!Deposit must be posituve.\n");
                               }
    return 0;
}

int withdrawal(double *balance)
{
    double amount;
    printf("Withdrawal\n");
            printf("Please enter amount to withdraw: kshs.\n");
            scanf("%lf",&amount);

        if(amount>0){
            if(amount<=*balance){
                *balance-=amount;
                 printf("Successfully withdrawn:ksh.%2lf\n",amount);
                 printf("Your new balance:kshs.%2lf\n",*balance);
                                   }
            else{printf("Insufficient Funds!Your balance is:kshs%.2lf",balance);}
                             }
            else{printf("Invalid amount!Withdrawal must be positive.\n");}

 return 0;
}

int menu (double *balance)
{
    int menu;
     while(menu !=4){
            //Ask user choose for menu input
            printf("choose an operation:\n 1.Balance Inquiry\n 2.Deposit\n 3.Withdrawal\n 4. Existing System\n");
            scanf("%d", &menu);

            switch(menu){
                case 1:
                       printf("Balance Inquiry\n");
                       printf("you current balance is: Kshs.%.2lf", *balance);
                       break;
                case 2:
                        deposit(balance);
                        break;

                case 3:
                        withdrawal(balance);
                       break;
                case 4:
                       printf("Exiting system\n");
                       printf("Thank you for using our ATM.");
                       break;
                default:
                       printf("Invalid choice\n");
          }
    }
    return 0;
}

int main()
{
    double balance=20000.0;

    if(login()== 0)
    {
        printf("Exiting system.\n");
    }
    else {
        menu(&balance);
    }
   return 0;
}
