/* Driver for routine qromb */

#include <stdio.h>
#include <math.h>
#define NRANSI
#include "nr.h"

#define PIO2 1.5707963

double z,y;

/* Test function */
double func(double x) {
    return x*x*(x*x-2.0)*sin(x);
}

/* Integral of test function func */
double fint(double x) {
    return 4.0*x*(x*x-7.0)*sin(x)-(pow(x,4.0)-14.0*x*x+28.0)*cos(x);
}

double funcx(double x) { 
    thereturnvalue = x;
}

double funcy(y) {     
    ax =0; 
    bx = sqrt(9-z*z-y*y);
    theyint =  qrombx(funcx,ax,bx);   
}

double funcz(double tz) {  
    z = tz; 
    thezint = qromby(funcy,ay,by);
}

int main(void) {
    double a=0.0, b=PIO2, s;
    
    printf("Integral of func computed with QROMB\n\n");
    printf("Actual value of integral is %12.6f\n",fint(b)-fint(a));
    s = qrombz(funcz, a, b);
    printf("Result from routine QROMB is %11.6f\n",s);
    return 0;
}

#undef NRANSI
