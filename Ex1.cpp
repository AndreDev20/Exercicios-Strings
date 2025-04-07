#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void telaLimpa() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    string mensagem;
    
    cout << "Digite a mensagem: ";
    getline(cin, mensagem);

    int larguraTela = 80;
    int espacoCentralizado = (larguraTela - mensagem.length()) / 2;

    for (int i = 5; i <= 20; ++i) {
        limparTela();
        for (int j = 0; j < i - 1; ++j) {
            cout << endl;
        }
        cout << string(espacoCentralizado, ' ') << mensagem << endl;
        
        cout << "Pressione Enter para continuar..." << endl;
        getchar();
    }

    return 0;
}
