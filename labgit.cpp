#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream archivoEntrada("input/Archivodetexto.txt");

    if (archivoEntrada.is_open()) {

        cout << "Archivo abierto" << endl;

        string lineas;

        while (getline(archivoEntrada, lineas)) {
            cout << lineas << endl;
        }

        archivoEntrada.close();
    }

    return 0;
}