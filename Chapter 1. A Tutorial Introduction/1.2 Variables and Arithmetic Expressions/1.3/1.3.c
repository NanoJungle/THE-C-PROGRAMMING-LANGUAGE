
#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; 
    floating-point version*/

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* lower limit of temperature table*/
    upper = 300;        /* upper limit */
    step = 20;          /* step size */

    printf("Fahrenheit -> Celsius conversion table\n\n"); /* Print out headign before table*/

    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f %8.1f\n", fahr, celsius); /* Changed character width to allign with heading*/
        fahr = fahr + step;
    }
}