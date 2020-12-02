#include <stdio.h>
#include "var.h"
#include "max.h"
#include "min.h" 

int main (){
     int n = 10;
     int maxx;
     int minn; 
    
     float varian;
     int t [10] = {4,9,10,11,12,15,12,9,0,30};
     variance (t, n, &varian);
     max(t, n, &maxx);
     min(t, n,&minn); 
     printf("la variance est : %f\n le max est  :%d\n  le min est : %d\n ",varian, maxx, minn );

     return 0;
} 

