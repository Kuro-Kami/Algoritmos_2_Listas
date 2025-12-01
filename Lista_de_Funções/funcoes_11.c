#include <stdio.h>
char conceito(float n){ if(n <= 4.9) return 'D'; if(n <= 6.9) return 'C'; if(n <= 8.9) return 'B'; return 'A'; }
int main(){ printf("%c", conceito(7)); }