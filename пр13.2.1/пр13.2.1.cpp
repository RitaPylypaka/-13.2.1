#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "math_operations.h"


void main()
{
    printf("Lab 13.2. Using macros and preprocessing directive\n");
    int x, y, z, x_cube, x_plus_y, maxim, minim;
    char ch;
    float rad, s;

    do
    {
        printf("Define the maximum of two numbers\n");
        printf("Input 3 integer numbers\n");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        scanf("%d", &z);
        PRINTI(z);
        if (z > 3)
        {
            x_plus_y = SQR(x + y);
            PRINTI(x_plus_y);
            int x_minus_z = SQR(x - z);
            PRINTI(x_minus_z);
            minim = MIN(x_minus_z, x_plus_y);
            PRINTR(minim);

        }
        else
        {
            int xy = MULTIPLY(x, y);
            PRINTI(xy);
            int yz = MULTIPLY(y, z);
            PRINTI(yz);
            int xy_plus_yz = ADD(xy, yz);
            PRINTI(xy_plus_yz);
            int zx = MULTIPLY(x, z);
            PRINTI(zx);
            int zx_plus_yz = SQR(zx + yz);
            PRINTI(zx_plus_yz);
            maxim = MAX(zx_plus_yz, xy_plus_yz);
            PRINTR(maxim);

        }
        printf("Repeat?  y / n ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

}