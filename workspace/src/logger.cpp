#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h> // Necesario para la funcion strstr

int main(int argc, char **argv) {
    int fd;
    char buffer[1024];

    unlink("tuberia");

    if (mkfifo("tuberia", 0666) < 0) {
        perror("No puede crearse el FIFO");
        return(1);
    }
    
    if ((fd = open("tuberia", O_RDONLY)) < 0) {
        perror("No puede abrirse el FIFO");
        return(1);
    }
    
    while (read(fd, buffer, sizeof(buffer)) > 0) {
        printf("%s\n", buffer);
        
        // Evaluación de la condición de parada del ejercicio propuesto
        if (strstr(buffer, "3") != NULL) {
            break;
        }
    }
    
    close(fd);
    unlink("tuberia");
printf("La partida ha terminado.\n");
    return(0);
}
