#ifndef LIGACAOSIMPLES_H_INCLUDED
#define LIGACAOSIMPLES_H_INCLUDED
#include"Ligacao.h"
#include"Data.h"
using namespace std;

class LigacaoSimples: public Ligacao{
private:
    double _NumTelefone;
public:
    LigacaoSimples(Data* dataHora, double duracao, double custo, double NumTelefone):
        Ligacao(dataHora, duracao, custo), _NumTelefone(NumTelefone) {};
    ~LigacaoSimples();
    void registraLigacao(Celular celular, Data dataHora, double duracao);
    void imprimeRegistros(Celular celular, Data data); //implementar cpp
};



#endif // LIGACAOSIMPLES_H_INCLUDED
