#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Esse programa criara um arquivo chamado text.txt na mesma pasta do programa" << endl;
    ofstream MyFile("text.txt"); //cria o arquivo para escrevermos nele
    MyFile << "Isso foi feito em C++!\nArquivos são legais!";  //escreve no arquivo
    MyFile.close();  //fecha o arquivo

    return 0;
}