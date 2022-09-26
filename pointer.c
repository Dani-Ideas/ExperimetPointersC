#include <stdio.h>

int a =5, b =10;

int main()
{
    printf("el valor de a es:%d y la direccion en e memoria de a es %p\n", a, &a);
    int *p = &a;
    printf("como la variable p es un puntero y su direccion es %p y el valor de p es %d\n",p , *p);
    *p++;
    printf("Pero despues de aumentarle 1 a la direccion es %p y su valor es %d\n",p ,*p);
    printf("y solo para comprobar la direccion de b en memoria es %p y su valor es %d\n", &b, b);
    printf("así que si efectivamente mi programa si reservo las dos varibles y mi puntero se esta desplazando poer las variables que cree");
    return 0;
}




