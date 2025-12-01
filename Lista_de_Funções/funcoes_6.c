#include <stdio.h>
int idade(int a, int m, int d){ return a*365 + m*30 + d; }
int main(){ printf("%d", idade(1, 2, 3)); }