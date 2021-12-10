#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int contador = 1;
    pid_t rc;
    rc = fork();
	//printf("Hola (pid:%d)\n", (int) getpid());
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    }else if (rc == 0) {
       // printf("Hola, soy el hijo de  (pid:%d)\n", (int) getpid());
        contador+= 5;
    }else {
        //printf("Hola, soy el padre de %d (pid:%d)\n", rc, (int) getpid());
        contador+= 2;
    }
    printf("%d\n", contador);
    
    return 0;
}
