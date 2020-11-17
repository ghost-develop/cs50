#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>

// Start
int main(int argc, string argv[])
{
    // Checks if there are two command line arguments
    if (argc == 2)
    {
        char cipher = '\0';
        // Start of the loop that iterates through second cmd line argument
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!isdigit(argv[1][i]))
            {
                return 0;
            }
            // Checks if the second cmd line argument is digit
            if (isdigit(argv[1][i]))
            {
                for (int k = 0; k < strlen(argv[1]); k++)
                {
                    if (!isdigit(argv[1][k]))
                    {
                        return 1;
                    }
                }
                // Creates variable that turns the argument into an int
                int key = atoi(argv[1]);
                string getText = get_string("Enter Text: ");
                printf("ciphertext: ");

                // Start of the loop that iterates through the entered text
                for (int j = 0; j < strlen(getText); j++)
                {
                    if (isalpha(getText[j]))
                    {
                        if (islower(getText[j]))
                        {
                            printf("%c", (((getText[j] - 97) + key) % 26) + 97);
                        }
                        else if (isupper(getText[j]))
                        {

                            printf("%c", (((getText[j] - 65) + key) % 26) + 65);
                        }
                    }
                    else
                    {
                        printf("%c", getText[j]);
                    }
                }
                printf("\n");
                return 0;
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}