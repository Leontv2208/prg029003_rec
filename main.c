#include <stdio.h>
#include "hash_pessoa.h"

int main(int argc, char **argv) {

    int numEntrada;
    pessoa_t dadoEntrada, dadoSaida;
    dicionario_t *D = criar_dicionario(100000);

    while(true){


        printf("***Bem vindo à consultoria de Imposto de Renda***\n"
               "-Digite o número relacionado com a operação desejada\n"
               "1-Realizar seu cadastro\n"
               "2-Realizar uma consulta\n"
               "3-Sair\n");

        printf("->");
        scanf("%d", numEntrada);

        if (numEntrada == 1){
            printf("Digite suas credenciais\n"
                   "Cpf: ");
            scanf("%s\n", dadoEntrada.cpf);
            printf("Nome: ");
            scanf("%s\n", dadoEntrada.nome);
            printf("Email: ");
            scanf("%s\n", dadoEntrada.email);

            inserir(&D, dadoEntrada.cpf, &dadoEntrada);

        } else if (numEntrada == 2){
            //???
        } else if (numEntrada == 3){
            goto end;
        }
    }

    end:
    destruir_dicionario(D);
    return 0;
}