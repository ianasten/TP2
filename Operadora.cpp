#include "Operadora.h"
#include <string>
#include <iostream>
#include <vector>
class Cliente;
class Plano;
class Celular;

using namespace std;

void Operadora::adicionarCliente(Cliente &c){
  	_clientes.push_back(c);
}

void Operadora::adicionarPlano(Plano &p){
  	_planos.push_back(p);
}

Cliente Operadora::buscaCliente(string nome){
	for (int i = 0; i < clientes.size(); i++) {
	    if (nome == _clientes[i].get_nome()) {
	        return _clientes[i];
	    }
	}
}

Plano Operadora::buscaPlano(string planos){
	for (int i = 0; i < _planos.size(); i++) {
	    if (planos == _planos[i].get_nome()) {
	        return planos[i];
	    }
	}
}

