#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i, a, b;
    float c, d = 0, e;

    printf("digite o n�mero total de mercadorias no estoque:\n");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        printf("fale o valor da mercadoria:\n");
        scanf("%f", &c);

        d += c;
    }

    printf("o valor total em estoque �:\n%.2f\n", d);

    e = d / a;

    printf("e a m�dia de valor das mercadorias � de:\n%.2f\n", e);

    return 0;
}
