//Create a Food billing system
#include<stdio.h>
int main()
{
    int code, qty;//food item sr.no and quantity
    float rate, amt;//food item amount per plate
    float totalamt;//total amount for all item order
    char placeMore;//place more food item order

    do//do-while loop for place more order if yes or no
    {
        system("cls");//clear screen 
        printf("================================\n");//design box
        printf("\t    MENU\n");// food item menu
        printf("================================\n\n");//design box
        printf("1.Pizza\t\t\tPrice = 180rs/pcs\n");//food item sr.no,name and price
        printf("2.Burger\t\tPrice = 100rs/pcs\n");//food item sr.no,name and price
        printf("3.Dosa  \t\tPrice = 120rs/pcs\n");//food item sr.no,name and price
        printf("4.Idli  \t\tPrice = 50rs/pcs\n");//food item sr.no,name and price

        printf("\nPlease Enter Your Choose... : ");//enter food item sr no.
        scanf("%d", &code);
        printf("\nEnter the quantity : ");//enter food item quantity
        scanf("%d", &qty);    

        switch(code)//keyword use for user choice    
        {
            case 1 : rate = 180;//food item pizza price/rate per plate
                     printf("You have selected Pizza.");//Food item selected msg before enter fodd item sr no.
                     break;//this case stop for use break otherwise case going to directly next case.
            case 2 : rate = 100;//food item burger price/rate per plate
                     printf("You have selected Burger.");
                     break;
            case 3 : rate = 120;//food item dosa price/rate per plate
                     printf("You have selected Dosa.");
                     break;
            case 4 : rate = 50;//food item idli price/rate per plate
                     printf("You have selected Idli.");
                     break;
                                            
    }
    
    amt = rate*qty;//food item rate per plate * quantity
    printf("\nAmount : %.2f", amt);
    totalamt = amt + totalamt;//total amount for all order formula
    printf("\nTotal Amount is : %.2f",totalamt);//total amount for all order
    printf("\nDo you want place one more orders ? y & n : ");//place more food item order?
    placeMore = getche();//single character function without wait enter key(it means yes[y] or no[n].)

    }while(placeMore == 'y' || placeMore == 'Y');//loop for if user enter yes than again show the food items menu and place more food item order otherwise enter 'n' means stop and generate final bill.
    printf("\n================================\n");//design box
    printf("\nYour Final Bill Amount = %.2f",totalamt);//if user can't get any ordr so generate final bill.
    printf("\n================================\n\n");//design box
    return 0;
    
}














/*
#include<stdio.h>
//define structure
struct Food // Product infomation
{
    int prodId;//product id
    char prodNm;//product name
    int rate;//product rate
    int qty;//purchase product qty
}f[5];//define object for five category food product
int main()
{
    int i;
    for(i = 0; i < 2; i++)
    {
    printf("\nEnter Food Item Id : ");
    scanf("%d", &f[i].prodId);
    printf("\nEnter Food Item Name : ");
    scanf("%s", &f[i].prodNm);
    printf("\nEnter Food Item Rate : ");
    scanf("%d", &f[i].rate);
    printf("\nEnter Food Item Quantity : ");
    scanf("%d", &f[i].qty);
    }
    printf("\n--------------------Product Details------------------\n");
    printf("\nFood Item ID\tFood Item Name\tFood Item Rate\tFodd item Qty");
    for(i = 0; i < 2; i++)
    {
        printf("%d\t%s\t%d\t%d",f[i].prodId,f[i].prodNm,f[i].rate,f[i].qty);
        printf("\n");
    }
   // printf("\n-------------------------------------------------------");
    return 0;
} */
