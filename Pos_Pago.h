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

};


#endif // POS_PAGO_H_INCLUDED
