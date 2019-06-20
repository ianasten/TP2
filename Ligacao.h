#ifndef LIGACAO_H_INCLUDED
#define LIGACAO_H_INCLUDED
#include <vector>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <time.h>
#include <ctime>
#include <string.h>
#include <istream>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include"Date.h"
using namespace std;

class Ligacao{
	protected:
		Date _dataHora;
    	double _duracao;
    	double _custo;
	public:
		Ligacao(double d, double c, Date aux) : _duracao(d), _custo(c), _dataHora(aux){};
		string getDate(){return _dataHora.getDate();};
};

#endif // LIGACAO_H_INCLUDED
