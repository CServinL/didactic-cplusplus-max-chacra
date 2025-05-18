// recorder_txt.hpp
#ifndef RECORDER_TXT_HPP
#define RECORDER_TXT_HPP

#include "recorder.hpp"

class TxtRecorder : public IRecorder {
public:
    void guardar(const std::string& filename, const std::vector<Punto>& puntos) const override;
};

#endif
