#include <stdio.h>
void cat(int i, char *c){ if(i >= 5 && i <= 7) c = "Infantil A"; else if(i >= 8 && i <= 10) c = "Infantil B"; else if(i >= 11 && i <= 13) c = "Juvenil A"; else if(i >= 14 && i <= 17) c = "Juvenil B"; else c = "Adulto"; printf("%s", c); }
int main(){ cat(12, ""); }