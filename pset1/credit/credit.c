#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
// Add the sum to the sum of the digits that weren’t multiplied by 2.
// If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

int main(void)
{
    long getNumber;
    do
    {
        getNumber = get_long("Enter CC: ");
    }
    while (getNumber < 0);
    
    int lastNumber = getNumber % 10;
    
    
}