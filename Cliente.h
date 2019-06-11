#include <vector>
#include <iostream>
#include "Celular.h"

#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
using namespace std;


class Cliente{
private:
    string _CPF;
    string _nome;
    string _endereco;
    vector<Celular> _Celulares; // nao entendi esse daqui
public:
	Cliente(string nome = 0, string CPF = 0, string endereco = 0, vector<Celular> Celulares = 0 /* ? */) :
		_nome(nome), _CPF(CPF), _endereco(endereco), _Celulares(Celulares){};	//construtor
	Cliente(const Cliente &); //construtor de copia falta cpp precisa de construtor de cópia???????????????
	~Cliente(); // falta cpp
	const string get_CPF(){ return _CPF; };
	const string get_nome(){ return _nome; };
	const string get_endereco(){ return _endereco; };
	const vector<Celular> get_Celulares(){ return _Celulares; };
	void set_CPF(string CPF) : _CPF(CPF){};
	void set_nome(string nome) : _nome(nome){};
	void set_endereco(string endereco) : _endereco(endereco){};
	void set_Celulares(vector<Celular> Celulares) : _Celulares(Celulares){};

};


#endif // CLIENTE_H_INCLUDED
