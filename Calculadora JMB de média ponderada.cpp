#include <iostream>
#include <stdlib.h>
#define MAX 1000

using namespace std;

class Numbers
{
public:
	double a, b;
	double pa, pb;
	double resultado1;
};

int main(int argc, char *argv[])
{
	Numbers n[MAX];
	int i = 0;

	while(true)
	{
		char resp;

		cout << "Digite um numero: ";
		cin >> n[i].a;
		cout << "Digite o peso desse numero: ";
		cin >> n[i].pa;
		cout << endl;
		cout << "Digite mais um numero: ";
		cin >> n[i].b;
		cout << "Digite o peso desse numero: ";
		cin >> n[i].pb;
		
		n[i].resultado1 = (n[i].a * n[i].pa + n[i].b * n[i].pb) / (n[i].pa + n[i].pb);
		
		cout << "\nMedia ponderada: " <<n[i].resultado1 << endl;

		cout << "\nVoce deseja continuar? <S>SIM ou <N>NAO: ";
		cin >> resp;
		if(resp != 'S')
		{
			system("cls");
			cout << "Obrigado por usar a Calculadora JMB de Media Ponderada!" << endl;
			break;
		}
		cout << endl;
		i++;
	}
	return 0;
}