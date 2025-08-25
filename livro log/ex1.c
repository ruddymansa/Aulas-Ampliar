/*
    Escreva um programa que calcule o IMC de uma pessoa.
    
    IMC = peso / altura²

    E informe a classificação da pessoa:

    Se IMC for menor que 18,5 magreza
    Se IMC de 18,5 a 24,9, pessoa normal
    Se IMC de 25 a 29,9, sobrepeso
    De 30 para cima, obsidade
*/

 
#include <stdio.h>

int main() {
    float peso, altura;
    char nome, cor_da_pele, olho, cabelo, bom, ruim, crespo, liso, cacheado [200];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Olá, %S!\n", nome);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite sua cor_da_pele: ");
    scanf("%s", &cor_da_pele);
    printf("Digite a cor de seu olho: ");
    scanf("%s", &olho);

    printf("Nome: %s \npeso: %f \naltura: %f \ncor_da_pele: %s \nolho: %d \n", nome, peso, altura, cor_da_pele, olho);

    if(cabelo == crespo)
    {
        printf("Cabelo: %s" - "ruim", cabelo);
    }
    else if (cabelo == cacheado);
    {
        printf("Cabelo: %s" -"moderado");
    }
    else 
    {
        printf("Cabelo: %s" - "bom", cabelo);
}

        return 0;

}