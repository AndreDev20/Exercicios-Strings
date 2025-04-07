#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string formatarAgenda(string nomeCompleto) {
    size_t pos = nomeCompleto.find_last_of(" ");
    
    if (pos != string::npos) {
        string sobrenome = nomeCompleto.substr(pos + 1);
        string nome = nomeCompleto.substr(0, pos);
        return sobrenome + ", " + nome;
    }
    
    return nomeCompleto;
}

int main() {
    ifstream arquivo("nomes.txt");
    string linha;

    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    while (getline(arquivo, linha)) {
        string nomeFormatado = formatarAgenda(linha);
        cout << nomeFormatado << endl;
    }

    arquivo.close();
    return 0;
}
