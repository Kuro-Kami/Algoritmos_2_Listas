#include <stdio.h>
#include <math.h>
void baskara(float a, float b, float c){ float d = b*b - 4*a*c; if(d >= 0){ float r1 = (-b + sqrt(d)) / (2*a); float r2 = (-b - sqrt(d)) / (2*a); printf("%f %f", r1, r2); } }
int main(){ baskara(1, 5, 6); }