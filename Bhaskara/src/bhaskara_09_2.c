#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float valorA, float valorB, float valorC, float *x1, float *x2){

float bhaskara,valorB1,x;

valorB1 = valorB * valorB;

bhaskara = valorB1 - 4 * valorA * valorC;

if (valorA==0){
x = (-valorC / valorB);        
return (1);
}

else{
*x1 = (-valorB + sqrt(bhaskara))/2*valorA;
*x2 = (-valorB - sqrt(bhaskara))/2*valorA;
return (2);
}
}
