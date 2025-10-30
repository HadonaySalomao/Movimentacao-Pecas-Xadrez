void moverBispo(int atual, int qtd_casas, char direcao[20]) {
    if (atual > qtd_casas) 
        return;

    printf("Bispo moveu para a casa %d na direção %s (diagonal)\n", atual, direcao);

    moverBispo(atual + 1, qtd_casas, direcao); 
}

void moverCavalo(int passo, int qtd_casas, int x, int y, char direcao[20]) {
    if (passo > qtd_casas)

    printf("Movimento %d: Cavalo está em (%d, %d)\n", passo, x, y);

    
    if (direcao[0] == 'f') {
        x += 2;
        if (direcao[1] == 'd') y += 1; 
        else if (direcao[1] == 'e') y -= 1; 
    } else if (direcao[0] == 't') { 
        x -= 2;
        if (direcao[1] == 'd') y += 1;
        else if (direcao[1] == 'e') y -= 1;
    }

    moverCavalo(passo + 1, qtd_casas, x, y, direcao);
}



int main(){
    int opc;
    char direcao[50];
    int qtd_casas;
    int x_inicial = 4, y_inicial = 4;
    printf("=============MENU===============\n");
    printf("Escolha qual peça ira movimentar\n");
    printf("1- Rainha. Direção(Livre)\n");
    printf("2- Torre. Direção(linha reta horizontalmente ou verticalmente)\n");
    printf("3- Bispo. Direção(Move-se na diagonal)\n");
    printf("3- Cavalo. Direção(Move-se linha reta)\n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
            printf("Você escolheu a Rainha!\n");
            printf("Quantas casas deseja andar?\n");
            scanf("%d", &qtd_casas);
            printf("Qual direção?\n");
            scanf("%s",&direcao);
            for(int i=1; i<=qtd_casas; i++){
                printf("Rainha moveu para a casa %d na direção %s\n", i, direcao);
            }
        break;
    case 2: 
            printf("Você escolheu a Torre podendo se mover em Vertical ou Horizontal!\n");
            printf("Quantas casas deseja andar?\n");
            scanf("%d", &qtd_casas);
            printf("Vertical ou Horizontal?\n");
            scanf("%s",&direcao); 
            int i=1;
            
            while(i<=qtd_casas){
                printf("A torre moveu para a casa %d na direção %s\n", i, direcao);
                i++;
            }
        break;

        case 3:
            printf("Você escolheu o Bispo!\n");
            printf("Quantas casas deseja andar?\n");
            scanf("%d", &qtd_casas);
            printf("Qual direção? (ex: diagonal esquerda ou direita)\n");
            scanf("%s", direcao);

            moverBispo(1, qtd_casas, direcao);
            break;    
        case 4:
            printf("Você escolheu o Cavalo!\n");
            printf("Quantos movimentos em L deseja fazer?\n");
            scanf("%d", &qtd_casas);
            printf("Qual direção? (ex: fd = frente-direita, fe = frente-esquerda, td = tras-direita, te = tras-esquerda)\n");
            scanf("%s", direcao);

            moverCavalo(1, qtd_casas, x_inicial, y_inicial, direcao);
            break;
            
            
    default:
            printf("Opção inválida!\n");
        break;
    }
    return 0;
}