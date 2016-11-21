#include <stdio.h>
#include <math.h>
#include <time.h>

#define SM_PI (3.1415926535897932384626433832)

double factorial(double x) {
	return x == 0 ? 1 : x * factorial(x - 1);
}

double to_degrees(double radians) {
	return radians * (180 / SM_PI);
}

double to_radians(double degrees) {
	return (degrees / 180) * SM_PI;
}

// All in degrees
double _sin(double theta) {
	const int terms = 3;
	theta = (theta / 180) * SM_PI;
	double x = theta - pow(theta, 3) / factorial(3);
	int j = 5;
	for(int i = 0; i < terms; i++) {
		x += pow(theta, j) / factorial(j);
		x -= pow(theta, j + 2) / factorial(j + 2);
		j += 4;
	}
	
	return x;
}

// All in degrees
double _cos(double theta) {
	const int terms = 3;
	theta = (theta / 180) * SM_PI;
	double x = 1 - pow(theta, 2) / factorial(2);
	int j = 4;
	for(int i = 0; i < terms; i++) {
		x += pow(theta, j) / factorial(j);
		x -= pow(theta, j + 2) / factorial(j + 2);
	}
	
	return x;
}

int main()
{
	printf("%f\n", _sin(to_degrees(0.31415926)));
	return 0;
}