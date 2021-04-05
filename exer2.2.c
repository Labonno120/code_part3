#include<stdio.h>
int main()
{
    float price,price_in_paise;
   // int price_in_paise,;
    printf("Enter the price:");
    scanf("%f",&price);
    price_in_paise=100*price;
    printf("price in paise:%f",price_in_paise);
}
