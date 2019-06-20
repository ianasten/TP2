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
#include"Celular.h"
using namespace std;

double Celular:: _proxNumCelular = 0;


void Celular::addLigacao(Ligacao &LIG){         //ok
	this->_ligacoes.push_back(LIG);
}
