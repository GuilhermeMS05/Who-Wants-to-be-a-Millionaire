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

        "PERGUNTA N�1\nQuem foi o primeiro Rei de Portugal?\na)D. Afonso Henriques      b)D. Jo�o\n\nc)Ant�nio Costa            d)Andr� Ventura\n",
        "PERGUNTA N�2\nQuantas horas tem o dia?\na)12 horas      b)16 horas\n\nc)24 horas      d)8 horas\n",
        "PERGUNTA N�3\nEm que cidade se encontra o �Empire State Building�\na)Washington      b)Nova Iorque\n\nc)Boston          d)Seattle\n",
        "PERGUNTA N�4\nH2O � a f�rmula qu�mica da:\na)vinho      b)oxig�nio\n\nc)�gua       d)hidrog�nio\n",
        "PERGUNTA N�5\nQual o maior �rg�o do corpo humano?\na)Pele      b)F�gado\n\nc)Pulm�es   d)Est�mago",
        "PERGUNTA N�6\nQual foi o planeta que passou a ser considerado um planeta an�o?\na)Terra      b)Urano\n\nc)J�piter    d)Plut�o\n",
        "PERGUNTA N�7\nQual destes pa�ses participou na Guerra Fria?\na)Andorra      b)R�ssia\n\nc)Maldivas     d)Liechtenstein\n",
        "PERGUNTA N�8\nEm que pa�s se encontra Munique?\na)It�lia      b)Alemanha\n\nc)Espanha     d)Gr�cia\n",
        "PERGUNTA N�9\nQual � o nome que se d� a um espa�o desprovido de mat�ria?\na)V�cuo      b)�tomo\n\nc)Bos�o      d)Aglomerado\n",
        "PERGUNTA N�10\nQual o s�mbolo da revolu��o de 25 de Abril de 1974 em Portugal?\na)Espingarda G3      b)Coroa de louro\n\nc)Rosa vermelha      d)Cravo vermelho\n",
        "PERGUNTA N�11\nQual � o nome do primeiro astronauta a pisar na Lua?\na)Buzz Aldrin      b)Chuck Norris\n\nc)Neil Armstrong   d)Michael Collins\n",
        "PERGUNTA N�12\nSophia de Mello Breyner era:\na)Escritora      b)Rep�rter\n\nc)Jornalista     d)Atriz\n",
        "PERGUNTA N�13\nQue animal ladra?\na)Gato      b)P�ssaro\n\nc)R�        d)C�o\n",
        "PERGUNTA N�14\nEm que ano Portugal descobriu o Brasil?\na)1489      b)1531\n\nc)1500      d)1722\n",
        "PERGUNTA N�15\nQual � a f�rmula qu�mica do di�xido de carbono?\na)H2O      b)CO2\n\nc)CH4      d)C2H6O"
    };
    int najuda;
    int metade = 0, telefonar = 0;

    system("color 3");
    printf("********************************************************************\n*************************  SEJA BEM VINDO  *************************\n******************************   AO   ******************************\n********************  QUEM QUER SER MILION�RIO  ********************\n********************************************************************\n");
    printf("\nDIGITE SEU NOME:\n");
    gets(nome);
    system("cls");

    printf("OL� %s, NO QUEM QUER SER MILION�RIO 15 PERGUNTAS SEPARAM CADA PARTICIPANTE DO PR�MIO DE 1.000.000 DE EUROS. CADA UMA TEM UM VALOR DIFERENTE, A PRIMEIRA VALE 500.00 EUROS E A �LTIMA 1.000.000 DE EUROS.", nome);
    printf("\n\n\t\t    T A B E L A\n\t\t15: 1.000.000 DE EUROS\n\t\t14: 500.000 EUROS\n\t\t13: 300.000 EUROS\n\t\t12: 150.000 EUROS\n\t\t11: 100.000 EUROS\n\t\t10: 50.000 EUROS - 2� Porto Seguro\n\t\t9:  30.000 EUROS\n\t\t8:  20.000 EUROS\n\t\t7:  15.000 EUROS\n\t\t6:  10.000 EUROS\n\t\t5:  5.000 EUROS - 1� Porto Seguro\n\t\t4:  3.000 EUROS\n\t\t3:  2.000 EUROS\n\t\t2:  1.000 EUROS\n\t\t1:  500.00 EUROS\n\n\n");
    printf("\t\t\t\t\t***ATEN��O***\n\n");
    printf("VOC� TEM DIREITO A 2 AJUDAS. AS AJUDAS S�O ESSAS:\n1� AJUDA: 50:50: O computador elimina aleatoriamente duas respostas erradas, ficando apenas com a resposta certa e uma resposta errada.\n");
    printf("2� AJUDA: Telefonar: O concorrente tem 30 segundos para falar com algu�m da sua escolha que possa lhe ajudar.\n");

    system("pause");
    system("cls");

    system("color 6");// PERGUNTA N�1
    printf("%s\n", perguntas[0]);

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            do
            {
                printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                scanf("%d", &najuda);

            }while(najuda != 1 && najuda != 2);
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
            case 1:
                metade = 1;
                printf("\na)D. Afonso Henriques\n\t\t\td)Andr� Ventura\n");
                do
                {
                    printf("Insira sua resposta: ");
                    scanf(" %c", &resp);

                }while(resp != 'a' && resp != 'A' && resp != 'd' && resp != 'D');
                break;

            case 2:
                telefonar = 1;
                printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
                sleep(30);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

           default:
               printf("Op��o Inv�lida!");

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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
            system("color 2");
            printf("A sua resposta est� CORRETA\n");
            printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t500.00 EUROS\n\n---------------------------------------------------------------------------------------\n");
            system("pause");
            break;

       case 'b':
       case 'B':
            system("color 4");
            printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no QUEM QUER SER MILION�RIO, %s.\n", nome);
            exit(0);
            break;

       case 'c':
       case 'C':
            system("color 4");
            printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
            exit(0);
            break;

       case 'd':
       case 'D':
            system("color 4");
            printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
            exit(0);
            break;

       default:
            system("color 4");
            printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
            exit(0);
    }

