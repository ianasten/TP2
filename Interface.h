#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED
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
#include <vector>
#include"Operadora.h"
using namespace std;


class Interface{
    private:
            Operadora O;
    public:
	    Interface(const string o): O(o){};
	    void Menu();
	    void main();
	    void novoCliente();  //ok
	    void novoCelular();    //ok
	    void novaLigacao();    //ok
	    void novoPlano();      //ok
	    void listaClientes();   //ok
	    void listaCelulares();  //ok
	    void listaPlanos();    //ok

};


#endif // INTERFACE_H_INCLUDED
