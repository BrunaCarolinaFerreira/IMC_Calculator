#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, imc;
    
    printf("Digite seu peso em KG (utilize pontos, por exemplo 60.50) : ");
    scanf("%f", &peso);
    printf("Digite sua altura em M (utilize pontos, por exemplo 1.70) :  ");
    scanf("%f", &altura);
    
    imc = peso/(pow(altura,2));
    
    printf("Seu IMC é: %f \n", imc);
    
    if (imc <= 18.5)
    {
        printf("Você está abaixo do peso \n");
    } 
    else 
    {
        printf("Você está no peso ideal \n");
    }
    
    return 0;
}
