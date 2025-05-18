// recorder.hpp
#ifndef RECORDER_HPP
#define RECORDER_HPP

#include <vector>
#include <string>
#include <utility>

using Punto = std::pair<int, int>;

class IRecorder {
public:
    virtual ~IRecorder() = default;
    virtual void guardar(const std::string& filename, const std::vector<Punto>& puntos) const = 0;
};

#endif
