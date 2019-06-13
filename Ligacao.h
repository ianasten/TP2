#ifndef LIGACAO_H_INCLUDED
#define LIGACAO_H_INCLUDED
class Data;
using namespace std;

class Ligacao{
private:
    Data* _dataHora;
    double _duracao;
    double _custo;
public:
	Ligacao(Data* dataHora = 0, double duracao = 0, double custo = 0){ _dataHora=dataHora; _duracao=duracao; _custo=custo;} // construtor
	~Ligacao(); // destrutor
	const Data* get_data(){ return _dataHora; };
	const double get_duracao(){ return _duracao; };
	const double get_custo(){ return _custo; };
	void set_Data(Data* dataHora){this->_dataHora = dataHora;};
	void set_duracao(double duracao){this->_duracao = duracao;};
	void set_custo(double custo){this->_custo = custo;};

};


#endif // LIGACAO_H_INCLUDED
