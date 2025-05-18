#ifndef LOADER_HPP
#define LOADER_HPP

#include <vector>
#include <utility>
#include <string>

using Punto = std::pair<int, int>;

class ILoader {
public:
    virtual ~ILoader() = default;
    virtual std::vector<Punto> cargar(const std::string& filename) const = 0;
};

#endif
