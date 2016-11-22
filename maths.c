#include <BML_Maths.h>
#include <math.h>

#define BML_Pow pow
#define BML_Sqrt sqrt

double 
BML_Factorial(double x) {
	return x == 0 ? 1 : x * BML_Factorial(x - 1);
}

double
BML_ToRadians(double deg) {
	return deg * (180 / BML_PI);
}

double
BML_ToDegrees(double rad) {
	return (rad / 180) * BML_PI;
}

double
BML_Abs(double x) {
	return x < 0 ? -x : x;
}

double
BML_Magnitude(double x, double y) {
	return BML_Sqrt((x * x) + (y * y));
}

double
BML_Dot(double x1, double y1, double x2, double y2) {
	return (x1 * x2) + (y1 * y2);
}

double
BML_Exp(double x) {
	const int terms = 15;
	double r = 1 + x;
	int j;
	for(j = 2; j < terms + 2; j++) {
		r += BML_Pow(x, j) / BML_Factorial(j);
	}
	return r;
}

double
BML_Sin(double deg) {
	const int terms = 3;
	deg = (deg / 180) * BML_PI;
	double x = deg - BML_Pow(deg, 3) / BML_Factorial(3);
	int j = 5;
	for(int i = 0; i < terms; i++) {
		x += BML_Pow(deg, j) / BML_Factorial(j);
		x -= BML_Pow(deg, j + 2) / BML_Factorial(j + 2);
		j += 4;
	}
	
	return x;
}

double
BML_ArcSin(double deg) {
	
}

double BML_Cos(double deg) {
	const int terms = 3;
	deg = (deg / 180) * BML_PI;
	double x = 1 - BML_Pow(deg, 2) / BML_Factorial(2);
	int j = 4;
	for(int i = 0; i < terms; i++) {
		x += BML_Pow(deg, j) / BML_Factorial(j);
		x -= BML_Pow(deg, j + 2) / BML_Factorial(j + 2);
	}
	
	return x;

}

