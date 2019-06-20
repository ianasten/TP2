#ifndef POSPAGO_H_INCLUDED
#define POSPAGO_H_INCLUDED
#include <vector>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <time.h>
#include <ctime>
#include <string.h>
#include <istream>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include"Plano.h"
#include"Date.h"
using namespace std;

class PosPago : public Plano{
    private:
        Date _vencimento;
    public:
        PosPago(string nome, double ValorMinuto, double Velocidade, double Franquia, double VelocAlem, Date venc)
        :Plano(nome, ValorMinuto, Velocidade, Franquia, VelocAlem), _vencimento(venc){};
        //~PosPago();
};

#endif // POSPAGO_H_INCLUDED
