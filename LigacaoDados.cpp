#include"LigacaoDados.h"
#include "Celular.h"

void LigacaoDados::registraLigacao(Celular celular, Data* dataHora, double duracao){
    celular.set_Ligacoes(LigacaoDados(dataHora, duracao)
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
