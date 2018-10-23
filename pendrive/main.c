#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int codigo;
    char marca[20];
    int capacidad;
    float precio;
}ePendrive;


int cargarPendrive(ePendrive* pen);
void mostrarPendrive(ePendrive* pen);
ePendrive* new_pendrive();
ePendrive* new_pendrive_param(int codigo, char marca[], int capacidad, float precio);

int main()
{
    //ePendrive miPendrive;
    ePendrive* pen1;

    pen1 = new_pendrive_param(123, "Kingston", 8, 580);


    /*if(pen1 != NULL){
        mostrarPendrive(&miPendrive);
    }*/

    return 0;
}

int cargarPendrive(ePendrive* pen){
    int ok = 0;
    if(pen != NULL){
        printf(" *** Cargar Pendrive ***\n");
        printf("Ingrese Codigo: ");
        scanf("%d", &pen->codigo);
        printf("Ingrese Marca: ");
        gets(pen->marca);
        printf("Ingrese capacidad: ");
        scanf("%d", &pen->capacidad);
        printf("Ingrese Precio: ");
        scanf("%f", &pen->precio);
        ok = 1;
    }
    return ok;
}

void mostrarPendrive(ePendrive* pen){
    if(pen != NULL){
        printf("%2d %10s %2d %4.2f", pen->codigo, pen->marca, pen->capacidad, pen->precio);
    }
}

ePendrive* new_pendrive(){
    ePendrive* p;

    p = (ePendrive*) calloc(1, sizeof(ePendrive));
    /*if(p != NULL){
        p->codigo = 0;
        strcpy(p->marca, "");
        p->capacidad = 0;
        p->precio = 0;
    }*/
    return p;
}

ePendrive* new_pendrive_param(int codigo, char marca[], int capacidad, float precio){
    ePendrive* p;
    p = new_pendrive();
    if(p != NULL && marca != NULL){
        p->codigo = codigo;
        strcpy(p->marca, marca);
        p->capacidad = capacidad;
        p->precio = precio;
    }
    return p;
}
