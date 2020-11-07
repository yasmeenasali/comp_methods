#include <math.h>
#define EPS 1.0e-6
#define JMAX 20
#define JMAXP (JMAX+1)
#define K 5

double qromb(double (*func)(double), double a, double b)
{
	void polintx(double xa[], double ya[], int n, double x, double *y, double *dy);
	double trapzdx(double (*func)(double), double a, double b, int n);
	void nrerror(char error_text[]);
	double ss,dss;
	double s[JMAXP+1],h[JMAXP+1];
	int j;

	h[1]=1.0;
	for (j=1;j<=JMAX;j++) {
		s[j]=trapzdx(func,a,b,j);
		if (j >= K) {
			polintx(&h[j-K],&s[j-K],K,0.0,&ss,&dss);
			if (fabs(dss) < EPS*fabs(ss)) return ss;
		}
		s[j+1]=s[j];
		h[j+1]=0.25*h[j];
	}
	nrerror("Too many steps in routine qromb");
	return 0.0;
}
double qrombx(double (*func)(double), double a, double b)
{
	void polintx(double xa[], double ya[], int n, double x, double *y, double *dy);
	double trapzdx(double (*func)(double), double a, double b, int n);
	void nrerror(char error_text[]);
	double ss,dss;
	double s[JMAXP+1],h[JMAXP+1];
	int j;

	h[1]=1.0;
	for (j=1;j<=JMAX;j++) {
		s[j]=trapzdx(func,a,b,j);
		if (j >= K) {
			polintx(&h[j-K],&s[j-K],K,0.0,&ss,&dss);
			if (fabs(dss) < EPS*fabs(ss)) return ss;
		}
		s[j+1]=s[j];
		h[j+1]=0.25*h[j];
	}
	nrerror("Too many steps in routine qromb");
	return 0.0;
}
double qromby(double (*func)(double), double a, double b)
{
	void polinty(double xa[], double ya[], int n, double x, double *y, double *dy);
	double trapzdy(double (*func)(double), double a, double b, int n);
	void nrerror(char error_text[]);
	double ss,dss;
	double s[JMAXP+1],h[JMAXP+1];
	int j;

	h[1]=1.0;
	for (j=1;j<=JMAX;j++) {
		s[j]=trapzdy(func,a,b,j);
		if (j >= K) {
			polinty(&h[j-K],&s[j-K],K,0.0,&ss,&dss);
			if (fabs(dss) < EPS*fabs(ss)) return ss;
		}
		s[j+1]=s[j];
		h[j+1]=0.25*h[j];
	}
	nrerror("Too many steps in routine qromb");
	return 0.0;
}
double qrombz(double (*func)(double), double a, double b)
{
	void polintz(double xa[], double ya[], int n, double x, double *y, double *dy);
	double trapzdz(double (*func)(double), double a, double b, int n);
	void nrerror(char error_text[]);
	double ss,dss;
	double s[JMAXP+1],h[JMAXP+1];
	int j;

	h[1]=1.0;
	for (j=1;j<=JMAX;j++) {
		s[j]=trapzdz(func,a,b,j);
		if (j >= K) {
			polintz(&h[j-K],&s[j-K],K,0.0,&ss,&dss);
			if (fabs(dss) < EPS*fabs(ss)) return ss;
		}
		s[j+1]=s[j];
		h[j+1]=0.25*h[j];
	}
	nrerror("Too many steps in routine qromb");
	return 0.0;
}
#undef EPS
#undef JMAX
#undef JMAXP
#undef K
