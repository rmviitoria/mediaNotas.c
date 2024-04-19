/******************************************************************************

Crie uma função que recebe 3 notas por parâmetro e retorna o conceito atingido pela média aritmética das notas. Os conceitos são:
- entre 0.0 e 4.0 (inclusive): conceito 'D'
- entre 4.0 (não incluído) e 7.0 (inclusive): conceito 'C'
- entre 7.0 (não incluído) e 9.0 (inclusive): conceito 'B'
- entre 9.0 (não incluído) e 10.0 (inclusive): conceito 'A'
Caso alguma das notas digitadas seja negativa, retorne o caractere 'E'


*******************************************************************************/
#include <stdio.h>


char conceito(float nota1, float nota2, float nota3) {


    float media = (nota1 + nota2 + nota3) / 3;
    
    if (media >= 9.0 && media <= 10.0) {
        return 'A';
    } else if (media >= 7.0 && media < 9.0) {
        return 'B';
    } else if (media >= 4.0 && media < 7.0) {
        return 'C';
    } else if (media >= 0.0 && media < 4.0) {
        return 'D';
    }else if (nota1<0 || nota2<0 || nota3<0) {
        return 'E';
    }
}


int main() {
   
    float nota1, nota2, nota3;
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);


    char retornaConceito = conceito(nota1, nota2, nota3);
    printf("Conceito: %c\n", retornaConceito);


    return 0;
}
