#include <stdio.h>

int main(){

    int segundos; 
    scanf ("%d", &segundos);
    int horas;
    horas = segundos/3600;
    segundos = segundos%3600;
    int minutos;
    minutos = segundos/60;
    segundos = segundos%60;

    printf("%d horas %d minutos %d segundos", horas, minutos, segundos);

    return 0;
}