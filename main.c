#include <stdio.h>

//Função Media Ponderada(Calculo da media com peso)

float Media(float n1, float n2)
{
    int p1= 4;
    int p2 =6;
    float media;
    
    media = ((p1*n1)+(p2*n2))/ (p1 + p2);
    
    return media;
    
}
//Função Conceito Final(Imprimi o conceito por meio de um Laço de repetição)

char CF(float media)
{
    char cf;
    
    if(media < 4.9){
    printf("\nSeu resultado foi D");
    
    return cf;
    }
    
    else if (media >= 5.0 && media < 7){
    printf("\nSeu resultado foi C");
    
    return cf;
    }
    
    else if (media >= 7 && media < 8.9){
    printf("\nSeu resultado foi B");
    
    return cf;
    }
    
    else if (media >= 9 && media <= 10){
    printf("\nSeu resultado foi A");
    
    return cf;
    }
}


int main()
{
    
//Declaração da variaveis

    float n1;
    float n2;
    float media;
    char cf;
    
//Impressão do programa

    printf("Saiba sua média em alguns passos!\n");
    
    printf("\nDigite a 1º nota:");
    scanf("%f",&n1);
    
    printf("\nDigite a 2º nota:");
    scanf("%f",&n2);

//Impressão dos resultados

    media = Media(n1,n2);
    printf("\nSua média é:%.2f\n", media);
    
    cf = CF(media);
    
    return 0;
}
