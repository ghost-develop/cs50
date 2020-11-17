#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, column, spaces;
    do 
    {
        // Ask for integer
        height = get_int("Height: ");
    }
    // Conditional that checks if the integer is less than 1 or greater than 8
    while(height < 1 || height > 8);
    
    
    // Start of the main for loop that creates rows
    for (row = 0; row < height; row++) 
    {
        for (spaces = 0; spaces < height - row -1; spaces++) 
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++) 
        {
            printf("#");
        }
        printf("\n");
    }
}