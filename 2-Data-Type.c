#include <stdio.h>

int main()
{
    // Create variables
    int myNum = 5;           // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character
    double myDoubleNum = 19.99; // Floating point number

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("%lf", myDoubleNum); 
    return 0;
}

/*
%d or %i = int
%f	= float
%lf	= double
%c = char
%s = Used for strings (text), which you will learn more about in a later chapter
*/

/*
int	= 2 or 4 bytes	
float = 4 bytes	
double = 8 bytes	
char = 1 byte	
*/