#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float x, float y, float z, float *x1, float *x2){

int del,a;
        
if (a != 0 ){
  del = pow (y, 2) - (4*x*z);
  *x2 = (- y - del) / (2 * x);
  *x1 = (- y +del) / (2 * x);
  return (2);
  } else {
  *x1 = z/y;
  return (1); 
}
}
