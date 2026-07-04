 #include <stdio.h>
int main(){
    char name[50];
    int accountno,choise;
    float balance=31520,amount;
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Account Number: ");
    scanf("%d",&accountno);
     printf("\n_________________________________\n");
        printf("BANK MANAGMENT SYSTEM\n");
        printf("__________________________________\n");
        printf("Account Holder: %s\n",name);
        printf("Account Number: %d\n",accountno);
    do
    {
       
        printf("\n1-Show Balance\n2-Debited Amount\n3-Credited Amount\n4-Exit\nEnter Your Choise: ");
        scanf("%d",&choise);
        switch (choise)
        {
        case  1:
             printf("\nMr %s your balance is = %.2f",name,balance);
            break;
        case 2:
            printf("Enter Amount: ");
            scanf("%f",&amount);
            if (amount<=balance)
            {
                 balance=balance-amount;
                 printf("Amount Debited Successfully.");
            }
            else
            printf("Insufficient Balance.");
            break;
        case 3:
            printf("Enter Amount: ");
            scanf("%f",&amount);
            balance+=amount;
            printf("Amount added successfully.");
            break;
        case 4:
            printf("Thank You %S",name);
            break;
            
        
        default:
            printf("Invalid choise");
            break;
        }
    } while (choise!=4);
    
    return 0;
}