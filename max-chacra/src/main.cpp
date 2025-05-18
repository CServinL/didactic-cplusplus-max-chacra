#include "loader_txt.hpp"
#include "recorder_txt.hpp"
#include <memory>
#include <cmath>
#include <iostream>

double areaTriangulo(const Punto& a, const Punto& b, const Punto& c) {
    return std::abs((a.first * (b.second - c.second) +
                     b.first * (c.second - a.second) +
                     c.first * (a.second - b.second)) / 2.0);
}

int main() {
    std::unique_ptr<ILoader> loader = std::make_unique<TxtLoader>();
    std::vector<Punto> puntos = loader->cargar("chatri.in");

    double maxArea = 0.0;
    Punto p1, p2, p3;

    for (size_t i = 0; i < puntos.size(); ++i) {
        for (size_t j = i + 1; j < puntos.size(); ++j) {
            for (size_t k = j + 1; k < puntos.size(); ++k) {
                double area = areaTriangulo(puntos[i], puntos[j], puntos[k]);
                if (area > maxArea) {
                    maxArea = area;
                    p1 = puntos[i]; p2 = puntos[j]; p3 = puntos[k];
                }
            }
        }
    }

    std::cout << "Área máxima: " << maxArea << "\n";
    std::cout << "Triángulo: (" << p1.first << "," << p1.second << "), "
              << "(" << p2.first << "," << p2.second << "), "
              << "(" << p3.first << "," << p3.second << ")\n";

    
    std::vector<Punto> triangulo = {p1, p2, p3};
    TxtRecorder recorder;
    recorder.guardar("chatri.out", triangulo);
}
