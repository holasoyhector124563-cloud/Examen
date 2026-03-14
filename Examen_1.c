#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0;    
    int k=0;
    int *alu=NULL;
    printf("¿Cuántos alumnos deseas ingresar?\n");
    scanf("%d", &k);
    

    do{  
    int*alu2=(int*)realloc(alu,(n+k) * sizeof(int));  
    float suma=0;
    float promedio=0;
    if(alu2==NULL){
        printf("Error al asignar memoria\n");
        return 1;
    }
    alu=alu2;
    

    for(int i=n; i<n+k; i++){
        printf("Ingrese la calificacion del alumno %d: ", i+1);
        scanf("%d", &(alu[i]));
    }
    n+=k;
    //Muestra de calificaciones y promedio
    for(int i=0; i<n; i++){
        printf("Calificacion del alumno %d: %d\n", i+1, *(alu+i));
        suma += *(alu+i);
    }
    

    promedio = suma / (n);
    printf("El promedio es: %.2f\n", promedio);
    
    printf("Deseas agregar mas alumnos? (cant. alumnos para sí, 0 para no): ");
    scanf("%d", &k);
    
    
    
    
    }while(k > 0);

    printf("Programa terminado. :O\n");


    free(alu);
    return 0;
}