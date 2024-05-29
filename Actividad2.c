//devolver un numero invertido

#include <stdio.h>

int main() {
    int n; //variable que representa el numero original
    int rn = 0; //variable que representara el numero invertido
    int r; //variable de apoyo para realizar la inversion

    //solicitamos que se ingrese un número
    printf("Ingresa un número (maximo de 9 digitos): ");
    scanf("%d", &n);

    //invertimos el número usando un bucle
    for (int i = n; i != 0; i /= 10) {
        /*i sera el numero original, el cual sera dividido entre 10
        hasta que quede como valor 0*/
        
        //a r se le asignara el residuo de la division entre i y 10
        r = i % 10;

        /*al valor de rn se lo multiplicara por 10 para que se desplace
        un puesto hacia la izquierda y se le sumara el valor resultante
        de r*/
        rn = rn * 10 + r;

        /*este proceso se repetira sin problemas porque todas las variables
        estan declaradas como enteros, por lo que solo se mostrara la parte
        entera de la division al momento de repetirse el bucle*/
    }

    //presentamos un mensaje junto con el valor resultante
    printf("El número invertido es: %d\n", rn);

    return 0;
}

//presentar la suma de los digitos de un numero

#include <stdio.h>

int main() {
    int n; //variable del numero que vamos a desarmar para sumar
    int suma = 0; // variable que almacenara la suma de los numeros
    int t; //variable de apoyo para separar los numeros y sumarlos

    //solicitamos que se ingrese un número
    printf("Ingresa un número (maximo de 10 digitos): ");
    scanf("%d", &n);

    for (int i = n; i > 0; i = i / 10) {
        /*i tendra el valor del numero inicial y se comenzara a
        separar los numeros dividiendolos para 10 hasta que ya no
        se pueda seguir dividiendo*/

        /*la variable t obtendra el valor del residuo de la division
        de i entre 10*/
        t = i % 10;

        //presentamos el digito obtenido de la division
        printf("%d", t);

        /*si despues de la division aun quedan digitos en i, se aplicara
        una condicion para que se le coloque un "+" entre el numero actual
        y el numero que sigue*/
        if (i >= 10) {
            printf(" + ");
        }
        
        /*a la variable de suma se le sumara el valor de t para que se
        lo pueda presentar al final*/
        suma = suma + t;
    }

    //presentamos el resultado con un mensaje
    printf(" = %d\n", suma);

    return 0;
}

//potencia mediante sumas sucesivas

#include <stdio.h>

int main() {
    int b; //variable para la base
    int ex; //variable para el exponente

    //presentamos un mensaje que nos pida ingresar las bases y exponentes
    printf("Introduce la base: ");
    scanf("%d", &b);
    
    printf("Introduce el exponente: ");
    scanf("%d", &ex);

    //añadimos una condicion que presente solo "1" si el exponente es 0
    if (ex == 0) {
        printf("1\n");
    } else {
        int r = 0; //variable que representara el resultado de las sumas consecutivas

        /*el << servira para extender la base las veces que se necesite
        para que de el resultado de la potencia*/
        int t = b << (ex - 1); //variable que representara la cantidad de sumas que se va a realizar

        //inicia un bucle donde i equivale a la base y se repetira hasta que equivalga a t
        for (int i = b; i < t; i++) {

            //se le sumara la base al resultado
            r = r + b;

            //se presentara el resultado
            printf("%d", b);

            //si el resultado es menor al numero anterior de la cantidad de sumas se presentara un "+"
            if (i < t - 1) {
                printf("+");
            }
            /*el proceso se repetira hasta que la cantidad de veces que se haya presentado la base
            sea equivalente a la cantidad de sumas que se tenga que realizar*/
        }
        
        //despues de que se presente la sucecion de sumas se presentara la respuesta
        printf(" = %d\n", r);
    }
    
    return 0;
}

//radicacion mediante restas sucesivas

#include <stdio.h>

int main() {
    int valor, radicando;

    // Pedir al usuario que ingrese el valor y el radicando
    printf("Ingrese el valor: ");
    scanf("%d", &valor);
    printf("Ingrese el radicando: ");
    scanf("%d", &radicando);

    // Inicializar una variable para el resultado final
    int resultado = valor;

    // Realizar la sucesión de restas y mostrarla
    printf("Sucesión de restas: %d", valor);
    for (; resultado > radicando; resultado -= radicando) {
        printf(" - %d", radicando);
    }
    printf(" = %d\n", resultado);

    return 0;
}

//presentar n numeros de la serie Fibonacci

#include <stdio.h>

//se escribe una función que permitira calcular el siguiente termino de la serie
int f_sig(int n) { //funciona con la variable n
    if (n <= 1) {
        //si el numero es menor o igual a 1, solo devolvera el munero mismo
        return n;
    } else {
        //caso contrario la funcion devolvera la suma de los 2 numeros anteriores
        return f_sig(n - 1) + f_sig(n - 2);
    }
}

int main() {
    int n; //variable de la cantidad de numeros a presentar

    //se presenta un mensaje para que se escriba la cantidad de numeros a presentar
    printf("escriba la cantidad de numeros a presentar: ");
    scanf("%d", &n);

    printf("Los %d primeros términos de la serie de Fibonacci son:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", f_sig(i)); //la i en f_sig reemplaza el valor de n en la funcion
    }

    return 0;
}