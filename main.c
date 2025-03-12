// Biblioteca que possui comandos relativos � entrada e sa�da de dados do computador
#include <stdio.h>
// Biblioteca para fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras
#include <stdlib.h>

// Declara��o das vari�veis globais
int prodEscolhido, menuPrincipal, quantidade = 0;

// Fun��o principal
int main()
{
    // Declara��o de vari�veis do tipo float que envolver� dinheiro
    float total_limpeza, total_alimentos, total_padaria, totalDia;
    float total, desconto, total_desconto, valor_cliente, troco, valorCompra;

    // Declara��o de vari�veis do tipo inteiro para determinar a forma de pagamento do usu�rio
    int formaPagamento, cartao;

    // Declara��o de um auxiliar para armazenar a quantidade de itens caso o usu�rio queira mais produtos da mesma categoria
    int aux = 0;

    // Aqui ser� armazenado o caracter que o usuario escolher
    char compra;

    // Inicia o Do While que vai realizar todo o c�digo primeiro para depois analisar se a condi��o � verdadeira ou falsa
    do
    {
        // Deixando o menu mais agrad�vel para o usu�rio interagir
        printf("-------------------------------------------------\n");
        printf("*** Menu Principal ***\n");
        printf("-------------------------------------------------\n\n");

        // Categorias do Menu Principal
        printf("1. Materiais de Limpeza\n"
                "2. Venda de Alimentos\n"
                "3. Padaria\n"
                "4. Pagamento\n"
                "5. Sair (Finalizar Dia - Ver Historico)\n\n");

        // O usu�rio ir� escolher a categoria de produto
        printf("Digite o numero da categoria: ");
        // Aqui ficar� guardado a escolha que o usu�rio fez das categorias acima
        scanf("%d", &menuPrincipal);

        // Switch do Menu Principal
        switch (menuPrincipal)
        {
            // Caso o usu�rio escolha a op��o 1. Materiais de Limpeza do Menu Principal
            case 1:
                // Aqui come�a a parte do Do While da escolha de produtos da categoria 1. Material de Limpeza
                do
                {
                    // Deixando o menu mais agrad�vel para o usu�rio interagir
                    printf("-------------------------------------------------\n");
                    printf("*** 1. Material de Limpeza ***\n");
                    printf("-------------------------------------------------\n\n");

                    // Produtos da categoria 1. Material de Limpeza
                    printf("11 - Detergente - R$ 1.99\n"
                            "12 - Sabao em Po (1kg) - R$ 8.99\n"
                            "13 - Esponja - R$ 1.50\n"
                            "14 - Amaciante (1L) - R$ 15.00\n"
                            "15 - Voltar ao Menu Principal\n\n");

                    // O usu�rio escolhe o produto atrav�s do c�digo
                    printf("Digite o codigo do produto: ");
                    // Aqui ficar� guardado a escolha que o usu�rio fez das categorias acima
                    scanf("%d", &prodEscolhido);

                    // Switch dos produtos da categoria 1. Material de Limpeza
                    switch (prodEscolhido)
                    {
                        // Caso o usu�rio escolha a op��o 11 - Detergente - R$ 1.99
                        case 11:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 1.99;
                            // Atualiza o total gasto na categoria 1. Material de Limpeza
                            total_limpeza += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficar� armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produtos vendidos
                            aux = aux + quantidade;
                            // Faz o case 11 parar
                            break;

                        // Caso o usu�rio escolha a op��o 12 - Sabao em Po (1kg) - R$ 8.99
                        case 12:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                            // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 8.99;
                            // Atualiza o total gasto na categoria 1. Material de Limpeza
                            total_limpeza += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 12 parar
                            break;

                        // Caso o usu�rio escolha a op��o 13 - Esponja - R$ 1.50
                        case 13:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);
                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 1.50;
                            // Atualiza o total gasto na categoria 1. Material de Limpeza
                            total_limpeza += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 13 parar
                            break;

                        // Caso o usu�rio escolha a op��o 14 - Amaciante (1L) - R$ 15.00
                        case 14:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 15.00;
                            // Atualiza o total gasto na categoria 1. Material de Limpeza
                            total_limpeza += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 14 parar
                            break;

                        // Case o usu�rio escolha a op��o 15 - Voltar ao Menu Principal
                        case 15:
                            // Deixando o menu mais agrad�vel para o usu�rio interagir
                            printf("-------------------------------------------------\n");
                            printf("*** Voltar ao Menu Principal ***\n");
                            printf("-------------------------------------------------\n\n");

                            // Mostrando para o usuario se ele quer permanecer ou n�o da categoria que escolheu
                            printf("Deseja permanecer nessa categoria? Digite S para Sim ou N para Nao: ");
                            // Guarda a escolha do usu�rio
                            scanf(" %c", &compra);
                            // Faz o case 15 parar
                            break;

                        // Caso o usu�rio n�o escolha nenhuma das op��es listadas
                        default:
                            printf("*** Escolha invalida ***\n");
                            continue;
                    }

                    // Encerramento do Do While da categoria 1. Material de Limpeza
                } while (compra == 'S' || compra == 's');
                // Faz o Switch da categoria 1. Material de Limpeza parar
                break;

                // Caso o usu�rio escolha a op��o 2. Venda de Alimentos do Menu Principal
            case 2:
                // Aqui come�a a parte do Do While da escolha de produtos da categoria 2. Venda de Alimentos
                do
                {
                    // Deixando o menu mais agrad�vel para o usu�rio interagir
                    printf("-------------------------------------------------\n");
                    printf("*** 2. Venda de Alimentos ***\n");
                    printf("-------------------------------------------------\n\n");

                    // Produtos da categoria 2. Venda de Alimentos
                    printf("21 - Cafe - R$ 19.99\n"
                            "22 - Leite (caixinha) - R$ 5.90\n"
                            "23 - Arroz (1kg) - R$ 4.50\n"
                            "24 - Feijao Preto (1kg) - R$ 8.00\n"
                            "25 - Acucar (1kg) - R$ 5.00\n"
                            "26. Voltar ao Menu Principal\n\n");

                    // O usu�rio escolhe o produto atrav�s do c�digo
                    printf("Digite o codigo do produto: ");
                    // Aqui ficar� guardado a escolha que o usu�rio fez dos produtos
                    scanf("%d", &prodEscolhido);

                    // Switch dos produtos da categoria 2. Venda de Alimentos
                    switch (prodEscolhido)
                    {
                        // Caso o usu�rio escolha a op��o 21 - Cafe - R$ 19.99
                        case 21:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 19.99;
                            // Atualiza o total gasto na categoria 2. Venda de Alimentos
                            total_alimentos += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 21 parar
                            break;

                        // Caso o usu�rio escolha a op��o 22 - Leite (caixinha) - R$ 5.90
                        case 22:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 5.90;
                            // Atualiza o total gasto na categoria 2. Venda de Alimentos
                            total_alimentos += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 22 parar
                            break;

                        // Caso o usu�rio escolha a op��o 23 - Arroz (1kg) - R$ 4.50
                        case 23:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 4.50;
                            // Atualiza o total gasto na categoria 2. Venda de Alimentos
                            total_alimentos += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 23 parar
                            break;

                        // Caso o usu�rio escolha a op��o 24 - Feijao Preto (1kg) - R$ 8.00
                        case 24:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 8.00;
                            // Atualiza o total gasto na categoria 2. Venda de Alimentos
                            total_alimentos += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 24 parar
                            break;

                        // Caso o usu�rio escolha a op��o 25 - Acucar (1kg) - R$ 5.00
                        case 25:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 5.00;
                            // Atualiza o total gasto na categoria 2. Venda de Alimentos
                            total_alimentos += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 25 parar
                            break;

                        // Caso o usu�rio escolha a op��o 26. Voltar ao Menu Principal
                        case 26:
                            // Deixando o menu mais agrad�vel para o usu�rio interagir
                            printf("-------------------------------------------------\n");

                            printf("*** Voltar ao Menu Principal ***\n");
                            printf("-------------------------------------------------\n\n");

                            // Mostrando para o usuario as opcoes de escolha que ele tem
                            printf("Deseja permanecer nessa categoria? Digite S para Sim ou N para Nao: ");
                            // Guarda a escolha do usu�rio
                            scanf(" %c", &compra);
                            // Faz o case 26 parar
                            break;

                        // Caso o usu�rio n�o escolha nenhuma das op��es listadas
                        default:
                            printf("*** Escolha invalida ***\n");
                            continue;
                    }

                    // Encerramento do Do While da categoria de Venda de Alimentos
                } while (compra == 'S' || compra == 's');
                // Faz o Switch da categoria 2. Venda de Alimentos parar
                break;

                // Caso o usu�rio escolha a op��o 3. Padaria do Menu Principal
            case 3:
                // Aqui come�a a parte do Do While da escolha de produtos da categoria 3. Padaria
                do
                {
                    // Deixando o menu mais agrad�vel para o usu�rio interagir
                    printf("-------------------------------------------------\n");
                    printf("*** 3. Padaria ***\n");
                    printf("-------------------------------------------------\n\n");

                    // Produtos da categoria 3. Padaria
                    printf("31 - Pao de Forma - R$ 9.50\n"
                            "32 - Pao Integral - R$ 12.50\n"
                            "33 - Pao Frances (unidade) - R$ 1.90\n"
                            "34 - Sonho - R$ 8.50\n"
                            "35 - Voltar ao Menu Principal\n\n");

                    // O usu�rio escolhe o produto atrav�s do c�digo
                    printf("Digite o codigo do produto: ");
                    // Aqui ficar� guardado a escolha que o usu�rio fez dos produtos
                    scanf("%d", &prodEscolhido);

                    // Switch dos produtos da categoria 3. Padaria
                    switch (prodEscolhido)
                    {
                        // Caso o usu�rio escolha a op��o 31 - Pao de Forma - R$ 9.50
                        case 31:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 9.50;
                            // Atualiza o total gasto na categoria 3. Padaria
                            total_alimentos += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 31 parar
                            break;

                        // Caso o usu�rio escolha a op��o 32 - Pao Integral - R$ 12.50
                        case 32:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 12.50;
                            // Atualiza o total gasto na categoria 3. Padaria
                            total_alimentos += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 32 parar
                            break;

                        // Caso o usu�rio escolha a op��o 33 - Pao Frances (unidade) - R$ 1.90
                        case 33:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a op��o do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 1.90;
                            // Atualiza o total gasto no setor
                            total_alimentos += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 33 parar
                            break;

                        // Caso o usu�rio escolha a op��o 34 - Sonho - R$ 8.50
                        case 34:
                            // Solicita a quantidade do produto
                            printf("Informe a quantidade do produto: ");
                            // Guarda a escolha do usu�rio
                            scanf("%d", &quantidade);

                             // Aqui come�a o Do While para tratativa de erro sobre produto negativo
                            do{
                                // Estamos observando se a quantidade informada pelo usuario foi negativa caso ela for ele entrara no IF
                                if (quantidade <= 0){
                                    // Solicita a quantidade do produto
                                    printf("Favor informe a quantidade do produto mair que 0: ");
                                    // Guarda a escolha do usu�rio
                                    scanf("%d", &quantidade);
                                }//Aqui finaliza o IF
                            // Encerramento do Do While para ver se a quantidade for menor que 0 caso sim ele ficara em um loop
                            }while (quantidade <= 0);

                            // Calcula o valor que o cliente deve pagar
                            valorCompra = quantidade * 8.50;
                            // Atualiza o total gasto na categoria 3. Padaria
                            total_alimentos += valorCompra;
                            // Totaliza todas as categorias para calcular o valor total
                            total = total_alimentos + total_limpeza + total_padaria;
                            // Quebra de linha
                            printf("\n");
                            // Pergunta se o usu�rio quer adicionar mais produtos dessa categoria
                            printf("Deseja adicionar mais produtos? Digite S para Sim ou N para Nao: ");
                            // Aqui ficara armazenda o valor que o usu�rio digitar
                            scanf(" %c", &compra);
                            // Quebra de linha
                            printf("\n");
                            // Aqui tem um auxiliar para guardar o valor da quantidade de produto vendido
                            aux = aux + quantidade;
                            // Faz o case 34 parar
                            break;

                        // Caso o usu�rio escolha a op��o 35 - Voltar ao Menu Principal
                        case 35:
                            // Deixando o menu mais agrad�vel para o usu�rio interagir
                            printf("-------------------------------------------------\n");
                            printf("*** Voltar ao Menu Principal ***\n");
                            printf("-------------------------------------------------\n\n");

                            // Mostrando para o usuario as opcoes de escolha que ele tem
                            printf("Deseja permanecer nessa categoria? Digite S para Sim ou N para Nao: ");
                            // Guarda a op��o do usu�rio
                            scanf(" %c", &compra);
                            // Faz o case 35 parar
                            break;

                        // Caso o usu�rio n�o escolha nenhuma das op��es listadas
                        default:
                            printf("*** Escolha invalida ***\n");
                            continue;
                    }

                // Encerramento do Do While da categoria de Venda de Alimentos
                } while (compra == 'S' || compra == 's');
                // Faz o Switch da categoria 3. Padaria parar
                break;

            // Caso o usu�rio escolha a op��o 4. Pagamento do Menu Principal
            case 4:
                // In�cio do Do While da categoria 4. Pagamento
                do
                {
                    // Deixando o menu mais agrad�vel para o usu�rio interagir
                    printf("-------------------------------------------------\n");
                    printf("*** Pagamento ***\n");
                    printf("-------------------------------------------------\n\n");

                    // Op��es em Dinheiro ou Cart�o que o usu�rio tem que escolher
                    printf("1. Dinheiro \n"
                            "2. Cartao\n\n");

                    // O usu�rio escolhe a forma de pagamento
                    printf("Escolha forma de pagamento (1. Dinheiro ou 2. Cartao): ");
                    // Guarda a escolha do usu�rio
                    scanf("%d", &formaPagamento);

                    // Switch do 4. Pagamento
                    switch(formaPagamento)
                    {
                        // Caso o usu�rio escolha a op��o de pagamento 1. Dinheiro
                        case 1:
                            // Informando a forma de pagamento
                            printf("-------------------------------------------------\n");
                            printf("*** Forma de pagamento escolhida: Dinheiro ***\n");
                            //Informando o valor gastado em todas as categorias
                            printf("-------------------------------------------------\n\n");

                            // Hist�rico das categorias
                            printf("1. Material de Limpeza - Total: R$ %.2f\n", total_limpeza);
                            printf("2. Venda de Alimentos - Total: R$ %.2f\n", total_alimentos);
                            printf("3. Padaria - Total: R$ %.2f\n", total_padaria);
                            // Valor total sem desconto
                            printf("Valor Total (SEM desconto): R$ %.2f\n\n", total);
                            printf("-------------------------------------------------\n");

                            // Se o usu�rio gastou menos ou igual a R$ 50.00
                            if(total <= 50)
                            {
                                // C�lculo do valor do desconto
                                desconto = total * 0.05;
                                // C�lculo do valor que o cliente ir� pagar
                                total_desconto = total - desconto;
                                // Mostrando o valor que o usu�rio ir� pagar
                                printf("Valor Total (COM desconto): R$ %.2f \n\n", total_desconto);
                                // Aqui est� dizendo para o usu�rio inserir o valor recebido em dinheiro
                                printf("Insira o Valor recebido em Dinheiro: R$ ");
                                // Armazenando o valor que o usu�rio informou acima
                                scanf("%f", &valor_cliente);

                                // Condi��o que � quando o usu�rio coloca um valor menor do que ele tem que pagar
                                if (valor_cliente < total_desconto)
                                {
                                    //Informando o usuario que o valor inserido � menor que o valor a pagar
                                    printf("-------------------------------------------------\n");
                                    printf("O numero em Dinheiro fornecido pelo cliente eh menor que o Valor a Pagar\n"
                                            "Insira o Valor Novamente: R$ ");
                                    // Aqui ficar� armazenado o novo valor que o usu�rio deu para o pagamento
                                    scanf("%f", &valor_cliente);
                                }

                                // C�lculo do valor de troco
                                troco = valor_cliente - total_desconto;
                                // Informa o troco que precisa ser entregado ao cliente
                                printf("Devolva o Troco de: R$ %.2f \n", troco);
                                // Calcula o que foi gastado no dia
                                totalDia = totalDia + total_desconto;

                                // Categorias zeradas para serem usadas no hist�rico
                                total_alimentos = 0;
                                total_limpeza = 0;
                                total_padaria = 0;
                            }

                            // Se o usu�rio gastou mais que R$ 50.00 e menos que R$ 100.00
                            else if(total > 50 && total <100)
                            {
                                // C�lculo do valor do desconto
                                desconto = total * 0.1;
                                // C�lculo do valor que o cliente ir� pagar
                                total_desconto = total - desconto;
                                // Mostrando o valor que o usu�rio ir� pagar
                                printf("Valor Total (COM desconto): R$ %.2f \n\n", total_desconto);
                                // Aqui est� dizendo para o usu�rio inserir o valor recebido em dinheiro
                                printf("Insira o Valor recebido em Dinheiro: R$ ");
                                // Armazenando o valor que o usu�rio informou acima
                                scanf("%f", &valor_cliente);

                                // Condi��o que � erro que eh quando o usu�rio coloca um valor menor do que ele tem que pagar
                                if (valor_cliente < total_desconto)
                                {
                                    // Informando o usuario que o valor inserido � menor que o valor a pagar
                                    printf("-------------------------------------------------\n");
                                    printf("O numero em Dinheiro fornecido pelo cliente eh menor que o Valor a Pagar\n"
                                            "Insira o Valor Novamente: R$ ");
                                    // Aqui ficar� armazenado o novo valor que o usu�rio deu para o pagamento
                                    scanf("%f", &valor_cliente);
                                }

                                // C�lculo do valor de troco
                                troco = valor_cliente - total_desconto;
                                // Informa o troco que precisa ser entregado ao cliente
                                printf("Devolva o Troco de: R$ %.2f \n", troco);
                                // Calcula o que foi gastado no dia
                                totalDia = totalDia + total_desconto;

                                // Categorias zeradas para serem usadas no hist�rico
                                total_alimentos = 0;
                                total_limpeza = 0;
                                total_padaria = 0;
                            }

                            // Se o usu�rio gastou mais de R$ 100.00
                            else
                            {
                                // C�lculo do valor do desconto
                                desconto = total * 0.18;
                                // C�lculo do valor total que o cliente ir� pagar
                                total_desconto = total - desconto;
                                // Mostrando o valor que o usu�rio ir� pagar
                                printf("Valor Total (COM desconto): R$ %.2f \n\n", total_desconto);
                                // Aqui est� dizendo para o usu�rio inserir o valor recebido em dinheiro
                                printf("Insira o Valor recebido em Dinheiro: R$ ");
                                // Armazenando o valor que o usu�rio informou acima
                                scanf("%f", &valor_cliente);

                                // Condi��o que � quando o usu�rio coloca um valor menor do que ele tem que pagar
                                if (valor_cliente < total_desconto)
                                {
                                    //Informando o usuario que o valor inseriod e menor que o valor a pagar
                                    printf("-------------------------------------------------\n");
                                    printf("O numero em Dinheiro fornecido pelo cliente eh menor que o Valor a Pagar\n"
                                            "Insira o Valor Novamente: R$ ");
                                    // Aqui ficar� armazenado o novo valor que o usuario deu para o pagamento
                                    scanf("%f", &valor_cliente);
                                }

                                //Calculando o valor de troco
                                troco = valor_cliente - total_desconto;
                                //Aqui informa o Troco que precisa ser entregado ao cliente
                                printf("Devolva o Troco de: R$ %.2f \n", troco);
                                //Aqui estamos calculando o que foi gastado no dia
                                totalDia = totalDia + total_desconto;

                                // Categorias zeradas para serem usadas no hist�rico
                                total_alimentos = 0;
                                total_limpeza = 0;
                                total_padaria = 0;
                            }
                            break;

                        // Caso o usu�rio escolha a op��o de pagamento 2. Cart�o
                        case 2:
                            // Informando a forma de pagamento
                            printf("-------------------------------------------------\n");
                            printf("*** Forma de pagamento escolhida: Cartao ***\n");
                            printf("-------------------------------------------------\n");

                            // Op��es que o usu�rio tem que escolher no pagamento por cart�o
                            printf("Pagamento na maquina (1. Ok ou 0. Nao Ok): ");
                            // Guarda o que o usu�rio escolheu
                            scanf("%d", &cartao);

                            // Switch do pagamento 2. Cart�o
                            switch(cartao)
                            {
                                // Caso o usu�rio escolha a op��o de pagamento 1. Ok
                                case 1:
                                    // C�lculo do total vendido que aparecer� no hist�rico
                                    totalDia += total;
                                    // Exibindo que o pagamento foi conclu�do
                                    printf("Pagamento realizado com sucesso! :D \n"
                                            "O valor pago foi de: R$ %.2f \n", total);

                                    // Categorias zeradas para serem usadas no hist�rico
                                    total_alimentos = 0;
                                    total_limpeza = 0;
                                    total_padaria = 0;

                                    // Faz o case 1 parar
                                    break;

                                // Caso o usu�rio escolha a op��o de pagamento 0. N�o Ok
                                case 0:
                                    // Exibindo que o pagamento deu errado
                                    printf("Pagamento deu erro! Tente outra forma de pagamento :( \n");
                                    // Aqui vai fazer ele voltar para o usu�rio escolher a forma de pagamento novamente
                                    continue;
                            }
                            break;

                        // Caso o usu�rio n�o escolha nenhuma das op��es listadas
                        default:
                            printf("*** Escolha invalida ***\n");
                            continue;
                    }
                    // Aqui faz com que o programa pare
                    break;

                // Aqui encera o Do While do cartao ele faz voltar na escolha do pagamento
                } while(cartao == 0);
                //Aqui faz com que o programa pare
                break;

            // Caso o usu�rio escolha a op��o 5. Sair (Finalizar Dia - Ver Hist�rico) do Menu Principal
            case 5:
                // Deixando o menu mais agrad�vel para o usu�rio interagir
                printf("-------------------------------------------------\n");
                printf("*** Quantidade de Vendas e Faturamento ***\n");
                printf("-------------------------------------------------\n\n");

                // Hist�rico da quantidades de produtos vendidos e das vendas
                printf("Quantidade de produtos vendidos - Total: %d \n", aux);
                printf("Faturamento - Total: R$ %.2f\n\n", totalDia);

                // Exibi��o do sistema encerrado
                printf("*** Sistema encerrado! ***\n");
                break;

            // Caso o usu�rio n�o escolha nenhuma das op��es listadas
            default:
                printf("*** Escolha invalida *** \n");
                continue;
        }
    // Encerramento do do While do sistema
    } while (menuPrincipal != 5);
    // O retorno zero indica ao SO que o programa foi bem sucedido
    return 0;
}
