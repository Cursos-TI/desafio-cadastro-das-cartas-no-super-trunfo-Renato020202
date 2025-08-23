 #include <stdio.h>

int main(){

    char letra[100];
    char codigo[100];
    char cidade[100];
    int  população;
    float area;
    float PIB;
    int  pontoturistico;

    char letra2[100];
    char codigo2[100];
    char cidade2[100];
    int população2;
    float area2;
    float PIB2;
    int pontoturistico2;

 // informaçãoes sobre a primeira carta~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    printf("Carta 1\n");
 
    printf("\ndigite a letra do estado:");
    scanf("%s", letra);

    printf("\ndigite o codigo da carta:");
    scanf("%s",  codigo);

    printf("\ndigite o nome da cidade:");
    scanf("%s", cidade);

    printf("\ndigite o numero de habitantes: ");
    scanf("%d", &população);

    printf("\ndigite a area em km:");
    scanf("%f", &area);

    printf("\ndigite o PIB:");
    scanf("%f", &PIB);

    printf("\ndigite o numero de ponto turisticos:");
    scanf("%d", &pontoturistico);
    printf("\n");

// informacões da segunda carta~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    printf(" Carta 2\n");
    printf("\n");

    printf(" \ndigite a letra do estado:");
    scanf("%s", letra2);

    printf(" \ndigite o codigo da carta:");
    scanf("%s", codigo2);

    printf( " \ndigite o nome da cidade:");
    scanf("%s", cidade2);

    printf( " \ndigite o numero de habitantes:");
    scanf("%d", &população2);

    printf("\ndigite a area em km:");
    scanf("%f", &area2);

    printf("\ndigite o PIB:");
    scanf("%f", &PIB2);

    printf("\ndigite o numero de ponto turisticos:");
    scanf("%d", &pontoturistico2);
    printf("\n");



// painel de amostra das duas cartas

// primeira carta
printf("primeira carta ");
printf(" \na letra do estado:%s", letra);
printf(" \ncodigo da carta:%s", codigo);
printf(" \nnome da cidade:%s", cidade);
printf(" \nnumero de habitantes:%d", população);
printf(" \na area é:%f km", area);
printf(" \nPIB:%f bilhoês de reais", PIB);
printf(" \nnumero de pontos turisticos:%d", pontoturistico);

printf("\n");

// segunda carta
printf(" \nsegunda carta");
printf(" \na letra do estado:%s", letra2);
printf(" \ncodigo da carta:%s", codigo2);
printf(" \nnome da cidade:%s", cidade2);
printf(" \nnumero de habitantes:%d", população2);
printf(" \na area é:%f km", area2);
printf(" \nPIB:%f bilhoês de reais", PIB2);
printf(" \nnumero de pontos turisticos:%d", pontoturistico2);


    return 0;







}