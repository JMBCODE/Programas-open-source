#include <iostream>
#include <math.h>
#include <stdlib.h>
#define MAX 1000

using namespace std;

class NumbersOperators
{
public:
	double a, b;
	char operador;
};

int main(int argc, char *argv[])
{
	NumbersOperators no[MAX];
	int i = 0;

	while(true)
	{
		char resp;

		cout << "<A> para adicao" << endl;
		cout << "<S> para subtracao" << endl;
		cout << "<M> para multiplicacao" << endl;
		cout << "<D> para divisao" << endl;
		cout << "<Q> para raiz quadrada" << endl;
		cout << "<C> para raiz cubica" << endl;

		cout << endl;

		cout << "\nSua escolha: ";
		cin >> no[i].operador;
		cout << endl;

		switch(no[i].operador)
		{
		case 'A':
			cout << "Numero: ";
			cin >> no[i].a;
			cout << "Numero: ";
			cin >> no[i].b;
			cout << "Resultado: " << no[i].a + no[i].b << endl;
			break;
		case 'S':
			cout << "Numero: ";
			cin >> no[i].a;
			cout << "Numero: ";
			cin >> no[i].b;
			cout << "Resultado: " << no[i].a - no[i].b << endl;
			break;
		case 'M':
			cout << "Numero: ";
			cin >> no[i].a;
			cout << "Numero: ";
			cin >> no[i].b;
			cout << "Resultado: " << no[i].a * no[i].b << endl;
			break;
		case 'D':
			cout << "Numero: ";
			cin >> no[i].a;
			cout << "Numero: ";
			cin >> no[i].b;
			cout << "Resultado: " << no[i].a / no[i].b << endl;
			break;
		case 'Q':
			cout << "Numero: ";
			cin >> no[i].a;
			cout << "Resultado: " << sqrt(no[i].a) << endl;
			break;
		case 'C':
			cout << "Numero: ";
			cin >> no[i].a;
			cout << "Resultado: " << cbrt(no[i].a) << endl;
			break;
		}
		cout << "\nVoce deseja continuar? <S>SIM ou <N>NAO: ";
		cin >> resp;
		if(resp != 'S')
		{
			system("cls");
			cout << "Obrigado por usar a Calculadora JMB!" << endl;
			break;
		}
		cout << endl;
		i++;
	}
	return 0;
}
