#include <stdio.h>
void tempo(int s){ int h = s / 3600; s = s % 3600; int m = s / 60; s = s % 60; printf("%d %d %d", h, m, s); }
int main(){ tempo(3661); }