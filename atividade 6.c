#include <stdio.h>
int main(){
    float a, b, c;
    char y;
    do{
    do {
        printf("digite a primeira nota:\n");
        scanf("%f", &a);
        if (a  <0 || a > 10){
            printf("Nota inv�lida\n");
        }
    } while (a < 0 || a> 10);
    do {
        printf("digite a segunda nota:\n");
        scanf("%f", &b);
        if (a < 0 || a > 10) {
            printf("Nota inv�lida\n");
        }
    } while (b < 0 || b > 10);
    c = (a + b)/2;
    printf("A m�dia do aluno �: %.2f\n", c);

    printf("NOVO CALCULO (S/N)? ");
    scanf(" %c", &y);  // O espa�o antes de %c � importante para consumir o enter

    } while (y == 'S' || y == 's');
    return 0;

}
