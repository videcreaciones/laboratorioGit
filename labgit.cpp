#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream archivoEntrada("input/ArchivoEntrada.txt");
	ofstream archivoSalida("output/ArchivoSalida.txt");

    if (archivoEntrada.is_open() && archivoSalida.is_open()){
        cout << "Archivo abierto" << endl;

        string linea;

        while (getline(archivoEntrada, linea)) { + }
            archivoSalida << linea;
        }
        cout << "Archivo de salida copiado correctamente " << endl;
        archivoEntrada.close();
    }

    return 0;
}