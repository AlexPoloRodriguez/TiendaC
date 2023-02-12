#include <stdio.h>
#include "selection/selection.h"


int main() {
    int a[5]= {1,5,3,4,2};
    ordenar(a,5);
    for(int i=0; i<5; i++){
        printf("%d",a[i]);
    }
    return 0;
}
