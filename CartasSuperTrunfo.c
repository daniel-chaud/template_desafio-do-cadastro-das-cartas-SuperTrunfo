#include <stdio.h>

/*Aqui vamos definir as variáveis, que nada mais são que as caracterìsticas das cartas do
nosso jogo, lembrando que precisaremos criar cada uma delas referente ao número de cartas!

obs: Se atente para as limitações dos campos que envolvem números grandes: 
Área por Km² e População, de preferência nesta versão não escreva números com separadores de milhar...
*/

int main() {
char estado1[20],  estado2[20]; // As variáveis acompanham números junto, para sabermos de qual carta é
char cidade1[20],  cidade2[20];
char codcarta1[4], codcarta2[4];

int pturisticos1, pturisticos2;
unsigned long int populacao1, populacao2;

float area1, area2;
float pib1, pib2;

float densidade1, densidade2; // Aqui no desafio aventureiro, seguimos a mesma lógica dos números por carta
float pibpercap1, pibpercap2;

// ↑ Aqui conseguimos definir quais serão os "Tópicos" das cartas.

int resultpopula1, resultpopula2, resultarea1, resultarea2, resultpib1, resultpib2;
int resultpt1, resultpt2, resultdensi1, resultdensi2, resultppc1, resultppc2;
/* Aqui no nível mestre optei por criar uma para cada, e no final vamos ter o trabalho de
definir uma a uma, comparando-as diretamente para que a gente possa chegar ao nosso resultado
*/
 


// AQUI TERMINAMOS DE DEFINIR e salvar os resultados da carta 1, para que possamos mostrar na carta final.


// Vamos criar o SUPER PODER e toda a sua lógica

float superpoder1, superpoder2;  

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
scanf("%lu", &populacao1);

printf("Qual a área em KM²?(escreva sem os separadores de milhar): ");
scanf("%f", &area1);

printf("Qual o PIB? (escreva sem os separadores de milhar): ");
scanf("%f", &pib1);

printf("Quantos pontos turisticos existem em %s?: ", cidade1);
scanf("%d", &pturisticos1);

printf("Agora para terminarmos, dê um Código de 3 dígitos para a sua carta: ");
scanf("%s", codcarta1);

// ↑ Aqui terminamos a captação de dados do usuário e vamos para o resumo da carta criada.↓

densidade1 =  (float) (populacao1 / area1) ; //Além de criarmos as variáveis, também as definimos.
pibpercap1 = (float) (pib1 / populacao1);
superpoder1 = (float)populacao1 + area1 + pib1 + (float)pturisticos1 + pibpercap1 + (1.0 / densidade1); 

printf("Muito bem, Carta criada com sucesso, abaixo o resumo da carta criada!\n");
printf("\n");
printf("\n");
printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
printf("\n");
printf("%s\n", codcarta1);
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("População: %lu Habitantes\n", populacao1);
printf("Área em Km²: %.2f Km²\n", area1);
printf("PIB: %.2f Bilhões de Reais\n", pib1);
printf("Número de Pontos Turísticos: %d Pontos Turísticos\n", pturisticos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibpercap1);
printf("Super Poder: Valor %.2f\n", superpoder1);
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
scanf("%lu", &populacao2);

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
densidade2 = (float) (populacao2 / area2) ; 
pibpercap2 = (float) (pib2 / populacao2);
superpoder2 = (float)populacao2 + area2 + pib2 + (float)pturisticos2 + pibpercap2 + (1.0 / densidade2);
printf("\n");
printf("\n");


printf("/////////////////////////////////////////////////////////////////////////////////////////\n");

printf("\n");
printf("%s\n", codcarta2);
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("População: %lu Habitantes\n", populacao2);
printf("Área em Km²: %.2f Km²\n", area2);
printf("PIB: %.2f Bilhões de Reais\n", pib2);
printf("Número de Pontos Turísticos: %d Pontos Turísticos\n", pturisticos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibpercap2);
printf("Super Poder: Valor %.2f\n", superpoder2);
printf("\n");

printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
printf("\n");

//Aqui decidi apresentar as 2 juntas, para o usuário ver o que acabou de criar.
printf("Agora vou te mostrar as cartas criadas!↓↓↓\n");
printf(" ");

resultpopula1 = populacao1 > populacao2;
resultarea1= area1 > area2;
resultpib1= pib1 > pib2;
resultpt1 = pturisticos1 > pturisticos2;
resultdensi1 = densidade1 < densidade2;
resultppc1 = pibpercap1 > pibpercap2;

printf("\n");
printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
printf("Com as cartas em mente vamos ao jogo! abaixo você verá a comparação em ação, 1 significa que a carta 1 venceu, e 0 que a Carta 2 venceu.");
printf("\n");

//Carta de Comparação
printf("\nComparação de Cartas:\n");
printf("População: Carta 1 venceu (%d), → Carta 1 (%d), Carta 2 (%d)\n", resultpopula1, populacao1, populacao2);
printf("Área: Carta 1 venceu (%d), → Carta 1 (%.2f), Carta 2 (%.2f)\n", resultarea1, area1, area2);
printf("PIB: Carta 1 venceu (%d), → Carta 1 (%.2f), Carta 2 (%.2f)\n", resultpib1, pib1, pib2);
printf("Pontos Turísticos: Carta 1 venceu (%d), → Carta 1 (%d), Carta 2 (%d)\n", resultpt1, pturisticos1, pturisticos2);
printf("Densidade Populacional: Carta 1 venceu (%d), → Carta 1 (%.2f), Carta 2 (%.2f)\n", resultdensi1, densidade1, densidade2); 
printf("PIB per Capita: Carta 1 venceu (%d), → Carta 1 (%.2f), Carta 2 (%.2f)\n", resultppc1, pibpercap1, pibpercap2);  
printf("Super Poder: Carta 1 venceu (%d), → Carta 1 (%.2f), Carta 2 (%.2f)\n", superpoder1 > superpoder2, superpoder1,superpoder2);

printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
printf("\n");

return 0;

}
