#include "data_process.h"
#include "../data_libs/data_stat.c"
#include "../data_libs/data_stat.h"
#include <math.h>
#include <stdio.h>

double max(double *data, int n);
double min(double *data, int n);
double mean(double *data, int n);
double variance(double *data, int n);

int normalization(double *data, int n)
{
    int result = 1;
    double max_value = max(data, n);
    double min_value = min(data, n);
    double size = max_value - min_value;
    if (fabs(size) > EPS) {
        for (int i = 0; i < n; i++) {
            data[i] = (data[i] / size) - (min_value / size);
        }
    } else {
        result = 0;
    }
    
    return result;
}
