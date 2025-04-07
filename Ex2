#include <iostream>
#include <string>

using namespace std;

int main() {
    string mensagem;
    cout << "Digite uma mensagem: ";
    cin >> mensagem;

    string mensagemFormatada = "";
    for (char c : mensagem) {
        if (c != ' ') {
            mensagemFormatada += tolower(c);
        }
    }

    int inicio = 0;
    int fim = mensagemFormatada.length() - 1;
    bool palindromo = true;

    while (inicio < fim) {
        if (mensagemFormatada[inicio] != mensagemFormatada[fim]) {
            palindromo = false;
            break;
        }
        inicio++;
        fim--;
    }

    if (palindromo) {
        cout << "A mensagem é um palíndromo!" << endl;
    } else {
        cout << "A mensagem não é um palíndromo." << endl;
    }

    return 0;
}
