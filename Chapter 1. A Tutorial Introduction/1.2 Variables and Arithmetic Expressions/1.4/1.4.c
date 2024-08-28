
#include <stdio.h>

/* print Celsius-Fahrenheit table for celsius = 0, 20, ..., 300; 
    floating-point version*/

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* lower limit of temperature table*/
    upper = 300;        /* upper limit */
    step = 20;          /* step size */

    printf("Celsius -> Fahrenheit conversion table\n\n"); /* Print out headign before table*/

    celsius = lower;
    while (celsius <= upper){
        fahr = (celsius * 9.0) / 5.0 + 32.0;
        printf("%10.0f %8.1f\n", celsius, fahr); /* Changed character width to allign with heading*/
        celsius = celsius + step;
    }
}