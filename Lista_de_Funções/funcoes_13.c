#include <stdio.h>
void tri(float x, float y, float z){ if(x < y+z && y < x+z && z < x+y){ if(x == y && y == z) printf("Equilatero"); else if(x == y || y == z || x == z) printf("Isosceles"); else printf("Escaleno"); } }
int main(){ tri(3, 3, 3); }