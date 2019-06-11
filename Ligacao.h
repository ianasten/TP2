#ifndef LIGACAO_H_INCLUDED
#define LIGACAO_H_INCLUDED
using namespace std;

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


#endif // LIGACAO_H_INCLUDED
