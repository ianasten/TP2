#include <string>
#include <iostream>
#include <vector>
#include "Cliente.h"
#include "Plano.h"
#include "Operadora.h"
#include "Interface.h"
#include "Ligacao.h"
#include "Data.h"
#include "Celular.h"
#include <cstdlib>

using namespace std;

void Interface::novoCliente(){
	string newCPF, newNome, newEnd;
	bool status;
	cout << " CADASTRAR CLIENTE" << '\n' << '\n';
	cout << " Digite os dados do cliente: " << '\n' << '\n';
	getline(cin, newNome);
	cout << " Nome:      ";
	getline(cin, newNome);
	cout << '\n';
	cout << " CPF:     ";
	getline(cin, newCPF);
	cout << '\n';
	cout << " Endereco: ";
	getline(cin, newEnd);
	cout << '\n';

    Data c;
	vector<Ligacao*> b;
	vector<Celular*> a;
	Cliente novo(newNome, newCPF, newEnd, a);
	O.adicionarCliente(novo);
	system("PAUSE");
	system("CLS");
}

void Interface::novoPlano(){
	string nome;
    double ValorMinuto;
    double Velocidade;
    double Franquia;
    double VelocAlem;
	cout << " CADASTRAR PLANO" << '\n' << '\n';
	cout << " Digite os dados do plano: " << '\n' << '\n';
	getline(cin, nome);
	cout << " Nome:      ";
	getline(cin, nome);
	cout << '\n';
	cout << " Valor minuto: ";
	cin >> ValorMinuto;
	cout << '\n';
	cout << " Velocidade: ";
	cin >> Velocidade;
	cout << '\n';
	cout << " Franquia: ";
	cin >> Franquia;
	cout << '\n';
	cout << " VelocAlem: ";
	cin >> VelocAlem;
	cout << '\n';
	Plano novo(nome, ValorMinuto, Velocidade, Franquia, VelocAlem);
	O.adicionarPlano(novo);
	system("PAUSE");
	system("CLS");
}

void Interface::novoCelular(){
	string nome, plano;
	getline(cin, nome);
	cout << "Qual o nome do cliente:  ";
	getline(cin, nome);
	cout << '\n';
	cout << "Qual o plano:  ";
	getline(cin, plano);
	cout << '\n';
	vector<Ligacao> coco;
	Celular c(O.buscaCliente(nome), O.buscaPlano(plano), &coco);
	system("PAUSE");
	system("CLS");
}
