#include <iostream>
#include <string.h>
#include <stdlib.h>
#define MAX 100

using namespace std;

class Pessoa
{
public:
	char primeiro_nome[150];
	int idade;
};

//ordenação utilizando o algoritimo bubble sort
void ordenacao(Pessoa pessoas[], int tam)
{
	Pessoa aux;
	for(int i = tam; i >= 0 ; i--)
	{
		for(int j = 1; j <= i ; j++)
		{
			if(strcmp(pessoas[j - 1].primeiro_nome, pessoas[j].primeiro_nome) == 1)
			{
				aux = pessoas[j - 1];
				pessoas[j - 1] = pessoas[j];
				pessoas[j] = aux;
			}
		}
	}
}

int main(int argc, char *argv[])
{
	Pessoa pessoas[MAX];
	int i = 0;
	
	while(true)
	{
		char resp;
		cout << "Digite o primeiro nome da pessoa: ";
		cin >> pessoas[i].primeiro_nome;
		cout << "Digite a idade da pessoa: ";
		cin >> pessoas[i].idade;
		cout << "\nVoce deseja continuar? <S>SIM ou <N>NAO: ";
		cin >> resp;
		if(resp != 'S')
		{
			break;
		}
		cout << endl;
		i++;
	}
	
	system("cls");
	
	ordenacao(pessoas, i);
	cout << "\nExibindo as pessoas em ordem alfabetica..."<<endl;

	for(int j = 0; j <= i; j++)
	{
		cout << "\nPrimeiro nome da pessoa: " << pessoas[j].primeiro_nome << endl;
		cout << "Idade da pessoa: " << pessoas[j].idade << endl;
		cout << endl;
	}
	return 0;
}
