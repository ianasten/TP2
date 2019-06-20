#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
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

class Cliente{
    protected:
		string _nome;
		string _cpf;
		string _endereco;
    public:
		Cliente(string nome, string cpf, string end) : _nome(nome), _cpf(cpf), _endereco(end){};
		Cliente(const Cliente& C) : _nome(C._nome), _cpf(C._cpf), _endereco(C._endereco){};
		~Cliente(){};
		string getName() {return _nome;};
		string getCpf() {return _cpf;};
		string getEndereco() {return _endereco;};

};


#endif // CLIENTE_H_INCLUDED
