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
#include"Interface.h"
#include"PosPago.h"
#include"PrePago.h"
using namespace std;

void Interface::main(){  //ok
	Menu();
}

void Interface::Menu() {    //ok
  	char acao='x';
  	while (acao!='S') {
  		cout << '\n' << " --------------   OPERADORA   -------------- "<< '\n' << '\n';
	    cout << "      Digite a opcao desejada:" << '\n' << '\n';
	    cout << " A   -   Cadastrar cliente" << '\n';
	    cout << " B   -   Cadastrar Celular" << '\n';
	    cout << " C   -   Cadastrar Ligacao" << '\n';
	    cout << " D   -   Cadastrar Plano" << '\n';
	    cout << " E   -   Adicionar créditos" << '\n';
		cout << " O   -   Listar Clientes" << '\n';
		cout << " P   -   Listar Celulares" << '\n';
		cout << " Q   -   Listar Planos" << '\n';
		cout << " S   -   Sair" << '\n';
	    cin >> acao;
	    if (acao == 'a') acao = 'A';
	    if (acao == 'b') acao = 'B';
	    if (acao == 'c') acao = 'C';
	    if (acao == 'd') acao = 'D';
	    if (acao == 'e') acao = 'E';
	    if (acao == 'o') acao = 'O';
	    if (acao == 'p') acao = 'P';
	    if (acao == 'q') acao = 'Q';
	    if (acao == 's') acao = 'S';
	    switch (acao) {
			case 'A':
       			system("CLS");
       			novoCliente();
       			break;
       		case 'B':
       			system("CLS");
       			novoCelular();
       			break;
       		case 'C':
       			system("CLS");
       			novaLigacao();
       			break;
       		case 'D':
      			system("CLS");
      			novoPlano();
       			break;
       		case 'O':
       			system("CLS");
       			listaClientes();
       			break;
			case 'P':
       			system("CLS");
       			listaCelulares();
       			break;
			case 'Q':
       			system("CLS");
       			listaPlanos();
       			break;
       		case 'S':
        		cout << "Consulta encerrada" << '\n';
         		break;
		      default:
        		cout << "Digite uma opcao valida" << '\n';
         		break;
    	}
  	}
}

void Interface::novoCliente(){   //okk
	string newName, newCPF, newAddr;
	bool status;
	cout << " CADASTRAR CLIENTE" << '\n' << '\n';
	cout << " Digite os dados do cliente: " << '\n' << '\n';
	getline(cin, newName);
	cout << " Nome:     ";
	getline(cin, newName);
	cout << '\n';
	cout << " CPF:      ";
	getline(cin, newCPF);
	cout << '\n';
	cout << " Endereco: ";
	getline(cin, newAddr);
	cout << '\n';

	Cliente novo(newName, newCPF, newAddr);
	status = O.buscaCPF(newCPF);
	if(status == false){
		O.adicionarCliente(novo);
	}
	else{
		cout << "ERRO: Cpf ja cadastrado!" << '\n';
	}
	system("PAUSE");
	system("CLS");
}

void Interface::novoCelular(){    //ok
	bool status;
	string cpf, plano;
	int tipoplano, dia;
	cout << " CADASTRAR Celular" << '\n' <<'\n';
	cout << " Digite os dados do Celular:" <<'\n'<<'\n' ;
	cout << " Cpf do usuario:    " ;
	cin >> cpf;
	cout << '\n';
	cout << " Nome do plano:  ";
	cin >> plano;
	cout << '\n';
	cout << " Digite 1 para pos-pago e 2 pra pre-pago?  ";
	cin >> tipoplano;
	cout << '\n';
	if(tipoplano == 1){
		cout << " Digite o dia de vencimento:  ";
		cin >> dia;
		cout << '\n';
	}
	status = O.buscaCPF(cpf);
	if(status == false){
		cout << "Erro: Cpf inexistente!" << '\n';
	}
	else{
		if(tipoplano == 1){
			Date vencimento;
			vencimento.setDay(dia);
			PosPago pos(O.buscaPlano(plano).get_nome(), O.buscaPlano(plano).get_ValorMinuto(), O.buscaPlano(plano).get_Velocidade(),
						O.buscaPlano(plano).get_Franquia(), O.buscaPlano(plano).get_VelocAlem(), vencimento);
			Celular c(pos, O.buscaCliente(cpf));
			O.adicionarCelular(c);
		}
		if(tipoplano == 2){
			PrePago pre(O.buscaPlano(plano).get_nome(), O.buscaPlano(plano).get_ValorMinuto(), O.buscaPlano(plano).get_Velocidade(),
						O.buscaPlano(plano).get_Franquia(), O.buscaPlano(plano).get_VelocAlem());
			Celular c(pre, O.buscaCliente(cpf));
			O.adicionarCelular(c);
		}

	}
	system("PAUSE");
	system("CLS");
}

