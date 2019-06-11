#ifndef CELULAR_H_INCLUDED
#define CELULAR_H_INCLUDED
#include "Plano.h"
using namespace std;

class Celular{
private:
    double _numero;
    Cliente _cliente;
    Plano _plano;
    vector<Ligacao> _ligacoes;     
    static double _proxNumCelular; 
    
public:
	Celular(double numero, Cliente cliente = 0, Plano plano = 0, vector<Ligacao> ligacoes = 0) : 
		_numero(_proxNumCelular), _cliente(cliente), _plano(plano), _ligacoes(ligacoes) { inc_proxNumCelular(); }; // construtor
	~Celular(); // destrutor falta cpp
	const double get_numero(){ return _numero; };
	const Cliente get_cliente(){ return _cliente; };
	const Plano get_plano(){ return _plano; };
	const vector<Ligacao> get_ligacoes(){ return _ligacoes; };
	static const double get_proxNumCelular(){ return _proxNumCelular; }; // é assim que faz a função static?
	void set_numero(double numero) : _numero(numero){};
	void set_cliente(Cliente cliente) : _cliente(cliente){};
	void set_plano(Plano plano) : _plano(plano){};
	void set_Ligacoes(vector<Ligacao> ligacoes) : _ligacoes(ligacoes){};
	static void set_proxNumCelular (double proxNumCelular) : _proxNumCelular(proxNumCelular){}; // é assim que faz a função static?
	static void inc_proxNumCelular () { _proxNumCelular++; }; // é dessa forma ?
};

double Celular::_proxNumCelular = 000000000;

#endif // CELULAR_H_INCLUDED
