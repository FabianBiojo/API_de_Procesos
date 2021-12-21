/*
 * Este programa muestra como leer varias palabras del teclado (stdin)
 * Codigo tomado de: https://www.programiz.com/c-programming/c-strings
 *
 * Modificado por: John Sanabria - john.sanabria@correounivalle.edu.co
 * Fecha: 2021-02-26
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include "leercadena.h"

int main(int argc, char *argv[]) {
  char comando[BUFSIZ];
  char **vector;
  int i;

    printf("> ");
    if(argc > 1){ 
	  char *cmd[argc]; 
      for(int i=0;i<argc;i++ ){
        if(i<argc-1){ 
          cmd[i]=argv[i+1];
        }else{
          cmd[i]=NULL;}
      } 
      execvp(cmd[0],cmd);
      perror("return from execvp() not expected");
      exit(EXIT_FAILURE); //salida por error
    }else{ 
      printf("por favor digite un comando\n");
    } 
    /*leer_de_teclado(BUFSIZ,comando);
    execlp(comando,vector);
    if (strcmp("exit",comando) == 0) {
      break;
    }
    pid = fork();
    if (pid < 0) {
      perror("No se pudo crear un proceso\n");
      exit(1);
    } else if (pid == 0) {
      vector = de_cadena_a_vector(comando);
      execvp(vector[0],vector);
      perror("Return from execlp() not expected");
      exit(EXIT_FAILURE);
    } else {
  }*/

  return 0;
}




