#include <stdio.h>
#include <stdlib.h>
#include "constructor.h"

int eDato_setA(eDato* pDato, int cargar){
    int estado = 0;
    if(pDato != NULL){
        pDato->a = cargar;
        estado = 1;
    }
    return estado;
}

int eDato_getA(char* fileName, eDato* pDato){
    FILE* pFile;
    int cant, estado = 0;
    char buffer[2][20];
    if(fileName == NULL){
        printf("No existe el archivo.\n");
    }else{
        if(pDato == NULL){
            printf("No hay espacio en memoria.\n");
        }else{
            pFile = fopen(fileName,"r");
            if(pFile == NULL){
                exit(1);
            }else{
                cant = fscanf(pFile, "%[^,], %[^\n]")
            }
        }
    }
    if(pDato != NULL){
        pDato->a = 0;
        pDato->b = ' ';
    }
}
