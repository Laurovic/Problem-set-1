#include <stdio.h>

int main(void)
{
    int cislo1, cislo2;
    
    printf ("Zadaj prve cislo:");
    scanf ("%i", &cislo1);

    printf ("Zadaj druhe cislo:");
    scanf ("%i", &cislo2);

    if (cislo1 > cislo2)
    {
        printf ("%i\n", cislo1*cislo2);
        printf ("%i\n", cislo1+cislo2);
        printf ("%i\n", cislo1-cislo2);
        printf ("%f\n", (float)cislo1/(float)cislo2);
        printf ("%.0f\n", (float)cislo1/(float)cislo2);
    }
    else
    {
        printf ("%i\n", cislo2*cislo1);
        printf ("%i\n", cislo2+cislo1);
        printf ("%i\n", cislo2-cislo1);
        printf ("%f\n", (float)cislo2/(float)cislo1);
        printf ("%.0f\n", (float)cislo2/(float)cislo1);
    }

}