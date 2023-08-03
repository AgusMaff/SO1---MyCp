# SO1---MyCp
Este repositorio contiene el codigo correspondiente para la funcion mycp

# Funcionamiento
Este programa simula el funcionamiento del comando "cp", el cual copia el contenido de un archivo dentro de otro.

Para comenzar es necesario ingresar el comando "make" en la terminal, el cual se encarga de la compilacion del programa.
Despues de la compilacion, se generara un archivo binario "mycp", con el cual voy a poder ejecutar el programa.
Para ejecutar el programa se escribe desde la terminal "./mycat [Ubicacion_del_archivo_origen] [Ubicacion_del_archivo_destino]".

[Ubicacion_del_archivo_origen]: Es el nombre o la ubicacion absoluta del archivo de origen (de acuerdo a donde este el archivo que se quiera leer)

[Ubicacion_del_archivo_destino]: Es el nombre o la ubicacion absoluta del archivo de destino (de acuerdo a donde este el archivo que se quiera leer)
                                En caso que el archivo indicado en la ubicacion no exista, se crea desde cero y despues se realiza
                                la copia del contenido.

La funcion no puede recibir valores NULL como parametros, es decir, [Ubicacion_del_archivo_destino] y [Ubicacion_del_archivo_origen]
no pueden ser NULL, ya que de lo contrario, se va a imprimir un mensaje de error por pantalla y se finalizara la ejecucion del programa.
