#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


//La funcion encender rojo simula que se esta encendiendo la luz de color rojo en el semaforo
void encenderRojo() {
    printf("ROJO encendido\n");
}
//La funcion encender amarillo simula que se esta encendiendo la luz de color amarillo en el semaforo
void encenderAmarillo() {
    printf("AMARILLO encendido\n");
}
//La funcion encender verde simula que se esta encendiendo la luz de color verde en el semaforo
void encenderVerde() {
    printf("VERDE encendido\n");
}

int main() {
    while (1) {
    	//Aqui llamamos la funcion para imprimir el comentario
    	encenderVerde();
    	//Y le damos un tiempo de 20 segundos con la funcion sleep
        sleep(20);
    	
        encenderAmarillo();
        sleep(5);
        
		encenderRojo();
        sleep(15);
        
        printf("\n");
    }

    return 0;
}

