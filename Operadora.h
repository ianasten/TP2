#ifndef OPERADORA_H
#define OPERADORA_H
#include <string>
#include <iostream>
#include <vector>
#include "Cliente.h"
#include "Plano.h"

using namespace std;

class Operadora {
    private:
		vector <Cliente*> _clientes;
		vector <Plano*> _planos;
		vector <Celular*> _celulares;
	public:
		Operadora();
		~Operadora();
		void adicionarCliente(Cliente &c);
		void adicionarPlano(Plano &p);
		void habilitaCelular(Celular &cel);
		Cliente buscaCliente(string nome);
		Plano buscaPlano(string plano);
		void imprimeClientes(); // falta cpp
		void imprimePlanos(); // falta cpp
		void imprimeCelulares(); // falta cpp
};

#endif // OPERADORA_H

