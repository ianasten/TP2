#include <vector>
#include <iostream>
class Celular;

#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
using namespace std;

class Cliente{
private:
    string _CPF;
    string _nome;
    string _endereco;
    vector <Celular*> _Celulares;
public:
	Cliente(string nome, string CPF, string endereco, vector<Celular*> Celulares){
	    _nome=nome; _CPF=CPF; _endereco=endereco; _Celulares=Celulares;}	//construtor
	//Cliente(const Cliente &); se a gente não for usar não tem pq ter
	~Cliente(); // destrutor
	const string get_CPF(){ return _CPF; };
	const string get_nome(){ return _nome; };
	const string get_endereco(){ return _endereco; };
	const vector<Celular*> get_Celulares(){ return _Celulares; };
	void set_CPF(string CPF){this->_CPF = CPF;};
	void set_nome(string nome){this->_nome = nome;};
	void set_endereco(string endereco){this->_endereco = endereco;};
	void set_Celulares(vector<Celular*> Celulares){this->_Celulares = Celulares;};

};

#endif // CLIENTE_H_INCLUDED
