#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nombreArchivo = "archivoTexto.txt";
    ifstream archivo(nombreArchivo.c_str());
    string linea;
    
    // Obtener l�nea de archivo, y almacenar contenido en "linea"
    while (getline(archivo, linea)) {
        // Lo vamos imprimiendo
        //cout << "Una l�nea: ";
        cout << linea << endl;
    }
}
