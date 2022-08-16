#ifndef DATA_IO_H
#define DATA_IO_H
#include <stdio.h> 
#include <stdlib.h>


void input(double *data, int n)
{
    for (int i = 0; i < n; i++) {
        scanf("%lf", &data[i]);
    }
}
void output(double *data, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", data[i]);
    }
    printf("\n");
}

#endif
