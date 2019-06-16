#ifndef INTERFACE_H
#define INTERFACE_H
#include <string>
#include <iostream>
#include <vector>
#include "Cliente.h"
#include "Plano.h"
#include "Operadora.h"

using namespace std;

class Interface {
	private:
    	Operadora O;
  	public:
	    Interface();
	    ~Interface();
	    void Menu();
	    void main();
	    void novoCliente();
	    void novoPlano();
	    void novoCelular();
};

#endif // INTERFACE_H
