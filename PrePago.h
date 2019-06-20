#ifndef PREPAGO_H_INCLUDED
#define PREPAGO_H_INCLUDED
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

class PrePago : public Plano{
    private:
        double _credito;
        Date _validade;
    public:
        PrePago(string nome, double ValorMinuto, double Velocidade, double Franquia, double VelocAlem) :
            Plano(nome, ValorMinuto, Velocidade, Franquia, VelocAlem){};
        //~PrePago();
};

#endif // PREPAGO_H_INCLUDED
