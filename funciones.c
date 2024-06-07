#include "funciones.h"
#include <stdio.h>
#include <string.h>

void listarProductos(char productos[][3][40], double precio[], int indice[]) {
    printf("  Número \t Nombre \t Categoria\t Marca \t Precio\t\n");
    for(int i = 0; i < 10; i++){
        printf(" %d \t %s \t %s\t %s \t %lf\t\n", indice[i], productos[i][0], productos[i][1], productos[i][2], precio[i]);
    }
}

void buscarXMarca(char productos[][3][40], double precio[]) {
    char marca[40];
    int noexiste = 0;
    printf("Escriba la marca que quiere buscar: ");
    scanf("%s", marca);

    for(int i = 0; i < 10; i++) {
        if(strcmp(productos[i][2], marca)==0){
            printf("%s \t %s \t %s\t %lf \n", productos[i][0], productos[i][1], productos[i][2], precio[i]);
            noexiste = 1;
        }
    }
    if(noexiste == 0){
        printf("No existe\n");
    }
}

void buscarXCategoria(char productos[][3][40], double precio[]) {
    char categoria[40];
    int noexiste = 0;
    printf("Escriba la categoria que quiere buscar: ");    
    scanf("%39s", categoria); 
    for(int i = 0; i < 10; i++) {
        if(strcmp(productos[i][1], categoria)==0){
            printf("%s \t %s \t %s\t %lf \n", productos[i][0], productos[i][1], productos[i][2], precio[i]);
            noexiste = 1;
        }
    }
    if(noexiste == 0){
        printf("No existe\n");
    } 
}

void buscarXPrecioMenor(char productos[][3][40], double precio[]) {
    double precioMax;
    int noexiste = 0;
    printf("Escribir el Precio máximo: ");
    scanf("%lf", &precioMax);

    for(int i = 0; i < 10; i ++){
        if(precio[i] < precioMax){
            printf("%s \t %s \t %s\t %lf \n", productos[i][0], productos[i][1], productos[i][2], precio[i]);
            noexiste = 1;
        }
    }
    if(noexiste == 0){
        printf("No existe\n");
    }
}

void editarProducto(char productos[][3][40], double precio[], int indice[]) {
    char nombre[40], marca[40], cat[40];
    double nuevoPrecio;
    int num;

    printf("Escoga el número que desea editar: ");
    scanf("%d", &num);
    num--;

    printf("Escribir el nuevo nombre: ");
    scanf("%s", &nombre);

    printf("Escribir la nueva marca: ");
    scanf("%s", &marca);

    printf("Escribir la nueva categoría: ");
    scanf("%s", &cat);

    strcpy(productos[num][0], nombre);
    strcpy(productos[num][1], nombre);
    strcpy(productos[num][2], nombre);
    precio[num] = nuevoPrecio;
    listarproductos(productos,precio,indice);
}