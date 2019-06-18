#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include<string>
using namespace std;

class Data {
private:
    int _dia;
    int _mes;
    int _ano;
    string _data;
    int _minuto;
    int _hora;
    string _tudo;

public:
    Data();
    Data(int dia, int mes, int ano) : _dia(dia), _mes(mes), _ano(ano){};
    ~Data(){};
    string get_data(){ return _data; };
    int get_dia(){ return _dia; };
    int get_mes(){ return _mes; };
    int get_ano(){ return _ano; };
    void set_dia(int dia){this->_dia = dia;};
    void set_mes(int mes){this->_mes = mes;};
    void set_ano(int ano){this->_ano = ano;};
    void set_data(string data){this->_data = data;};
//    void get_hora(){ return _hora };
//    void get_(){ return _hora };

};

#endif // DATA_H_INCLUDED
