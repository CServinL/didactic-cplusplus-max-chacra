#include <iostream>
#include <fstream>
#include <random>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Uso: " << argv[0] << " <n> <archivo_salida>\n";
        return 1;
    }

    int n = std::stoi(argv[1]);
    if (n < 3 || n > 500) {
        std::cerr << "n debe estar entre 3 y 500\n";
        return 1;
    }

    std::ofstream out(argv[2]);
    if (!out) {
        std::cerr << "No se pudo abrir el archivo de salida\n";
        return 1;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 999);

    for (int i = 0; i < n; ++i) {
        int x = distrib(gen);
        int y = distrib(gen);
        out << x << ' ' << y << '\n';
    }

    out << "-1 -1\n";
    std::cout << "Archivo generado: " << argv[2] << " con " << n << " coordenadas.\n";
    return 0;
}
