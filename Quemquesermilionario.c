#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

int ajuda(int tipo);


void jogar()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    char resp, cresp, ajuda, ps;
    char perguntas[15][200]=
    {

        "PERGUNTA Nº1\nQuem foi o primeiro Rei de Portugal?\na)D. Afonso Henriques      b)D. João\n\nc)António Costa            d)André Ventura\n",
        "PERGUNTA Nº2\nQuantas horas tem o dia?\na)12 horas      b)16 horas\n\nc)24 horas      d)8 horas\n",
        "PERGUNTA Nº3\nEm que cidade se encontra o “Empire State Building”\na)Washington      b)Nova Iorque\n\nc)Boston          d)Seattle\n",
        "PERGUNTA Nº4\nH2O é a fórmula química da:\na)vinho      b)oxigénio\n\nc)água       d)hidrogénio\n",
        "PERGUNTA Nº5\nQual o maior órgão do corpo humano?\na)Pele      b)Fígado\n\nc)Pulmões   d)Estômago",
        "PERGUNTA Nº6\nQual foi o planeta que passou a ser considerado um planeta anão?\na)Terra      b)Urano\n\nc)Júpiter    d)Plutão\n",
        "PERGUNTA Nº7\nQual destes países participou na Guerra Fria?\na)Andorra      b)Rússia\n\nc)Maldivas     d)Liechtenstein\n",
        "PERGUNTA Nº8\nEm que país se encontra Munique?\na)Itália      b)Alemanha\n\nc)Espanha     d)Grécia\n",
        "PERGUNTA Nº9\nQual é o nome que se dá a um espaço desprovido de matéria?\na)Vácuo      b)Átomo\n\nc)Bosão      d)Aglomerado\n",
        "PERGUNTA Nº10\nQual o símbolo da revolução de 25 de Abril de 1974 em Portugal?\na)Espingarda G3      b)Coroa de louro\n\nc)Rosa vermelha      d)Cravo vermelho\n",
        "PERGUNTA Nº11\nQual é o nome do primeiro astronauta a pisar na Lua?\na)Buzz Aldrin      b)Chuck Norris\n\nc)Neil Armstrong   d)Michael Collins\n",
        "PERGUNTA Nº12\nSophia de Mello Breyner era:\na)Escritora      b)Repórter\n\nc)Jornalista     d)Atriz\n",
        "PERGUNTA Nº13\nQue animal ladra?\na)Gato      b)Pássaro\n\nc)Rã        d)Cão\n",
        "PERGUNTA Nº14\nEm que ano Portugal descobriu o Brasil?\na)1489      b)1531\n\nc)1500      d)1722\n",
        "PERGUNTA Nº15\nQual é a fórmula química do dióxido de carbono?\na)H2O      b)CO2\n\nc)CH4      d)C2H6O"
    };
    int najuda;
    int metade = 0, telefonar = 0;

    system("color 3");
    printf("********************************************************************\n*************************  SEJA BEM VINDO  *************************\n******************************   AO   ******************************\n********************  QUEM QUER SER MILIONÁRIO  ********************\n********************************************************************\n");
    printf("\nDIGITE SEU NOME:\n");
    gets(nome);
    system("cls");

    printf("OLÁ %s, NO QUEM QUER SER MILIONÁRIO 15 PERGUNTAS SEPARAM CADA PARTICIPANTE DO PRÉMIO DE 1.000.000 DE EUROS. CADA UMA TEM UM VALOR DIFERENTE, A PRIMEIRA VALE 500.00 EUROS E A ÚLTIMA 1.000.000 DE EUROS.", nome);
    printf("\n\n\t\t    T A B E L A\n\t\t15: 1.000.000 DE EUROS\n\t\t14: 500.000 EUROS\n\t\t13: 300.000 EUROS\n\t\t12: 150.000 EUROS\n\t\t11: 100.000 EUROS\n\t\t10: 50.000 EUROS - 2º Porto Seguro\n\t\t9:  30.000 EUROS\n\t\t8:  20.000 EUROS\n\t\t7:  15.000 EUROS\n\t\t6:  10.000 EUROS\n\t\t5:  5.000 EUROS - 1º Porto Seguro\n\t\t4:  3.000 EUROS\n\t\t3:  2.000 EUROS\n\t\t2:  1.000 EUROS\n\t\t1:  500.00 EUROS\n\n\n");
    printf("\t\t\t\t\t***ATENÇÃO***\n\n");
    printf("VOCÊ TEM DIREITO A 2 AJUDAS. AS AJUDAS SÃO ESSAS:\n1ª AJUDA: 50:50: O computador elimina aleatoriamente duas respostas erradas, ficando apenas com a resposta certa e uma resposta errada.\n");
    printf("2ª AJUDA: Telefonar: O concorrente tem 30 segundos para falar com alguém da sua escolha que possa lhe ajudar.\n");

    system("pause");
    system("cls");

    system("color 6");// PERGUNTA Nº1
    printf("%s\n", perguntas[0]);

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            do
            {
                printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                scanf("%d", &najuda);

            }while(najuda != 1 && najuda != 2);
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
            case 1:
                metade = 1;
                printf("\na)D. Afonso Henriques\n\t\t\td)André Ventura\n");
                do
                {
                    printf("Insira sua resposta: ");
                    scanf(" %c", &resp);

                }while(resp != 'a' && resp != 'A' && resp != 'd' && resp != 'D');
                break;

            case 2:
                telefonar = 1;
                printf("Você tem 30 segundos para pedir ajuda a um amigo.");
                sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

           default:
               printf("Opção Inválida!");

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
            system("color 2");
            printf("A sua resposta está CORRETA\n");
            printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t500.00 EUROS\n\n---------------------------------------------------------------------------------------\n");
            system("pause");
            break;

       case 'b':
       case 'B':
            system("color 4");
            printf("\tA sua resposta está errada.\nObrigado pela sua participação no QUEM QUER SER MILIONÁRIO, %s.\n", nome);
            exit(0);
            break;

       case 'c':
       case 'C':
            system("color 4");
            printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
            exit(0);
            break;

       case 'd':
       case 'D':
            system("color 4");
            printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
            exit(0);
            break;

       default:
            system("color 4");
            printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
            exit(0);
    }

