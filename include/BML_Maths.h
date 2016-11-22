#ifndef MATHS_H
#define MATHS_H

#define BML_PI (3.1415926535897932384626433832)
#define BML_E  (2.71828183)

double BML_Factorial(double x);

double BML_ToRadians(double deg);
double BML_ToDegrees(double rad);

double BML_Sin(double deg);
double BML_Cos(double deg);

double BML_ArcSin(double deg);
double BML_Exp(double x);

double BML_Magnitude(double x, double y);
double BML_Abs(double x);
double BML_Dot(double x1, double y1, double x2, double y2);

#endif