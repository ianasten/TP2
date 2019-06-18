#include"LigacaoDados.h"
#include "Celular.h"
#include "Plano.h"

void LigacaoDados::registraLigacao(Celular celular, Data* dataHora, double duracao, TipoDados tipo){
     const Plano* planinho;
     planinho = celular.get_plano();
     _consumo = planinho->get_Franquia();
    celular.set_Ligacoes(LigacaoDados(dataHora, duracao);
// no cpp a ligacao vai ser
    //contabilizada de acordo com as informa��es (velocidade, franquia) no plano de Dados
    //tratar exce��o
    //dentro dele a gente atualiza o _consumo de acordo com o registro de ligacoes
}

void LigacaoDados::imprimirRegistros(Celular celular, Data data){
    //imprime consumo de dados a partir da data
    //pra cada liga��o imprime data, dura��o, tipo e qtd consumida (custo)

}



void LigacaoDados::limiteFranquia(Celular celular){
    // vai ver _consumo do celular
    // if _consumo > 0 => t� tudo safe
    // if _consumo == 0 => informa que a franquia de dados acabou e mostra os dados do cliente e o celular
}
