#ifndef LIGACAODADOS_H_INCLUDED
#define LIGACAODADOS_H_INCLUDED
#include"Ligacao.h"
#include"Data.h"
#include"Plano.h"

using namespace std;

enum TipoDados {
    Upload,
    Download }; // CONFERIR DEPOIS

class LigacaoDados: public Ligacao{
private:
    TipoDados _tipo;
    double _consumo;
public:
    LigacaoDados(Data* dataHora, double duracao, TipoDados tipo, double custo = 0) :
        Ligacao(dataHora, duracao, custo), _tipo(tipo){};
    ~LigacaoDados();
    void registraLigacao(Celular* celular, Data* dataHora, double duracao, TipoDados tipo);
    void imprimirRegistros(Celular celular, Data data);
    void limiteFranquia(Celular celular);

};


#endif // LIGACAODADOS_H_INCLUDED
