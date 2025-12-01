#include <stdio.h>
char* escreveok(char t[]){ printf("%s", t); return "Ok"; }
int main(){ char t[50] = "ola"; printf("%s", escreveok(t)); }