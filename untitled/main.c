#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define LEN 50
#define PI 3.141592

void rellenar(int * arr);
int redimensionar(int ** arr);

int main() {
    char * palabra=(char *)calloc(101,sizeof(char));
    gets(palabra);
    puts(palabra);
    int nl=0;
    while(*palabra!='\0'){
        nl++;
    }
    palabra = (char *) realloc(palabra,nl* sizeof(char));
    puts(palabra);

    return 0;
}