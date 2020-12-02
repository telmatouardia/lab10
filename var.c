#include <stdio.h>
#include <math.h>
#include "var.h"

void variance( int t[], int n, float *var) {
int i; 
float res=0;
float somme=0; 
float M=0;
for (i=0; i<n; i++)
{
somme+=t[i];
}
M=somme/n;

for (i=0; i<n; i++)
{
res+= (t[i] - M) * (t[i] -M);
}
*var=res/ n; 
printf("la moyenne est : %f\n la variance est :%f\n" , M, *var );
}

