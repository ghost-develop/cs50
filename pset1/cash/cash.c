#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) 
{
    // Declaring my coins
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int counter = 0;
    int coints;
    float getChange;
    
    // Asks for user input for a positive float
    do 
    {
        getChange = get_float("Change Owed: ");
    }
    while (getChange < 0);
    
    // Converts the float into an int
    int cents = round(getChange * 100);
    
    // While cents is greather than quarter, dime, nickel or penny, subtract the assigned number from the total cents, update the counter (number of coins), and continue until the total = 0. 
    while (cents >= quarter) 
    {
        cents -= 25;
        counter++;
    }
    while (cents >= dime) 
    {
        cents -= 10;
        counter++;
    }
    while (cents >= nickel) 
    {
        cents -= 5;
        counter++;
    }
    while (cents >= penny) 
    {
        cents -= 1;
        counter++;
    }
    printf("Coins: %i\n", counter);
    
}