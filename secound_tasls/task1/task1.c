// atm simulator 


#include <stdio.h>
#include "fucntions.h"
#include "STD_TYPES.h"

#define deposit        1
#define withdraw       2
#define check_balance  3
#define exit_program   4

int main() 
{
    f32 balance = 5000.0 ; 
    u8  exit_status = 'c' ;
    u16  choice = 0 ;
    u16 amount = 0;
    printf("welcome to the ATM\npleas choose what do you want to do\n");
    do
    {
        choice = 0;
        amount = 0;
        printf("1.deposit\n2.withdraw\n3.check balance\n4.exit\n");
        scanf(" %hd" , &choice);
        switch(choice)
        {
            case deposit : 
                printf("you choosed deposit\ninsert the amount to deposit : ");
                scanf(" %hd" , &amount);
                processTransaction(&balance , choice , amount);
                break;
            case withdraw : 
                printf("you choosed withdraw\ninsert the amount to withdraw : ");
                scanf(" %hd" , &amount);
                processTransaction(&balance , choice , amount);
                break;
            case check_balance : 
                processTransaction(&balance , choice , amount = 0);
                break;
            case exit_program :
                printf("exiting program\n");
                processTransaction(&balance , choice , amount = 0);
                exit_status = 'e';
                break;
            default :
                printf("invalid choise\n");
                break;
        }
    } while (exit_status != 'e' && exit_status != 'E');
    return 0;
}