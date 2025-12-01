#include <stdio.h>
int sinal(int v){ if(v >= 0) return 1; return 0; }
int main(){ printf("%d", sinal(-5)); }