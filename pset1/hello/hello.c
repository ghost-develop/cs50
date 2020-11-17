#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // Prompts the user for their name.
    string name = get_string("Name?\n");
    // Returns a personalized hello phrase.
    printf("Hello, %s\n", name);
    
}