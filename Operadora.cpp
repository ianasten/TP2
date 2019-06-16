#include "Operadora.h"
#include <string>
#include <iostream>
#include <vector>
class Cliente;
class Plano;
class Celular;

using namespace std;

void Operadora::adicionarCliente(Cliente &c){
  	clientes.push_back(c);
}

void Operadora::adicionarPlano(Plano &p){
  	planos.push_back(p);
}

Cliente Operadora::buscaCliente(string nome){
	for (int i = 0; i < clientes.size(); i++) {
	    if (nome == clientes[i].get_nome()) {
	        return clientes[i];
	    }
	}
}

Plano Operadora::buscaPlano(string plano){
	for (int i = 0; i < planos.size(); i++) {
	    if (plano == planos[i].get_nome()) {
	        return planos[i];
	    }
	}
}

