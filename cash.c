#include <cs50.h>
#include <stdio.h>

int main(void){

    float change;
    int numberOfCoins = 0;
    int numberOf25 = 0;
    int numberOf10 = 0;
    int numberOf5 = 0;
    int numberOf1 = 0;

    do {
        change = get_float("Change Owed: ");
    } while (change < 0.0);


    printf("%f \n", change);
    do
    {
        if (change >= 0.249){
            change = change - 0.25;
            numberOfCoins++;
            numberOf25++;

        }
        else if (change >= 0.099)
        {
            change = change - 0.10;
            numberOfCoins++;
            numberOf10++;

        }
        else if (change >= 0.049)
        {
            change = change - 0.05;
            numberOfCoins++;
            numberOf5++;

        }
        else if (change >= 0.009)
        {

            numberOfCoins++;
            numberOf1++;
            change = change - 0.01;

        }
        else
        {
            break;
        }
    }
    while (change > 0.00);

    printf("%i \n ", numberOfCoins);
}