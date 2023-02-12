#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n],menor=a[0];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]<menor){
            menor = a[i];
        }
    }


    return 0;
}
