#ifndef POSPAGO_H_INCLUDED
#define POSPAGO_H_INCLUDED
#include<string>
#include "Plano.h"
#include "Data.h"
//class Plano;
using namespace std;

class PosPago: public Plano{
private:
    Data* _vencimento;
public:
    PosPago(string nome, double ValorMinuto, double Velocidade, double Franquia, double VelocAlem, Data* vencimento) :
        Plano(nome, ValorMinuto, Velocidade, Franquia, VelocAlem), _vencimento(vencimento){};
    ~PosPago();
    // bool emDia() fun��o pra ver se t� em dia o pagamento (?)
    void infoVencimento(Celular celular, Data dataDia);
    // essa funcao compara dataDia com _validade
    // se dataDia < _validade => ta tudo OK
    // se dataDia == _validade => vence hoje
    // se dataDia > _validade => j� venceu e coloca os dados do cliente e do celular do plano que venceu
};


#endif // POS_PAGO_H_INCLUDED
