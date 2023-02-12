//
// Created by poloa on 11/02/2023.
//
#include "selection.h"
#include "assert.h"


void ordenar(int * vector, int n){
    for(int i=0; i<n; i++){
        int posMin = buscarMin();

    }


}
int buscarMin(int * vector, int ini, int fin ,int n){
    assert(n>=0);
    assert(ini>=0 && ini<=fin);
    assert(fin<=n && fin>=ini);

    int minimo = vector[ini];
    int indmin = ini;

    for(int i=ini+1; i<fin ; i++){
        if(vector[i]<minimo){
            minimo=vector[i];
            indmin++;
        }
    }
    return indmin;
}