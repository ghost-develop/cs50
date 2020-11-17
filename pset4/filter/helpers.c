#include "helpers.h"
#include <math.h>

// Extra function prototypes
int setMax(int rgb);

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    float average;
    int rounded;
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            // Storing the Red, Green and Blue values of each pixel for easier use
            int red = image[h][w].rgbtRed;
            int green = image[h][w].rgbtGreen;
            int blue = image[h][w].rgbtBlue;

            // Calculating the average of red, green and blue for each pixel and rounding the average
            average = (red + green + blue) / 3;
            rounded = round(average);

            // Inputting modified pixels back into the image
            image[h][w].rgbtRed = average;
            image[h][w].rgbtGreen = average;
            image[h][w].rgbtBlue = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    float average;
    float rounded;
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            // Storing Red, Green and Blue values of each pixel for easier use
            int red = image[h][w].rgbtRed;
            int green = image[h][w].rgbtGreen;
            int blue = image[h][w].rgbtBlue;

            // Adding Sepia formula to the averages and rounding.
            int sepRed = (round(.393 * red) + (.769 * green) + (.189 * blue));
            int sepGreen = (round(.349 * red) + (.686 * green) + (.168 * blue));
            int sepBlue = (round(.272 * red) + (.534 * green) + (.131 * blue));

            // Conditional that sets the average to 255 if the average is > 255
            int setRed = setMax(sepRed);
            int setGreen = setMax(sepGreen);
            int setBlue = setMax(sepBlue);

            // Inputs modified pixel value to a new image, creating the sepia filter
            image[h][w].rgbtRed = setRed;
            image[h][w].rgbtGreen = setGreen;
            image[h][w].rgbtBlue = setBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp;
    int wDivTwo = round(width/2);
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width / 2; w++)
        {
            tmp = image[h][w];
            image[h][w] = image[h][width - w -1];
            image[h][width - w - 1] = tmp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    
    return;
}





/* --------------------------   Extra functions   -------------------------- */

// Function that sets sepia max rgb value to 255 if value > 255
int setMax(int rgb)
{
    if (rgb > 255)
    {
        rgb = 255;
    }
    return rgb;
}