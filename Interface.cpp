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
	string nomeCliente, nomePlano;
	//getline(cin, nomeCliente);
	cout << "Qual o nome do cliente:  ";
	getline(cin, nomeCliente);
	cout << '\n';
	cout << "Qual o plano:  ";
	getline(cin, nomePlano);
	cout << '\n';
	//se for p�s pago tem que pedir a data de vencimento da fatura
	vector<Ligacao*> coco;
	Celular c(O.buscaCliente(nomeCliente), O.buscaPlano(nomePlano), &coco);
	//tem que continuar
	system("PAUSE");
	system("CLS");
}

void Interface::adicionaCreditos(){
    double numeroCelular, creditosADC;
    cout << "Qual o n�mero do celular: ";
    cin >> numeroCelular;
    cout << endl;
    cout << "Qual o valor de creditos a serem adicionados: ";
    cin >> creditosADC;
    cout << endl;
    //continuar
}

void Interface::registraLigacao(){
    double numeroCelular, duracaoMin;
    Data dataHora;
    cout << "Qual o n�mero do celular: ";
    cin >> numeroCelular;
    cout << endl;
    cout << "Qual a hora e data da ligacao: ";
    cin >> dataHora;
    cout << endl;
    cout << "Qual a duracao da ligacao em minutos: ";
    cin >> duracaoMin;
    cout << endl;
    // continuar
    //no celular habilitado no plano de cart�o, tem que gerar exce��o
    //se os cr�ditos n�o forem suficientes pro tempo da liga��o ou se
    //a data de validade dos cr�ditos estiver vencida
    //ligacao registrada apos sua ocorrencia
}

void Interface::listarPctNet(){
    double numeroCelular;
    cout << "Qual o numero do celular: ";
    cin >> numeroCelular;
    cout << endl;
    //imprime na tela a franquia - total gasto
    //imprime na tela a velocidade atual: padr�o ou al�m da franquia
}

void Interface::listarValorConta(){
    double numeroCelular;
    cout << "Qual o numero do celular: ";
    cin >> numeroCelular;
    cout << endl;
    //imprime na tela o valor total das liga��es ocorridas
    //ap�s o dia de vencimento do m�s anterior e o dia de
    //vencimento do m�s corrente
}

void Interface::listarCreditoDValidade(){
    double numeroCelular;
    cout << "Qual o numero do celular: ";
    cin >> numeroCelular;
    cout << endl;
    //imprimir na tela o credito e data de validade do celular
}

void Interface::listarExtratoLS(){
    double numeroCelular;
    Data data;
    cout << "Qual o numero do celular: ";
    cin >> numeroCelular;
    cout << endl;
    cout << "Qual a data para adquirir o extrato: ";
    cin >> data;
    cout << endl;
    //imprime na tela todas as ligacoes efetuadas no celular
    //a partir da data informada
    //chama fun��o imprimeExtrato
}

void Interface::listarExtratoLD(){
    double numeroCelular;
    Data data;
    cout << "Qual o numero do celular: ";
    cin >> numeroCelular;
    cout << endl;
    cout << "Qual a data para adquirir o extrato: ";
    cin >> data;
    cout << endl;
    //mesmo role do LS, chamar a funcao do LD
}

void Interface::listarClientes(){
// chamar da Operadora
}

void Interface::listarPlanos(){
// chamar da Operadora
}

void Interface::listarCelulares(){
// chamar da Operadora
}

void Interface::infoVencimentoFatura(){
    double numeroCelular;
    Data data;
    cout << "Qual o numero do celular: ";
    cin >> numeroCelular;
    cout << endl;
    cout << "Qual a data de hoje: ";
    cin >> data;
    cout << endl;
    //chama funcao do pospago

}

void Interface::infoLimiteFranquia(){
    double numeroCelular;
    Data data;
    cout << "Qual o numero do celular: ";
    cin >> numeroCelular;
    cout << endl;
    cout << "Qual a data de hoje: ";
    cin >> data;
    cout << endl;
}