{// PERGUNTA N�2

    system("cls");
    system("color 6");
    printf("%s\n", perguntas[1]);

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!");

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
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
               sleep(1);
               do
               {
                   printf("\nAcabou o tempo.\nInsira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

           default:
               printf("Op��o Inv�lida!");

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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no QUEM QUER SER MILION�RIO, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t1.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }


}
{// PERGUNTA N�3
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[2]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!");

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
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida"); printf("ol�");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
        case 'a':
        case 'A':
            system("color 4");
            printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
            exit(0);
            break;

        case 'b':
        case 'B':
            system("color 2");
            printf("A sua resposta est� CORRETA\n");
            printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t2.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
            system("pause");
            break;

        case 'c':
        case 'C':
            system("color 4");
            printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
            exit(0);
            break;

        case 'd':
        case 'D':
            system("color 4");
            printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
            exit(0);
            break;

        default:
            system("color 4");
            printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
            exit(0);

    }
}
{// PERGUNTA N�4
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[3]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!"); printf("ola");

    }


    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("\nc)�gua       d)hidrog�nio\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

           case 2:
               telefonar = 1;
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;


       case 'c':
       case 'C':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t3.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }

}
{// PERGUNTA N�5
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[4]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!"); printf("ola");

    }


    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("a)Pele\n    \t    d)Est�mago\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'd' && resp != 'D');
               break;

           case 2:
               telefonar = 1;
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t5.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;


       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA N�6
    system("cls");
    system("color 2");
    printf("----------------------------------------------------------------------------------------\n\t\t\tVoc� chegou no primeiro porto seguro.\n\t\t    Deseja continuar ou levar 5.000 Euros para casa?\n\t\tCaso queira continuar insira C, caso queira sair insira S.\n");
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
            printf("\nEnt�o muito obrigado pela sua participa��o no Quem quer ser milion�rio.\n");
            exit(0);
            break;

        default:
            printf("Op��o Inv�lida!");
    }

    system("color 6");
    printf("%s\n", perguntas[5]);

    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!"); printf("ola");

    }


    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("a)Terra\n   \t     d)Plut�o\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'd' && resp != 'D');
               break;

           case 2:
               telefonar = 1;
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;


       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t10.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA N�7
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[6]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
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
               printf("a)Andorra      b)R�ssia\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B');
               break;

           case 2:
               telefonar = 1;
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t15.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'c':
       case 'C':
           system("color 2");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 2");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 2");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA N�8
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[7]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!"); printf("ola");

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
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t20.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA N�9
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[8]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!"); printf("ola");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("a)V�cuo      b)�tomo\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B');
               break;

           case 2:
               telefonar = 1;
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t30.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA N�10
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[9]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!");

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
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t50.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA N�11
    system("cls");
    system("color 2");
    printf("----------------------------------------------------------------------------------------\n\t\t\tVoc� chegou no segundo porto seguro.\n\t\t  Deseja continuar ou levar 50.000 Euros para casa?\n\t      Caso queira continuar insira C, caso queira sair insira S.\n");
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
            printf("\nEnt�o muito obrigado pela sua participa��o no Quem quer ser milion�rio.\n");
            exit(0);
            break;
        default:
            printf("Op��o Inv�lida!");
    }

    system("cls");
    system("color 6");
    printf("%s\n", perguntas[10]);

    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!"); printf("ola");

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
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t100.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA N�12
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[11]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!"); printf("ola");

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
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t150.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA N�13
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[12]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!"); printf("ola");

    }

    if (ajuda == 's' || ajuda == 'S') //DECIDIR QUAL AJUDA USAR
    {
        switch(najuda)
        {
           case 1:
               metade = 1;
               printf("\nc)R�        d)C�o\n");
               do
               {
                   printf("Insira sua resposta: ");
                   scanf(" %c", &resp);

               }while(resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
               break;

           case 2:
               telefonar = 1;
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'd':
       case 'D':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t300.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA N�14
    system("cls");
    system("color 6");
    printf("%s\n", perguntas[13]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!"); printf("ola");

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
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'b':
       case 'B':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       case 'c':
       case 'C':
           system("color 2");
           printf("A sua resposta est� CORRETA\n");
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t500.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           exit(0);

    }
}
{// PERGUNTA N�15
    system("cls");
    system("color 3");
    printf("---------------------------------------------------------------------------------------\n\n\t\tPARAB�NS!!! Voc� conseguiu chegar na pergunta do milh�o.\n\n\t\t\t\t\tBoa Sorte!!!\n\n---------------------------------------------------------------------------------------\n");
    system("pause");
    system("cls");

    system("color 6");
    printf("%s\n", perguntas[14]);
    najuda = 0;

    do
    {
        printf("%s, voc� quer recorrer a alguma das ajudas?(s/n)", nome);
        scanf(" %c", &ajuda);

    }while(ajuda != 's' && ajuda != 'S' && ajuda != 'n' && ajuda != 'N');

    switch(ajuda) //Chamar a fun��o ajuda
    {
        case 's':
        case 'S':
            if(metade == 1 && telefonar == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 2);
            }
            else if(telefonar == 1 && metade == 0)
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\nAjudas restantes: 1- 50/50\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1);
            }
            else if(metade == 1 && telefonar == 1)
            {
                do
                {
                    printf("N�o h� mais ajudas restantes.\nEnt�o insira sua resposta: ");
                    scanf(" %c", &resp);
                }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            }
            else
            {
                do
                {
                    printf("OK, ent�o escolha a ajuda digitando seus respectivos n�meros\n1- 50:50    2- Telefonar\n*");
                    scanf("%d", &najuda);

                }while(najuda != 1 && najuda != 2);
            }
            break;

        case 'n':
        case 'N':
            do
            {
                printf("Ent�o insira a sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            break;

        default:
            printf("Op��o inv�lida!");

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
               printf("Voc� tem 30 segundos para pedir ajuda a um amigo.");
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
                printf("Ent�o insira novamente sua resposta: ");
                scanf(" %c", &resp);

            }while(resp != 'a' && resp != 'A' && resp != 'b' && resp != 'B' && resp != 'c' && resp != 'C' && resp != 'd' && resp != 'D');
            printf("Sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

       case 'n':
       case 'N':
            printf("Ent�o sua resposta est�...\n");
            sleep(2);
            system("cls");
            break;

        default:
            printf("Op��o inv�lida");

    }

    switch(resp) //DECIDIR A RESPOSTA CORRETA
    {
       case 'a':
       case 'A':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           break;

       case 'b':
       case 'B':
           system("color 2");
           printf("Parab�nsss, %s!!! A sua resposta est� CORRETA.\nVoc� � o mais novo Milion�rio de Portugal.\n", nome);
           printf("\n---------------------------------------------------------------------------------------\n\n\t\t\t\t\t1.000.000 EUROS\n\n---------------------------------------------------------------------------------------\n");
           system("pause");
           break;

       case 'c':
       case 'C':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           break;

       case 'd':
       case 'D':
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);
           break;

       default:
           system("color 4");
           printf("\tA sua resposta est� errada.\nObrigado pela sua participa��o no jogo, %s.\n", nome);

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
        printf("\nEnt�o muito obrigado pela sua participa��o no Quem quer ser milion�rio.\n");

return 0;
}

