#include <stdio.h>
int main(){
    

//dados da carta 1   (coloquei os nomes das variaveis de forma bem intuitiva)
char estado1[50];
char codigo1[3];
char nome1[50];
int populacao1;
float area1;
float pib1;
int pontos_turisticos1;
float densidadepopulacional1;
float pibpercapita1; 




printf ("** Digite os dados da carta 1 **\n");
printf("Digite a letra do Estado (A a H):\n");
scanf("%s",&estado1);

printf("Digite o codigo da carta (01 a 04):\n");
scanf("%s",&codigo1);

printf("Digite o nome da cidade:\n");
scanf("%s",&nome1);

printf("Digite o numero de habitantes:\n");
scanf("%d",&populacao1);

printf("Digite a area da cidade (em Km²):\n");
scanf("%f",&area1);

printf("Digite o PIB da cidade: (em bilhoes de reais)\n");
scanf("%f",&pib1);

printf("Digite a quantidade de pontos turisticos:\n");
scanf("%d",&pontos_turisticos1);

densidadepopulacional1 = populacao1 / area1;

pibpercapita1 = (pib1*1000000000) / populacao1;    // Multipliquei o PIB por 1 bilhão porque o valor digitado está em bilhões de reais.

puts("\n");





//dados da carta 2
char estado2[50];
char codigo2[3];
char nome2[50];
int populacao2;
float area2;
float pib2;
int pontos_turisticos2;
float densidadepopulacional2;
float pibpercapita2;




printf ("** Agora digite os dados da carta 2 **\n");
printf("Digite a letra do Estado (A a H):\n");
scanf("%s",&estado2);

printf("Digite o codigo da carta (01 a 04):\n");
scanf("%s",&codigo2);

printf("Digite o nome da cidade:\n");
scanf("%s",&nome2);

printf("Digite o numero de habitantes:\n");
scanf("%d",&populacao2);

printf("Digite a area da cidade (em Km²):\n");
scanf("%f",&area2);

printf("Digite o PIB da cidade: (em bilhoes de reais)\n");
scanf("%f",&pib2);

printf("Digite a quantidade de pontos turisticos:\n");
scanf("%d",&pontos_turisticos2);

densidadepopulacional2 = populacao2 / area2;

pibpercapita2 = (pib2*1000000000) / populacao2; // Multipliquei o PIB por 1 bilhão porque o valor digitado está em bilhões de reais.

puts("\n");





//exibiçao das informaçoes da carta 1
printf("Carta 1:\n");
printf("Estado: %s\n",estado1);
printf("Codigo: %s%s\n",estado1,codigo1);
printf("Nome da Cidade: %s\n",nome1);
printf("Populaçao: %d\n",populacao1);
printf("Area: %fKm²\n",area1);
printf("PIB: %f Bilhoes de reais\n",pib1);
printf("Numero de pontos turisticos: %d\n",pontos_turisticos1);
printf("Densidade Populacional: %.2f hab/km²\n",densidadepopulacional1);
printf("PIB per Capita: %.2f reais\n",pibpercapita1);
puts("");
printf("_____________________________________________________ \n");
puts("");




//exibiçao das informaçoes da carta 2
printf("Carta 2:\n");
printf("Estado: %s\n",estado2);
printf("Codigo: %s%s\n",estado2,codigo2);
printf("Nome da Cidade: %s\n",nome2);
printf("Populaçao: %d\n",populacao2);
printf("Area: %fKm²\n",area2);
printf("PIB: %f Bilhoes de reais\n",pib2);
printf("Numero de pontos turisticos: %d\n",pontos_turisticos2);
printf("Densidade Populacional: %.2f hab/km²\n",densidadepopulacional2);
printf("PIB per Capita: %.2f reais\n",pibpercapita2);
puts("");


return 0;
}