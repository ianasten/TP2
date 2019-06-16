#ifndef PREPAGO_H_INCLUDED
#define PREPAGO_H_INCLUDED
#include"Plano.h"
#include"Data.h"
#include"Celular.h"
using namespace std;

class PrePago: public Plano{
private:
    double _credito;
    Data _validade;
public:
    PrePago(string nome, double ValorMinuto, double Velocidade, double Franquia, double VelocAlem, double credito, Data validade) :
        Plano(nome,ValorMinuto,Velocidade,Franquia,VelocAlem), _credito(credito), _validade(validade){};
    ~PrePago();
    void adicionaCredito(double credito);
    // completar: credito a ser adc + credito atual, e atualizar
    // a validade pra 180 dias ap�s a data corrente do sistema
    //tratar exce��o
    // PQP TEREMOS QUE COLOCAR A DATA CORRENTE DO SISTEMA
};


#endif // PRE_PAGO_H_INCLUDED
