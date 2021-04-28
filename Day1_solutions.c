#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

 // Declare second integer, double, and String variables.
    int j;
    double e;
    char t[500];
    
//temp variable to clear buffer
    char temp;
        
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &j);
    scanf("%lf", &e);
    scanf("%c", &temp); //temp statement to clear buffer
    scanf("%[^\n]", t); //To read string with spaces
    
    // Print the sum of both integer variables on a new line.
    printf("%d \n", i+j);
    // Print the sum of the double variables on a new line.
    printf("%.1lf \n", d+e);
    // Concatenate and print the String variables on a new line
    printf("%s%s",s,t);
    // The 's' variable above should be printed first.


    return 0;
}
