#ifndef LOADER_TXT_HPP
#define LOADER_TXT_HPP

#include "loader.hpp"
#include <string>
#include <vector>

class TxtLoader : public ILoader {
public:
    std::vector<Punto> cargar(const std::string& filename) const override;
};

#endif
