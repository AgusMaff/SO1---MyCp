//
// Created by agustin on 7/18/23.
//

#include "main.h"

int main(int argc, char* argv[]){

    if(argc < 3){
        printf("No se paso por parametro el nombre del archivo de origen y/o destino");
        return -1;
    }

    strcpy(dest_path, "./utils/");
    strcat(dest_path, argv[2]);
    status = mycp(argv[1], dest_path);

    if(status == -1){
        printf("No se pudo realizar la copia del archivo de origen en el archivo de destino\n");
    }

    return 0;
}


int mycp(char* file_1, char* file_2){
    FILE* src_file;
    FILE* dest_file;

    src_file = fopen(file_1,"r");
    if(src_file == NULL){
        fprintf(stderr,"No se pudo abrir el archivo origen. %d: %s\n", errno, strerror(errno));
        return -1;
    }

    dest_file = fopen(file_2,"wb");
    if(dest_file == NULL){
        fprintf(stderr,"No se pudo abrir o crear el archivo destino. %d: %s\n", errno, strerror(errno));
        return -1;
    }

    int c;
    while((c = fgetc(src_file)) != EOF){
        if(putc(c, dest_file) == EOF){
            fprintf(stderr,"Se produjo un error mientras se copiaban los datos en el archivo de destino: %s\n", dest_path);
            fclose(src_file);
            fclose(dest_file);
            return -1;
        }
    }

    fclose(src_file);
    fclose(dest_file);

    return 0;
}