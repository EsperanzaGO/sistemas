#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int num) {
    int rc = fork();
    num = 25;
	//printf("Hola (pid:%d)\n", (int) getpid());
    if (rc < 0) {
        //fprintf(stderr, "fork failed\n");
        exit(1);
    }else if (rc == 0) {
        printf("Hola, soy el hijo de  (pid:%d)\n", (int) getpid());
        if(num < 2) return num;
        return main(num -1) + main(num - 2); 
        
    }else {
       printf("Hola, soy el padre de %d (pid:%d)\n", rc, (int) getpid());
       
    }

    return 0;
}
