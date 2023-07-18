//
// Created by agustin on 7/18/23.
//

#ifndef SO1_MYCP_MAIN_H
#define SO1_MYCP_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

#define SIZE 256

int status;
const mode_t nuevos_permisos = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
char dest_path[256];

int mycp(char*, char*);

#endif //SO1_MYCP_MAIN_H
