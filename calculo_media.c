#include <stdio.h>

int main(){

    //Área para definição das variáveis e armazenar as notas
    int nota1, nota2, nota3;
    float media;
    
    //Área para a entrada das notas
    printf ("Digite a primeira nota:  \n");
    scanf ("%d", &nota1);
    printf ("Digite a segunda nota:  \n");
    scanf ("%d", &nota2);
    printf ("Digite a terceira nota:  \n");
    scanf ("%d", &nota3);

    //Área para cálculo e exibição da média.
    media = (float) (nota1 + nota2 + nota3) / 3;
    printf ("A média das três notas é: %.2f.\n", media);

return 0;

}
/* //Ou assim:
Área para definição das variáveis e armazenar as notas
    float nota1, nota2, nota3;
    
    //Área para a entrada das notas
    printf ("Digite a primeira nota:  \n");
    scanf ("%f", &nota1);
    printf ("Digite a segunda nota:  \n");
    scanf ("%f", &nota2);
    printf ("Digite a terceira nota:  \n");
    scanf ("%f", &nota3);

    //Área para cálculo e exibição da média.
    float media = (nota1 + nota2 + nota3) / 3;
    printf ("A média das três notas é: %.2f.\n", media);*/