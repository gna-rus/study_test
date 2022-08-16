#include <stdio.h>

#include "../data_libs/data_io.c"
#include "../data_libs/data_stat.c"
#include "../data_module/data_process.c"
#include "../data_module/data_process.h"
#include "../yet_another_decision_module/decision.c"
#include "../yet_another_decision_module/decision.h"

void input(double *data, int n);
void output(double *data, int n);
int make_decision(double *data, int n);
double sort(double *data, int n);
int normalization(double *data, int n);

void main();


{
    double *data;
    int n;
    
    scanf("%d", &n);

    data = (double *)calloc(n, sizeof(double));
    input(data, n);

    printf("LOAD DATA...\n");
    input(data, n);

    printf("RAW DATA:\n\t");
    output(data, n);

    printf("\nNORMALIZED DATA:\n\t");
    normalization(data, n);
    output(data, n);

    printf("\nSORTED NORMALIZED DATA:\n\t");
    sort(data, n);
    output(data, n);

    printf("\nFINAL DECISION:\n\t");
    make_decision(data,n);

}

