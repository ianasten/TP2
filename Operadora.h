#ifndef OPERADORA_H_INCLUDED
#define OPERADORA_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <istream>
#include <fstream>
#include <cstdlib> //não sei se precisa

using namespace std;

class Cliente{
private:
    string _CPF;
    string _nome;
    string _endereco;
    vector <Celular> _Celulares;
public:
	Cliente(string nome, string CPF, string endereco, vector<Celular> Celulares) :
		_nome(nome), _CPF(CPF), _endereco(endereco), _Celulares(Celulares){};	//construtor
	Cliente(const Cliente &); //se a gente não for usar não tem pq ter
	~Cliente(); // destrutor
	const string get_CPF(){ return _CPF; };
	const string get_nome(){ return _nome; };
	const string get_endereco(){ return _endereco; };
	const vector<Celular> get_Celulares(){ return _Celulares; };
	void set_CPF(string CPF){this->_CPF = CPF;};
	void set_nome(string nome){this->_nome = nome;};
	void set_endereco(string endereco){this->_endereco = endereco;};
	void set_Celulares(vector<Celular> Celulares){this->_Celulares = Celulares;};

};

class Celular{
private:
    double _numero;
    Cliente _cliente;
    Plano _plano;
    vector<Ligacao> _ligacoes;
    static double _proxNumCelular;

public:
	Celular(double numero, Cliente cliente, Plano plano, vector<Ligacao> ligacoes) :
		_numero(_proxNumCelular), _cliente(cliente), _plano(plano), _ligacoes(ligacoes){ inc_proxNumCelular(); }; // construtor
	~Celular(); // destrutor
	const double get_numero(){ return _numero; };
	const Cliente get_cliente(){ return _cliente; };
	const Plano get_plano(){ return _plano; };
	const vector<Ligacao> get_ligacoes(){ return _ligacoes; };
	static const double get_proxNumCelular(){ return _proxNumCelular; }; // é assim que faz a função static?
	void set_numero(double numero){this->_numero = numero;};
	void set_cliente(Cliente cliente){this->_cliente = cliente;}};
	void set_plano(Plano plano){this->_plano = plano;}};
	void set_Ligacoes(vector<Ligacao> ligacoes){this->_ligacoes = ligacoes;}};
	static void set_proxNumCelular(double proxNumCelular){this->_proxNumCelular = proxNumCelular};
	static void inc_proxNumCelular(){ _proxNumCelular++; };
};

double Celular::_proxNumCelular = 000000000;

class Ligacao{
private:
    Data _dataHora;
    double _duracao;
    double _custo;
public:
	Ligacao(Data dataHora = 0, double duracao = 0, double custo = 0) : _dataHora(dataHora), _duracao(duracao), _custo(custo) {}; // construtor
	~Ligacao(); // destrutor
	const Data get_data(){ return _dataHora; };
	const double get_duracao(){ return _duracao; };
	const double get_custo(){ return _custo; };
	void set_Data(Data dataHora){this->_dataHora = dataHora;};
	void set_duracao(double duracao){this->_duracao = duracao;};
	void set_custo(double custo){this->_custo = custo;};

};

class LigacaoDados: public Ligacao{
private:
    //Enum TipoDados _tipo ???
public:

};

class LigacaoSimples: public Ligacao{
private:
    double _NumTelefone;
public:

};

class Plano {
private:
    string _nome;
    double _ValorMinuto;
    double _Velocidade;
    double _Franquia;
    double _VelocAlem;
public:
	Plano(string nome = 0, double ValorMinuto = 0, double Velocidade = 0, double Franquia = 0, double VelocAlem = 0) :
		_nome(nome), _ValorMinuto(ValorMinuto), _Velocidade(Velocidade), _Franquia(Franquia), _VelocAlem(VelocAlem) {};
	~Plano(); // falta cpp
	const string get_nome(){ return _nome; };
	const double get_ValorMinuto(){ return _ValorMinuto; };
	const double get_Velocidade(){ return _Velocidade; };
	const double get_Franquia(){ return _Franquia; };
	const double get_VelocAlem(){ return _VelocAlem; };
	void set_nome(string nome){this->_nome = nome;};
	void set_ValorMinuto(double ValorMinuto){this->_ValorMinuto = ValorMinuto;};
	void set_Velocidade(double Velocidade){this->_Velocidade = Velocidade;};
	void set_Franquia(double Franquia){this->_Franquia = Franquia;};
	void set_VelocAlem(double VelocAlem){this->_VelocAlem = VelocAlem;};

};

class PosPago: public Plano{
private:
    Data _vencimento;
public:


};

class PrePago: public Plano{
private:
    double _credito;
    Data _validade;
public:

};

class Data {
private:
    int _dia;
    int _mes;
    int _ano;
    string _data;

public:
    Data();
    Data(int dia, int mes, int ano) : _dia(dia), _mes(mes), _ano(ano){};
    ~Data(){};
    string get_data(){ return _data; };
    int get_dia(){ return _dia; };
    int get_mes(){ return _mes; };
    int get_ano(){ return _year; };
    void set_dia(int dia){this->_dia = dia;};
    void set_mes(int mes){this->_mes = mes;};
    void set_ano(int ano){this->_ano = ano;};
    void set_data(string data){this->_data = data;};

};
#endif // OPERADORA_H_INCLUDED
