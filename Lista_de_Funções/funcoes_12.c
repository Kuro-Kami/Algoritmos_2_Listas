#include <stdio.h>
void ordem(int a, int b, int c){ int x = a, y = b, z = c; int t; if(x > y){ t = x; x = y; y = t; } if(y > z){ t = y; y = z; z = t; } if(x > y){ t = x; x = y; y = t; } printf("%d %d %d", x, y, z); }
int main(){ ordem(3, 1, 2); }