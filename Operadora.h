#ifndef OPERADORA_H_INCLUDED
#define OPERADORA_H_INCLUDED
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

class Ligacao{
private:
    Date _dataHora;
    double _duracao;
    double _custo;
public:
	Ligacao(Date dataHora = 0, double duracao = 0, double custo = 0) : _dataHora(dataHora), _duracao(duracao), _custo(custo) {}; // construtor
	~Ligacao(); // destrutor
	const Data get_data(){ return _dataHora; };
	const double get_duracao(){ return _duracao; };
	const double get_custo(){ return _custo; };
	void set_Data(Date dataHora) : _dataHora(dataHora){};
	void set_duracao(double duracao) : _duracao(duracao){};
	void set_custo(double custo) : _custo(custo){};

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
	void set_nome(string nome) : _nome(nome){};
	void set_ValorMinuto(double ValorMinuto) : _ValorMinuto(ValorMinuto){};
	void set_Velocidade(double Velocidade) : _Velocidade(Velocidade){};
	void set_Franquia(double Franquia) : _Franquia(Franquia){};
	void set_VelocAlem(double VelocAlem) : _VelocAlem(VelocAlem){};

};

class PosPago: public Plano{
private:
    Date _vencimento;
public:


};

class PrePago: public Plano{
private:
    double _credito;
    Date _validade;
public:

};

#endif // OPERADORA_H_INCLUDED
