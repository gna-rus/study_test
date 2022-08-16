#include "data_process.c"
#include "data_process.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../data_libs/data_io.c"
#include "../data_libs/data_stat.c"

int normalization(double *data, int n);
void input(double *data, int n);
void output(double *data, int n);
double max(double *data, int n);
double min(double *data, int n);
double mean(double *data, int n);
double variance(double *data, int n);

int main()
{
    double *data;
    int n;
    scanf("%d", &n);

    data = (double *)calloc(n, sizeof(double));
    input(data, n);
    
    if (normalization(data, n)) {
        output(data, n);
    } else {
        printf("ERROR");
    }
    free(data);
    return 0;
}
