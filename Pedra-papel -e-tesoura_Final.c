#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main (){
	int opl,s_n,opc,win;
        setlocale(LC_ALL, "Portuguese");
        do{
        srand( (unsigned)time(NULL) );
        printf("<||||||||||||||||||||||||||||||||>\n");
        do{
        printf("    Bem vindo a Pedra Papel e tesoura\nAs regras s�o simples!");
		printf("\n-PEDRA ganha de TESOURA\n-TESOURA ganha de PAPEL\n-PAPEL ganha de PEDRA\n");
		printf("agora para jogar apenas escolha uma destas op��es");
		printf("\n(1)PEDRA\n(2)PAPEL\n(3)TESOURA\n");
		scanf("%d",&opl);
		if(opl<1 || opl>3)
            printf("-Voc� escolheu, uma alternativa errada\n\n!!!escolha uma das op��es validas!!!\n\n");
		}while(opl<1 || opl>3);
		if(opl==1)
            printf("-Voc� escolheu PEDRA\n\n");
            else if (opl==2)
                printf("-Voc� escolheu PAPEL\n\n");
            else if (opl==3)
                printf("-Voc� escolheu TESOURA\n\n");;
            int opc= rand () %(3 +1 - 1)+ 1;
        if(opc==1)
            printf("~PC escolheu PEDRA\n\n");
		else if (opc==2)
            printf("~PC escolheu PAPEL\n\n");
        else if (opc==3)
            printf("~PC escolheu TESOURA\n\n");
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
                printf("VOC� ganhou\n\n");
                else if (win==2)
                    printf("PC ganhou\n\n");
                else if(win==3)
                    printf("Empate\n\n");

                /*  redudante
                else
                    printf("\nERROR\n");
                */

        do{
		printf("Voce quer jogar novamente? \n\n(Sim-1)\n(N�o-2)\n\n");
		scanf("%d",&s_n);
		if(s_n<1 || s_n>2)
            printf("\n\n-Voc� escolheu, uma alternativa errada\n\n!!!escolha uma das op��es validas!!!\n\n");
            printf("\n<||||||||||||||||||||||||||||||||>\n\n");
		}while(s_n<1 || s_n>2);
        }while(s_n==1);
	printf("Obrigado pela partida\n");
	printf("\n<||||||||||||||||||||||||||||||||>\n\n");
}
