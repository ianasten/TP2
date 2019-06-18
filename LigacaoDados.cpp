#include"LigacaoDados.h"
#include "Celular.h"
#include "Plano.h"
#include"Ligacao.h"

void LigacaoDados::registraLigacao(Celular* celular, Data* dataHora, double duracao, TipoDados tipo){
     Ligacao *liga = new LigacaoDados(dataHora,duracao,tipo);
     celular->get_ligacoes().push_back(liga);

//     push_back(kjwgliubers)
     //o construtor de ligacao de dados e pushback no vector de ligação do celular

// no cpp a ligacao vai ser
    //contabilizada de acordo com as informações (velocidade, franquia) no plano de Dados
    //tratar exceção
    //dentro dele a gente atualiza o _consumo de acordo com o registro de ligacoes
}

void LigacaoDados::imprimirRegistros(Celular celular, Data data){
    //imprime consumo de dados a partir da data
    //pra cada ligação imprime data, duração, tipo e qtd consumida (custo)

}




void LigacaoDados::limiteFranquia(Celular celular){
    // vai ver _consumo do celular
    // if _consumo > 0 => tá tudo safe
    // if _consumo == 0 => informa que a franquia de dados acabou e mostra os dados do cliente e o celular
}
