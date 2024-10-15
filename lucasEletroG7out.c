#include <stdio.h>
#include <math.h>

int main() {
    int numero1;
    int numero2;
    int numero3;
    //PEDINDO
    printf("Informe um numero: ");
    scanf("%d", & numero1);
    printf("Informe um numero: ");
    scanf("%d", & numero2);
    printf("Informe um numero: ");
    scanf("%d", & numero3);
    //MENORES
    if (numero1 < numero2 && numero1 < numero3) {   
    printf( "MENOR:%d ", numero1 );
    } 
    if (numero2 < numero1 && numero2 < numero3) {   
    printf("MENOR:%d ", numero2 );
    }
    if (numero3 < numero1 && numero3 < numero2) {   
    printf("MENOR:%d ", numero3);
    }
    // MEDIOS TIPO 1
    if (numero1 < numero2 && numero1 > numero3) {   
    printf("MEDIO:%d ", numero1 );
    } 
    if (numero1 < numero3 && numero1 > numero2) {   
    printf("MEDIO:%d ", numero1 );
    } 
    // MEDIOS TIPO 2
    if (numero2 < numero1 && numero2 > numero3) {   
    printf("MEDIO:%d ", numero2 );
    }
    if (numero2 < numero3 && numero2 > numero1) {   
    printf("MEDIO:%d ", numero2 );
    }
    // MEDIOS TIPO 3
    if (numero3 < numero1 && numero3 > numero2) {   
    printf("MEDIO:%d ", numero3);
    }
    if (numero3 < numero2 && numero3 > numero1) {   
    printf("MEDIO:%d ", numero3 );
    }
    //MAIOR
    if (numero1 > numero2 && numero1 > numero3) {   
    printf("MAIOR:%d ", numero1 );
    } 
    if (numero2 > numero1 && numero2 > numero3) {   
    printf("MAIOR:%d ", numero2 );
    }
    if (numero3 > numero1 && numero3 > numero2) {   
    printf("MAIOR:%d ", numero3);
    }
    //IGUAIS
    if (numero1 == numero2) {   
    printf("IGUAIS:%d %d\n", numero1, numero2);
    } 
    if (numero1 == numero3) {   
    printf("IGUAIS:%d %d\n" ,numero1,numero3 );
    } 
    if (numero2 == numero3) {   
    printf("IGUAIS:%d %d\n" ,numero2,numero3 );
    }
}