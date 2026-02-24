#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  /*Aqui vamos definir as variáveis, que nada mais são que as caracterìsticas das cartas do
nosso jogo, lembrando que precisaremos criar cada uma delas referente ao número de cartas!

obs: Se atente para as limitações dos campos que envolvem números grandes: 
Área por Km² e População, de preferência nesta versão não escreva números com separadores de milhar...
*/

char estado1[20],  estado2[20]; // As variáveis acompanham números ao final do nome, para sabermos de qual carta é
char cidade1[20],  cidade2[20];
char codcarta1[4], codcarta2[4];

int pturisticos1, pturisticos2;
int populacao1, populacao2;

float area1, area2;
float pib1, pib2;


// ↑ Aqui conseguimos definir quais serão os "Tópicos" das cartas.

//Vamos começar com boas vindas antes de captar essas informações.
printf("Olá seja bem vindo ao SUPER TRUNFO Cidades!\n");
printf("\n");
printf("Vamos cadastrar 2 Cartas para começar!\n");


// Captação de dados:
printf("\n");
printf("Digite o estado da carta, evite nomes compostos (ex:Rio de Janeiro): \n");
scanf("%s", estado1);

printf("Certo! Qual a cidade desta carta? evite nomes compostos (ex:Rio de Janeiro): \n");
scanf("%s", cidade1);

printf("Qual a população deste municipio?: ");
scanf("%d", &populacao1);

printf("Qual a área em KM²?(escreva sem os separadores de milhar): ");
scanf("%f", &area1);

printf("Qual o PIB? (escreva sem os separadores de milhar): ");
scanf("%f", &pib1);

printf("Quantos pontos turisticos existem em %s?: ", cidade1);
scanf("%d", &pturisticos1);

printf("Agora para terminarmos, dê um Código de 3 dígitos para a sua carta: ");
scanf("%s", codcarta1);

// ↑ Aqui terminamos a captação de dados do usuário e vamos para o resumo da carta criada.↓

printf("Muito bem, Carta criada com sucesso, abaixo o resumo da carta criada!\n");
printf("\n");
printf("\n");
printf("/////////////////////////////////////////////////////////////////////////////////////////\n");

// Aqui apresentamos a carta criada, utilizando os dados que o usuário digitou.
printf("\n");
printf("%s\n", codcarta1);
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("População: %d Habitantes\n", populacao1);
printf("Área em Km²: %.2f Km²\n", area1);
printf("PIB: %.2f Bilhões de Reais\n", pib1);
printf("Número de Pontos Turísticos: %d Pontos Turísticos\n", pturisticos1);

printf("\n");
printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
printf("\n");

// Assim finalizamos a apresentação da primeira carta. Vamos para a segunda, ela seguirá a mesma fórmula.

printf("Vamos criar próxima carta!\n");


// Captação de dados:
printf("\n");
printf("Digite o estado da carta, evite nomes compostos (ex:Rio de Janeiro): \n");
scanf("%s", estado2);

printf("Certo! Qual a cidade desta carta? evite nomes compostos (ex:Rio de Janeiro): \n");
scanf("%s", cidade2);

printf("Qual a população deste municipio?: ");
scanf("%d", &populacao2);

printf("Qual a área em KM²?(escreva sem os separadores de milhar): ");
scanf("%f", &area2);

printf("Qual o PIB? (escreva sem os separadores de milhar): ");
scanf("%f", &pib2);

printf("Quantos pontos turisticos existem em %s?: ", cidade2);
scanf("%d", &pturisticos2);

printf("Agora para terminarmos, dê um Código de 3 dígitos para a sua carta: ");
scanf("%s", codcarta2);

// ↑ Aqui terminamos a captação de dados do usuário e vamos para o resumo da carta criada.↓

printf("Muito bem, Carta criada com sucesso, abaixo o resumo da carta criada!\n");
printf("\n");
printf("\n");


printf("/////////////////////////////////////////////////////////////////////////////////////////\n");

printf("\n");
printf("%s\n", codcarta2);
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("População: %d Habitantes\n", populacao2);
printf("Área em Km²: %.2f Km²\n", area2);
printf("PIB: %.2f Bilhões de Reais\n", pib2);
printf("Número de Pontos Turísticos: %d Pontos Turísticos\n", pturisticos2);
printf("\n");

printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
printf("\n");

//Aqui decidi apresentar as 2 juntas, para o usuário ver o que acabou de criar.
printf("Agora vou te mostrar as cartas criadas!↓↓↓\n");


printf("\n");
printf("/////////////////////////////////////////////////////////////////////////////////////////\n");


//Carta 1
printf("\n");
printf("Carta 1\n");
printf("Código da carta: %s\n", codcarta1);
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("População: %d Habitantes\n", populacao1);
printf("Área em Km²: %.2f Km²\n", area1);
printf("PIB: %.2f Bilhões de Reais\n", pib1);
printf("Número de Pontos Turísticos: %d Pontos Turísticos\n", pturisticos1);
printf("\n");

//Carta 2
printf("\n");
printf("Carta 2\n");
printf("Código da carta: %s\n", codcarta2);
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("População: %d Habitantes\n", populacao2);
printf("Área em Km²: %.2f Km²\n", area2);
printf("PIB: %.2f Bilhões de Reais\n", pib2);
printf("Número de Pontos Turísticos: %d Pontos Turísticos\n", pturisticos2);
printf("\n");

printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
printf("\n");
printf("Parabéns, você criou suas primeiras cartas do Super Trunfo Cidades!\n");
// Aqui finalizamos o desafio, onde o usuário conseguiu criar 2 cartas utilizando os dados que ele mesmo digitou, e depois apresentamos as cartas criadas para o usuário.
return 0;
}