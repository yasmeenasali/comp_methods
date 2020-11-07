#include "stdio.h"
#include "math.h"


double yglob;
int npts;

double func(double x)
{ 
//    return (1.0/sqrt(x));
//    return(sqrt(x));
//  printf("func x %e\n",x);
  return(1.0);
  }

double qgaus(double (*func)(double), double a, double b, int n)
{  
  double x[1000], w[1000];
  double integ_result = 0;

  int i;

  void gauleg(double x1, double x2, double x[], double w[], int n);

//   printf("I'm in qugaus, a, b, n %e %e %d \n", a,b,n);

  gauleg(a,b,x,w,n);
  for (i=1;i<=n; ++i)
     integ_result += func(x[i])*w[i];
  
  return(integ_result);
}


double outer(double y)
{ double xmin, xmax;
  double func(double);
  double outer_integ;

  yglob =  y; 
  xmin = 0;
  xmax = sqrt(3.0*3.0 - y*y);
  outer_integ = qgaus(func,xmin,xmax,npts);
 // printf("in  outer %e \n",y);
  return(outer_integ); 
  
  }
 

int main()
{ double x[1000], w[1000];
/* minimum size of x,w should be npts + 1 !*/
  double a,b,result;
  double func(double x), outer(double y);
  int i;
  void gauleg(double x1, double x2, double x[], double w[], int n);

  /* Numerical Recipes uses vectors! => hold-over from Fortran,
     vector/array indices start with value of 1 !! not zero, C convention */
   
  npts = 900;
  a= 0.0;
  b= 3.0;

 /*  gauleg(a,b,x,w,npts);
  
  result = 0;
  for (i=1;i<=npts;++i)
  {  result = result + func(x[i])*w[i];
     printf("%lf %lf %lf \n",x[i],w[i],func(x[i]));
     }
  printf("the answer is %lf\n",result);
  printf("vs. 2/3.* 3^3/2 %e\n", 2./3.*sqrt(3.0)*3.0); 
  printf("vs. 2.0 *sqrt(3) %e\n", 2.0*sqrt(3.0));
  printf("and the qgaus answer is %e\n",qgaus(func,a,b,npts));
*/

  double ans;
   ans = qgaus(outer,a,b,npts);
   printf("ans %e vs. %e\n",ans, atan(1.0)*4.0 * (9./4.0));

  return(0);

}

