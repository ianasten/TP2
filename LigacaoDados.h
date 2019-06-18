#ifndef LIGACAODADOS_H_INCLUDED
#define LIGACAODADOS_H_INCLUDED
#include"Ligacao.h"
#include"Data.h"
#include"Plano.h"

using namespace std;

enum TipoDados {
    Upload,
    Download }; // CONFERIR DEPOIS
/*enum Color { red, green, blue };
Color r = red;
switch(r)
{
    case red  : std::cout << "red\n";   break;
    case green: std::cout << "green\n"; break;
    case blue : std::cout << "blue\n";  break;
}

enum Foo { a, b, c = 10, d, e = 1, f, g = f + c };
//a = 0, b = 1, c = 10, d = 11, e = 1, f = 2, g = 12


*/

class LigacaoDados: public Ligacao{
private:
    TipoDados _tipo;
    double _consumo;
public:
    LigacaoDados(Data* dataHora, double duracao, double custo, TipoDados tipo, double Plano::get_Franquia()) :
        Ligacao(dataHora, duracao, custo), _tipo(tipo), _consumo(Plano::get_Franquia()) {};
    ~LigacaoDados();
    void registraLigacao(Celular celular, Data* dataHora, double duracao);
    void imprimirRegistros(Celular celular, Data data);
    void limiteFranquia(Celular celular);

};


#endif // LIGACAODADOS_H_INCLUDED
