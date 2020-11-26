#include "MyBank.h"

/*
P - print al the active acount.
 @param array adrres
 @param bank account
*/
void ActiveAcount(int* pointer, int number)
{
    int *temp=&pointer; //the adress of the array.
    int acco=number-901;
    int adr=&((pointer)+3*acco*sizeof(int));//adress of the flag acount
    
    //if this acount is already active
    if(*adr==1)
    {
        printf("Sorry, this account is already active, try diffrent account.\n");
        return;
    }
    *adr=1;
}


/*
I - add interest money to the acount.
*/
void InsertMonryAcount(int* pointer, int money, int number)
{
    int *temp=&pointer; //the adress of the array.
    int acco=number-901;
    int adr=&((pointer)+3*acco*sizeof(int));//adress of the flag acount
    if(*adr==-1)
    {
        printf("Sorry, this account is already is not  active.\n");
        return;
    }
    int adr=&((pointer)+3*acco*sizeof(int)+1);//adress of the amount of money in the account.
    
    *ars=(*adr)+money;
}


/*
C - close the acount.
*/
void CloseAcount(int* pointer,int number)
{
    int *temp=&pointer; //the adress of the array.
    int acco=number-901;
    int adr=&((pointer)+3*acco*sizeof(int));//adress of the flag acount
    if(*adr==-1)
    {
        printf("Sorry, this account is already is not  active.\n");
        return;
    }
    int adr=&((pointer)+3*acco*sizeof(int)+1);//adress of the amount of money in the account.
    printf("money in the account: %d \n", &adr);
    
    //close the acccount:
    *adr=&((pointer)+3*acco*sizeof(int));
    *adr=-1;
    printf("The account closed succesfuly.\n");
    }

/*
W - take money from the acount.
*/
void TakeMoney (int* pointer, int number, int money)
{
    int *temp=&pointer; //the adress of the array.
    int acco=number-901;
    int adr=&((pointer)+3*acco*sizeof(int));//adress of the flag acount
    if(*adr==-1)
    {
        printf("Sorry, this account is not active. \n");
        return;
    }
    adr=&((pointer)+3*acco*sizeof(int)+1);//adress of the flag acount
    int x=*adr;
    printf("the amount of money befor takr money: %d \n", &x);
    //if there is not eneagh money in the account.
    if(x<money){
        printf("Sorry there is not enough money in this account.\n");
        return;
    }
    int x=(*adr)-money;
    *adr=x;
    printf("amount of money that left after taking money: %d \n", &x );
}

/*
 D - add money from the acount.
 */
void AddMoney (int* pointr, int number, int money)
{
    int *temp=&pointer; //the adress of the array.
    int acco=number-901;
    int adr=&((pointer)+3*acco*sizeof(int));//adress of the flag acount
    if(*adr==-1)
    {
        printf("Sorry, this account is not active.\n");
        return;
    }
    adr=&((pointer)+3*acco*sizeof(int)+1);//adress of the flag acount
    printf("the amount of money befor adding money: %d \n" &(*adr));
    int x=*adr+money;
    *adr=x;
    printf("the amount of money after adding money: %d \n" &(*adr));
}



/*
 B - check the amount of money in the acoount.
 */
void CeckAccount (int* pointer, int number)
{
    int *temp=&pointer; //the adress of the array.
      int acco=number-901;
      int adr=&((pointer)+3*acco*sizeof(int));//adress of the flag acount
      if(*adr==-1)
      {
          printf("Sorry, this account is not active.\n");
          return;
      }
    adr=&((pointer)+3*acco*sizeof(int)+1);//adress of the flag acount
    printf("the amount of money int the account: %d \n" &(*adr));
}

/*
O - open new account.
 */
void OpenAccount(int* pointer)
{
    int *temp=&pointer; //the adress of the array.
    int acco=number-901;
    int adr=&((pointer)+3*acco*sizeof(int));//adress of the flag acount
    if(*adr==-1)
    {
        printf("Sorry, this account is not active.\n");
        return;
    }
    *adr=1;
     printf("the account opened, succesfuly.\n");
}

