#include <stdio.h>
int pot(int x, int z){ int r = 1; for(int i = 0; i < z; i++) r = r * x; return r; }
int main(){ printf("%d", pot(2, 3)); }