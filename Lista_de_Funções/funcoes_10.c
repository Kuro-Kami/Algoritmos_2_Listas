#include <stdio.h>
int par(int v){ if(v % 2 == 0) return 1; return 0; }
int main(){ printf("%d", par(3)); }