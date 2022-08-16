#include "decision.c"

#include <stdio.h>
#include <stdlib.h>

int make_decision(double *data, int n);
void input(double *data, int n);

int main() {
  double *data;
  int n;

  scanf("%d", &n);

  data = (double *)calloc(n, sizeof(double));
  input(data, n);
  if (make_decision(data, n))
    printf("YES");
  else
    printf("NO");

  free(data);
}
