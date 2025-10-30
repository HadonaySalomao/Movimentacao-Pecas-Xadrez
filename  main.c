void moverBispo(int atual, int qtd_casas, char direcao[20]) {
    if (atual > qtd_casas) // caso base: quando já andou todas as casas
        return;

    printf("Bispo moveu para a casa %d na direção %s (diagonal)\n", atual, direcao);

    moverBispo(atual + 1, qtd_casas, direcao); 
}


int main(){
    int opc;
    char direcao[50];
    int qtd_casas;
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
    default:
            printf("Opção inválida!\n");
        break;
    }
    return 0;
}