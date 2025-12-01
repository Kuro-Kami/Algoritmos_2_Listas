#include <stdio.h>
int perfeito(int n){ int s = 0; for(int i = 1; i < n; i++){ if(n % i == 0) s += i; } if(s == n) return 1; return 0; }
int main(){ printf("%d", perfeito(6)); }