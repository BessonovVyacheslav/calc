#include <stdio.h>
#include <math.h>

double Fact(double N)
{
	double q = N;
	while (N > 0)
	{
		N = N - 1;
		q = q * N;
	}
	return q;
}

double sum(double a, double b)
{
	printf("%lf", a + b);
	return a + b;
}

double minus(double a, double b)
{
	return a - b;
}

double multiple(double a, double b)
{
	return a * b;
}

double division(double a, double b)
{
	if (b == 0)
		return 0;
	printf("%lf", a/ b);
	return a / b;
}

//double sqrt(double a)
//{
//	if (a < 0)
//		return -sqrt(a);
//	else
//		return sqrt(a);
//}

double ln(double a)
{
	printf("%lf", sqrt(a));
	return ln(a);
}