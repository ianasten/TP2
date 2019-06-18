#ifndef CELULAR_H_INCLUDED
#define CELULAR_H_INCLUDED
#include<vector>
class Plano;
class Cliente;
class Ligacao;
using namespace std;

class Celular{
private:
    double _numero;
    Cliente* _cliente;
    Plano* _plano;
    vector<Ligacao*> _ligacoes;
    static double _proxNumCelular;

public:
	Celular(Cliente* cliente, Plano* plano, vector<Ligacao*> ligacoes) {
	    _numero=_proxNumCelular; _cliente=cliente; _plano=plano; _ligacoes=ligacoes; _proxNumCelular++; } // construtor
	~Celular(); // destrutor
	const double get_numero(){ return _numero; };
	const Cliente* get_cliente(){ return _cliente; };
	const Plano* get_plano(){ return _plano; };
	const vector<Ligacao*> get_ligacoes(){ return _ligacoes; };
	static const double get_proxNumCelular(){ return _proxNumCelular; };
	void set_numero(double numero){this->_numero = numero;};
	void set_cliente(Cliente* cliente){this->_cliente = cliente;}
	void set_plano(Plano* plano){this->_plano = plano;}
	void set_Ligacoes(vector<Ligacao*> ligacoes){this->_ligacoes = ligacoes;}
	static void set_proxNumCelular(double proxNumCelular){_proxNumCelular = proxNumCelular;}
};

double Celular::_proxNumCelular = 000000000;

#endif // CELULAR_H_INCLUDED