{// PERGUNTA Nº2

    system("cls");
    system("color 6");
    printf("%s\n", perguntas[1]);

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!");

    }


    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("a)12 horas\n\nc)24 horas\n");
               do
               {
                    printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'c' && resp != 'C');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(1);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

           default:
               printf("Opção Inválida!");

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no QUEM QUER SER MILIONÁRIO, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t1.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }


}
{// PERGUNTA Nº3
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[2]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("\t\t  b)Nova Iorque\nc)Boston\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(1);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;



        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida"); printf("olá");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
        case 'a':
        case 'A':
            system("color 4");
            printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
            exit(0);
            break;

        case 'b':
        case 'B':
            system("color 2");
            printf("A sua resposta está CORRETA\n");
            printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t2.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
            system("pause");
            break;

        case 'c':
        case 'C':
            system("color 4");
            printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
            exit(0);
            break;

        case 'd':
        case 'D':
            system("color 4");
            printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
            exit(0);
            break;

        default:
            system("color 4");
            printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
            exit(0);

    }
}
{// PERGUNTA Nº4
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[3]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!"); printf("ola");

    }


    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("\nc)água       d)hidrogénio\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;


       case 'c':
       case 'C':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t3.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }

}
{// PERGUNTA Nº5
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[4]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!"); printf("ola");

    }


    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("a)Pele\n    \t    d)Estômago\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'd' && resp != 'D');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t5.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;


       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA Nº6
    system("cls");
    system("color 2");
    printf("----------------------------------------------------------------------------------------\n\t\t\tVocê chegou no primeiro porto seguro.\n\t\t    Deseja continuar ou levar 5.000 Euros para casa?\n\t\tCaso queira continuar insira C, caso queira sair insira S.\n");
    printf("---------------------------------------------------------------------------------------\n");
    do
    {
        printf("R:");
        scanf(" %c", &ps);
    }while(ps != 'c' && ps != 'C' && ps != 's' && ajuda != 'S');

    switch(ps) // PORTO SEGURO
    {
        case 'c':
        case 'C':
            printf("Ok, Boa Sorte!\n");
            system("pause");
            system("cls");
            break;

        case 's':
        case 'S':
            system("cls");
            system("color 3");
            printf("\nEntão muito obrigado pela sua participação no Quem quer ser milionário.\n");
            exit(0);
            break;

        default:
            printf("Opção Inválida!");
    }

    system("color 6");
    printf("%s\n", perguntas[5]);

    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!"); printf("ola");

    }


    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("a)Terra\n   \t     d)Plutão\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'd' && resp != 'D');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;


       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t10.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA Nº7
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[6]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

    }


    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("a)Andorra      b)Rússia\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t15.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'c':
       case 'C':
           system("color 2");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 2");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 2");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA Nº8
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[7]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!"); printf("ola");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("              b)Alemanha\n\nc)Espanha\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t20.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA Nº9
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[8]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!"); printf("ola");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("a)Vácuo      b)Átomo\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t30.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA Nº10
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[9]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("c)Rosa vermelha      d)Cravo vermelho\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t50.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA Nº11
    system("cls");
    system("color 2");
    printf("----------------------------------------------------------------------------------------\n\t\t\tVocê chegou no segundo porto seguro.\n\t\t  Deseja continuar ou levar 50.000 Euros para casa?\n\t      Caso queira continuar insira C, caso queira sair insira S.\n");
    printf("---------------------------------------------------------------------------------------\n");
    do
    {
        printf("R:");
        scanf(" %c", &ps);
    }while(ps != 'c' && ps != 'C' && ps != 's' && ajuda != 'S');

    switch(ps)
    {
        case 'c':
        case 'C':
            printf("Ok, Boa Sorte!\n");
            system("pause");
            system("cls");
            break;

        case 's':
        case 'S':
            system("cls");
            system("color 3");
            printf("\nEntão muito obrigado pela sua participação no Quem quer ser milionário.\n");
            exit(0);
            break;
        default:
            printf("Opção Inválida!");
    }

    system("cls");
    system("color 6");
    printf("%s\n", perguntas[10]);

    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!"); printf("ola");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("                   b)Chuck Norris\n\nc)Neil Armstrong\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t100.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA Nº12
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[11]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!"); printf("ola");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("a)Escritora\n\nc)Jornalista\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'c' && resp != 'C');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t150.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA Nº13
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[12]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!"); printf("ola");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("\nc)Rã        d)Cão\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t300.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA Nº14
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[13]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!"); printf("ola");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("            b)1531\n\nc)1500\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 2");
           printf("A sua resposta está CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t500.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA Nº15
    system("cls");
    system("color 3");
    printf("---------------------------------------------------------------------------------------\n\n\t\tPARABÉNS!!! Você conseguiu chegar na pergunta do milhão.\n\n\t\t\t\t\tBoa Sorte!!!\n\n---------------------------------------------------------------------------------------\n");
    system("pause");
    system("cls");

    system("color 6");
    printf("%s\n", perguntas[14]);
    najuda = 0;

    do
    {
        printf("%s, você quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a função ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("Não há mais ajudas restantes.\nEntão insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, então escolha a ajuda digitando seus respectivos números\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Então insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Opção inválida!");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("           b)CO2\n\n           d)C2H6O\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'b' && resp != 'B' && resp != 'd' && resp != 'D');
               break;

           case 2:
               telefonar = 1;
               printf("Você tem 30 segundos para pedir ajuda a um amigo.");
               sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

        }
    }

    printf("\nRespondido - %c\n", resp);
    do
    {
        printf("Deseja alterar a sua resposta?(s/n): ");
        scanf(" %c", &cresp);

    }while(cresp != 's' && cresp != 'S' && cresp != 'n' && cresp != 'N');


    switch(cresp) //CONFIRMAR A RESPOSTA
    {
       case 's':
       case 'S':
            do
            {
                printf("Então insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Então sua resposta está...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Opção inválida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           break;

       case 'b':
       case 'B':
           system("color 2");
           printf("Parabénsss, %s!!! A sua resposta está CORRETA.\nVocê é o mais novo Milionário de Portugal.\n", nome);
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t1.000.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta está errada.\nObrigado pela sua participação no jogo, %s.\n", nome);

    }
}
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char op;
    jogar();

    system("pause");
    system("cls");
    system("color 3");
    printf("Deseja Jogar novamente?(S/N)");
    scanf(" %c",&op);

    if(op=='s')
        jogar();

    else
        system("cls");
        system("color 3");
        printf("\nEntão muito obrigado pela sua participação no Quem quer ser milionário.\n");

return 0;
}

