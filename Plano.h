#ifndef PLANO_H_INCLUDED
#define PLANO_H_INCLUDED
#include <iostream>
#include<string>
using namespace std;

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
	~Plano(){};
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

#endif // PLANO_H_INCLUDED
