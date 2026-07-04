#include <stdio.h>
int main(){
    char name;
    int accountno,chose;
    float balance=10000,amount;
    printf("Enter Account Holder Name: "), scanf(" %[^\n]", name);
    printf("Enter Account Number: "), scanf("%d",&accountno);
    while (0)
    {
        printf("%s\n",name);
        printf("%d\n",&accountno);
        printf("\n1-Show Balance\n2-Debited Amount\n3-Credited Amount\n4-Exit\nEnter Your Choise: ");
        scanf("%d",&chose);
        switch ( chose)
        {
        case  1:
            printf("%.2f",balance);
            break;
        case 2:
            printf("Enter amount: ");
            if ( amount<=balance)
            {
                 balance-=amount;
                 printf("Amount Debited Successfully.");
            }
            break;
        case 3:
        printf("Enter amount: ");
        balance+=amount;
        printf("Amount added successfully.");
        break;
        case 4:
        printf("Thank You.");
        break;
        
        default:
        printf("INVALID CHOISE.");
            break;
        } 
        if (chose==4)
        {
             printf("Good Bye");
             break;
        }
        
        
    }
    
    return 0;
}