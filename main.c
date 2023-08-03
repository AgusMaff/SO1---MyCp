//
// Created by agustin on 7/18/23.
//

#include "mycp.h"

int main(int argc, char* argv[]){
    int status;

    if(argc < 3){
        printf("No se paso por parametro el nombre del archivo de origen y/o destino\n");
        return -1;
    }

    status = mycp(argv[1], argv[2]);

    if(status == -1){
        fprintf(stderr,"No se pudo realizar la copia del archivo de origen en el archivo de destino\n");
        return -1;
    }

    return 0;
}


