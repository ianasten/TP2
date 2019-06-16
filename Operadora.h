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
		vector <Cliente> clientes;
		vector <Plano> planos;
	public:
		Operadora();
		~Operadora();
		void adicionarCliente(Cliente &c);
		void adicionarPlano(Plano &p);
		Cliente buscaCliente(string nome);
		Plano buscaPlano(string plano);
};

#endif // OPERADORA_H