void Interface::novaLigacao(){   //ok
	double duracao, custo, celular;
	cout << " INSERIR Ligacao A celular" << '\n' << '\n';
	cout << " Digite o numero do celular:      ";
	cin >> celular;
	cout << '\n';
	cout << " Digite a duração em minutos:      ";
	cin >> duracao;
	cout << '\n';
	cout << " Digite o custo da ligacao: " ;
	cin >> custo;
	cout << '\n';
	Date aux;
	Ligacao lig(duracao, custo, aux);
	Celular a = O.buscaCelular(celular);
	O.adicionaLigacao(a, lig);
	system("PAUSE");
	system("CLS");
}

void Interface::novoPlano(){   //ok
	string nome;
    double valorMinuto, velocidade, franquia, velocAlem;
	cout << " Cadastrar Plano" << '\n' << '\n';
	cout << " Digite o nome do plano:      "<< '\n' << '\n';
	getline(cin, nome);
	cout << " Nome:     ";
	getline(cin, nome);
	cout << '\n';
	cout << " Digite o valor do minuto: " ;
	cin >> valorMinuto;
	cout << '\n';
	cout << " Digite a valocidade: " ;
	cin >> velocidade;
	cout << '\n';
	cout << " Digite a franquia: " ;
	cin >> franquia;
	cout << '\n';
	cout << " Digite a valocidade alem: " ;
	cin >> velocAlem;
	cout << '\n';
	Plano novo(nome, valorMinuto, velocidade, franquia, velocAlem);
	O.adicionarPlano(novo);
	system("PAUSE");
	system("CLS");
}

void Interface::listaClientes(){  //ok
	cout << "    LISTA DE Clientes" << '\n' <<'\n';
	vector <Cliente> user;
  	user = O.obtemClientes();
    for (int i = 0; i < user.size(); i++){
    	cout << " Cliente [" << i+1 << "]" << '\n';
  	    cout << " Nome:     " << user[i].getName() << '\n';
  	    cout << " Cpf:      " << user[i].getCpf() << '\n';
  	    cout << " Endereco: " << user[i].getEndereco() << '\n'<< '\n' << '\n';
  	}
  	system("PAUSE");
	system("CLS");
}

void Interface::listaCelulares(){
	string cpf;
	cout << "    LISTA DE Celulares" << '\n' <<'\n';
	cout << " Digite o cpf do cliente: " << '\n' << '\n';
	getline(cin, cpf);
	cout << " CPF:     ";
	getline(cin, cpf);
	cout << '\n';
	vector <Celular> cels;
  	cels = O.obtemCelulares();
    for (int i = 0; i < cels.size(); i++){
    	if(cpf == (cels[i].getUser().getCpf())){
		   	cout << " Celular [" << i+1 << "]" << '\n';
	  	    cout << " Numero:     " << cels[i].getNum() << '\n';
	  	    cout << " Nome do cliente:      " << cels[i].getUser().getName() << '\n'<< '\n' << '\n';
	  	}
  	}
  	system("PAUSE");
	system("CLS");
}

void Interface::listaPlanos(){
	cout << "    LISTA DE Planos" << '\n' <<'\n';
	vector <Plano> planos;
  	planos = O.obtemPlanos();
    for (int i = 0; i < planos.size(); i++){
    	cout << " Plano [" << i+1 << "]" << '\n';
  	    cout << " Nome:     " << planos[i].get_nome() << '\n';
  	    cout << " Velocidade:     " << planos[i].get_Velocidade() << '\n';
  	    cout << " Valor do minuto:      " << planos[i].get_ValorMinuto() << '\n'<< '\n' << '\n';
  	}
  	system("PAUSE");
	system("CLS");
}
