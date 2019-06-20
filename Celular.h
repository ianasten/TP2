#ifndef CELULAR_H_INCLUDED
#define CELULAR_H_INCLUDED
#include"Cliente.h"
#include"Plano.h"
#include"Ligacao.h"
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
using namespace std;

class Celular{
protected:
		double _numero;
    	Cliente _cliente;
    	Plano _plano;
    	vector<Ligacao> _ligacoes;
    	static double _proxNumCelular;
public:
		Celular(Plano P, Cliente C):_plano(P), _cliente(C){_numero = _proxNumCelular; _proxNumCelular++;};
		~Celular(){};
		int getNum() {return _numero;};
		Cliente getUser() {return _cliente;};
		vector<Ligacao> getLigacoes() {cout << _ligacoes.size(); return _ligacoes;};
		void setNumero(int numero){_numero = numero; _proxNumCelular--;};
		void addLigacao(Ligacao &Lig);
};


#endif // CELULAR_H_INCLUDED

