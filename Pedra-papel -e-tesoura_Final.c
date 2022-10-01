#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main (){
	int opl,s_n,opc,win;
        setlocale(LC_ALL, "Portuguese");
        do{
        srand( (unsigned)time(NULL) );
        printf("|||||||||||||||||||||||||||||||\n");
        do{
        printf("    (0-0)!!<((Bem vindo a Pedra Papel e tesoura,\nas regras são simples!");
		printf("\n-PEDRA ganha de TESOURA\n-TESOURA ganha de PAPEL\n-PAPEL ganha de PEDRA,\n");
		printf("agora para jogar apenas escolha uma destas opções))");
		printf("\n(1)PEDRA\n(2)PAPEL\n(3)TESOURA\n");
		scanf("%d",&opl);
		if(opl<1 || opl>3)
            printf("---Voce escolheu, NADA...,\n\n!!!escolha uma das opções validas!!!\n\n");
		}while(opl<1 || opl>3);
		if(opl==1)
            printf("---Você escolheu PEDRA\n\n");
            else if (opl==2)
                printf("---Você escolheu PAPEL\n\n");
            else if (opl==3)
                printf("---Você escolheu TESOURA\n\n");
            int opc= rand () %(3 +1 - 1)+ 1;
        if(opc==1)
            printf("(0-0)/!! <((escolho PEDRA))\n\n");
		else if (opc==2)
            printf("(0-0)/!! <((escolho PAPEL))\n\n");
        else if (opc==3)
            printf("(0-0)/!! <((escolho TESOURA))\n\n");
	/*
        redudante devido a melhor codigo

        if(opl==1 && opc==3)
            win=1;
            else if(opl==3 && opc==2)
            win=1;
            else if(opl==2 && opc==1)
            win=1;
            else if (opl==opc)
                */

            if(opl==1 && opc==3|| opl==3 && opc==2||opl==2 && opc==1)
            win=1;
            else if (opl==opc)
            win=3;
            else
            win=2;
            if(win==1)
                printf("\n(-_-)... <((Você ganhou..))\n\n");
                else if (win==2)
                    printf("\n\(0 - 0)/!!  <((Eu ganhei!!))\n\n");
                else if(win==3)
                    printf("( 0 _. 0).. <((Empate!!, meh..))\n\n");

                /*  redudante
                else
                    printf("\nERROR\n");
                */

        do{
		printf("(0-0)??<((Voce quer jogar novamente?)) \n\n(Sim-1)\n(Não-2)\n\n");
		scanf("%d",&s_n);
		if(s_n<1 || s_n>2)
            printf("---Voce escolheu, NADA?...,\n\n!!!escolha uma das opções validas!!!\n\n");
            printf("|||||||||||||||||||||||||||||||\n");
		}while(s_n<1 || s_n>2);
        }while(s_n==1);
	printf("Obrigado pela partida (0-<) ");
}
