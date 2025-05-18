#include "loader_txt.hpp"
#include <fstream>
#include <iostream>

std::vector<Punto> TxtLoader::cargar(const std::string& filename) const {
    std::vector<Punto> puntos;
    std::ifstream archivo(filename);
    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo: " << filename << '\n';
        return puntos;
    }

    int x, y;
    while (archivo >> x >> y) {
        if (x == -1 && y == -1) break;
        puntos.emplace_back(x, y);
    }

    return puntos;
}
