#include <stdio.h>


int main(){
    char x=0;
    int account=0;
    int* pointer;
    int BankAccount[4][50];
    int count=900;
    int i=0;
    
    /*
     rows: number of the bank account, activ/disactive acount, anount of money in the account, interest of the acount.
     */
    for(i=0; i<50; i++)
    {
        count++;
        BankAccount[0][i]=count;
        BankAccount[1][i]=-1;
    }

    printf("In this program you can do the folloeing function by anter the following char:");
    printf("O - open new account.\n");
    printf("B - check the amount of money in the acoount.\n");
    printf("D - add money from the acount.\n");
    printf("W - take money from the acount.\n");
    printf("C - close the acount.\n");
    printf("I - add interest to the acount.\n");
    printf("P - print al the active acount.\n");
    printf("E - Exit the program\n");
    

    

    while(exist==false)
    {
        printf("Enter the number of the bank acount:");
        scanf("%d", &account);
        /*
         if the user ente anvalid number.
         */
        if(account<901 || account>950){
            printf("TE NUMBER NEED TO BETWEEN 901-950!\n ");
            printf("Enter the number of the bank acount: ");
            scanf("%d", &account);
        }
        printf("Enter transaction type:");
        scanf();
        /*
         E - Exit the program
         */
        if(x==67){
            break;
        }
        /*
         P - print al the active acount.
         */
        if(x==80){
            void ActiveAcount(int* pointer);
        }
        /*
         I - add interest money to the acount.
         */
        if(x==73){
            void InsertMonryAcount(int* pointer);
        }
        /*
         C - close the acount.
         */
        if(x==67){
            void CloseAcount(int* pointer);
        }
        /*
         W - take money from the acount.
         */
        if(x==87){
            void TakeMoney (int* pointer);
        }
        /*
         D - add money from the acount.
         */
        if(x==68){
            void AddMoney (int* pointer);
        }
        /*
         B - check the amount of money in the acoount.
         */
        if(x==66){
             void CeckAccount (int* pointer);
        }
        /*
         O - open new account.
         */
        if(x==79){
            void
        }
        /*
         if the user enter unvalid char.
         */
        else{
            printf("\n");
            printf("UNVALID CHAR!");
            printf("In this program you can do the folloeing function by anter the following char: \n");
            printf("O - open new account.\n");
            printf("B - check the amount of money in the acoount.\n");
            printf("D - add money from the acount.\n");
            printf("W - take money from the acount.\n");
            printf("C - close the acount.\n");
            printf("I - add interest to the acount.\n");
            printf("P - print al the active acount.\n");
            printf("E - Exit the program\n");
            printf("Enter the number of the bank acount: ");
            scanf("%d", &account);
        }
        
    }
    return 0;
}

