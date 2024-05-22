#include <stdio.h>

int main() {
    char nombre[50]; //el [50] sirve para que se tome en cuenta hasta 50 caracteres
    float calificacion;
    int ciclo;

    // presentara un mensaje para ingresar el nombre del estudiante
    printf("Ingrese el nombre del estudiante: ");
    // al leer el nombre, se podran leer hasta 49 caracteres y 1 caracter nulo
    scanf("%49s", &nombre);

    // presentara un mensaje para ingresar la calificacion del estudiante
    printf("Ingrese la calificación total: ");
    // lee la variable de la calificacion
    scanf("%f", &calificacion);

    // presentara un mensaje para ingresar el ciclo en el que se encuentra el estudiante
    printf("Ingrese el número de ciclo (Ejemplo: 1, 2, 3, etc.): ");
    // lee la variable del ciclo
    scanf("%d", &ciclo);

    // presentara la informacion almacenada previamente
    printf("--- Resultados ---\n");
    printf("El estudiante %s ", nombre);
    printf("obtuvo una calificacion total de %.2f/10 ", calificacion);
    printf("en el ciclo n°%d de la carrera de computacion.", ciclo);

    return 0;
}
