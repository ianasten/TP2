#ifndef OPERADORA_H_INCLUDED
#define OPERADORA_H_INCLUDED
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
#include"Celular.h"
#include"Cliente.h"
#include"Plano.h"
using namespace std;

class Operadora{
    protected:
		vector <Cliente> clientes;
		vector <Celular> celulares;
		vector <Plano> planos;
		string _name;
    public:
		Operadora(const string name):_name(name){};
		void adicionarCliente(Cliente &c);
		void adicionarCelular(Celular &c);
		void adicionaLigacao(Celular &c, Ligacao &Lig);
		void adicionarPlano(Plano &p);
		void excluiCliente(Cliente &c);
		void excluiCelular(Celular &c);
		const vector<Cliente>& obtemClientes() {return clientes;};
	    const vector<Celular>& obtemCelulares() {return celulares;};
	    const vector<Plano>& obtemPlanos() {return planos;};
	    Cliente buscaCliente(string cpf);
	    Celular buscaCelular(int num);
	    Plano buscaPlano(string plano);
	    bool buscaCPF(string cpf);
	    bool buscaCodigo(int cod);

};


#endif // OPERADORA_H_INCLUDED
