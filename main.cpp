#include <iostream>

void startMenu();
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void startMenu(){
    int selection;
    cout << "Bem vindo ao Campo Minado Ortogonal." << endl << "Selecione o tamanho do tabuleiro" << endl
    << "[1] 9x9"<< endl << "[2] 15x15" << endl << "[3] 20x20" << endl << "Escolha: ";
    cin selection;
}