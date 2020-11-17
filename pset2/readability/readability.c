#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    // Grabs user input for the text
    string getText = get_string("Text: ");
    // Creates a variable that equals to the length of the text
    int length = strlen(getText);
    // Creates counters for counting spaces and letters
    int wordCounter = 1;
    int letterCounter = 0;
    int sentenceCounter = 0;

    // For loop that iterates through the length of the text, grabbed from the user.
    for (int i = 0; i < length; i++)
    {
        // Uses the "tolower()" function to automatically lowercase the text, that way my conditionals doesn't have to check for uppercase letters.
        getText[i] = tolower(getText[i]);

        // Conditional that checks if the characters are letters and omits puncuation.
        if (getText[i] >= 'a' && getText[i] <= 'z')
        {
            // If conditional above is true, update the letterCounter +1
            letterCounter++;
        }
        // Conditional that checks if the character is a space
        else if (isspace(getText[i]))
        {
            // If conditional is false and the character is a space, update the spaceCounter +1
            wordCounter++;

        }
        else if (getText[i] == '!' || getText[i] == '.' || getText[i] == '?')
        {
            sentenceCounter++;
        }
    }

    // Plugging my numbers into the formula
    float grade = 0.0588 * (100 * (float) letterCounter / (float) wordCounter) - 0.296 * (100 * (float) sentenceCounter / (float) wordCounter) - 15.8;
    
    // Rounding the float value of grade 
    grade = round(grade);
    
    // Converting grade into an int
    int intGrade = (int)grade;


    // Conditionals to check for the reading level
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", intGrade);
    }

}



