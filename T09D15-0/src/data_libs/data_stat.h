#ifndef DATA_STAT_H
#define DATA_STAT_H
#include <math.h>

double max(double *data, int n)
{
    int max = data[0];
    for (int i = 0; i < n; ++i) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

double min(double *data, int n)
{
    int min = data[0];
    for (int i = 0; i < n; ++i) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

double mean(double *data, int n)
{
    int nums = 0;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += data[i];
        nums++;
    }
    return (sum / nums);
}

double variance(double *data, int n)
{
    int nums = 0;
    double disp = 0;
    for (int i = 0; i < n; ++i) {
        disp += (data[i] * data[i]);
        nums++;
    }
    return (disp / nums);
}

double sort(double *data, int n)
{
    for (int j = 0; j < n; j++)    {
        if (data[j-1] > data[j]) {
            tmp = data[j-1];
            data[j-1] = data[j];
            data[j] = tmp;

        }
    }
}



#endif
