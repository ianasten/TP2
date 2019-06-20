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
#include <vector>
#include"Operadora.h"
using namespace std;

void Operadora::adicionarCliente(Cliente &c){  //ok
  	clientes.push_back(c);
}

void Operadora::adicionarPlano(Plano &p){   //ok
	planos.push_back(p);
}

void Operadora::adicionarCelular(Celular &c){   //ok
  	this->celulares.push_back(c);
}

void Operadora::adicionaLigacao(Celular &c, Ligacao &Lig){  //ok
	c.addLigacao(Lig);
}


Cliente Operadora::buscaCliente(string cpf){   //ok
	for (int i = 0; i < clientes.size(); i++) {
	    if (cpf == clientes[i].getCpf()) {
	        return clientes[i];
	    }
	}
}

Plano Operadora::buscaPlano(string plano){   //ok
	for (int i = 0; i < planos.size(); i++) {
	    if (plano == planos[i].get_nome()) {
	        return planos[i];
	    }
	}
}

bool Operadora::buscaCPF(string cpf){   //ok
	for (int i = 0; i < clientes.size(); i++) {
	    if (cpf == clientes[i].getCpf()) {
	        return true;
	    }
	}
	return false;
}

Celular Operadora::buscaCelular(int num){   //ok
	for (int i = 0; i < celulares.size(); i++) {
	    if (num == celulares[i].getNum()) {
			return celulares[i];
	    }
	}
}
