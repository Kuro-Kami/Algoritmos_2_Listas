#include <stdio.h>
float media(){ float v, s = 0; int c = 0; while(scanf("%f", &v) == 1 && v > 0){ s += v; c++; } return s / c; }
int main(){ printf("%f", media()); }