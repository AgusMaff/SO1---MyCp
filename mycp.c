//
// Created by agustin on 8/2/23.
//

#include "mycp.h"

int mycp(char* file_1, char* file_2){
    int src_file;
    int dest_file;
    char cadena[SIZE];

    src_file = open(file_1,O_RDONLY);
    if(src_file == -1){
        fprintf(stderr,"No se pudo abrir el archivo origen. %d: %s\n", errno, strerror(errno));
        return -1;
    }

    dest_file = open(file_2,O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU | S_IRGRP | S_IROTH);
    if(dest_file == -1){
        fprintf(stderr,"No se pudo abrir o crear el archivo destino. %d: %s\n", errno, strerror(errno));
        return -1;
    }

    ssize_t bytes;
    bytes = read(src_file, cadena, SIZE);
    if(bytes == -1){
        fprintf(stderr,"Un error se produjo cuando se intento leer el archivo indicado. %d: %s", errno, strerror(errno));
        return -1;
    }

    while(bytes != 0){
        if(write(dest_file, cadena, bytes) == -1){
            fprintf(stderr,"Se produjo un error mientras se copiaban los datos en el archivo de destino: %s\n", file_2);
            close(src_file);
            close(dest_file);
            return -1;
        }
        memset(cadena, 0, SIZE);
        bytes = read(src_file, cadena, SIZE);
        if(bytes == -1){
            fprintf(stderr,"Un error se produjo cuando se intento leer el archivo indicado. %d: %s", errno, strerror(errno));
            return -1;
        }
    }

    close(src_file);
    close(dest_file);

    return 0;
}