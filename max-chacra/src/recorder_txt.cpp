// recorder_txt.cpp
#include "recorder_txt.hpp"
#include <fstream>
#include <iostream>

void TxtRecorder::guardar(const std::string& filename, const std::vector<Punto>& puntos) const {
    std::ofstream archivo(filename);
    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo para escribir: " << filename << '\n';
        return;
    }

    for (const auto& p : puntos) {
        archivo << p.first << ' ' << p.second << '\n';
    }

    // Para fines del entregable no vamos a poner el terminador del txt  // archivo << "-1 -1\n";
}
