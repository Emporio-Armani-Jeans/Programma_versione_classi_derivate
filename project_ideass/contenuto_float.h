//
// Created by jccx1 on 29/05/2020.
//

#ifndef PROJECT_IDEASS_CONTENUTO_FLOAT_H
#define PROJECT_IDEASS_CONTENUTO_FLOAT_H

#include <ostream>
#include "contenuto.h"

class contenuto_float : public contenuto {
public:
    contenuto_float() : _dato(0) {};
    explicit contenuto_float(float to_copy) {
        this->_dato=to_copy;
    }
    void set(float& to_set) {
        _dato = to_set;
    }
    float get() {
        return _dato;
    }
    friend std::ostream &operator<<(std::ostream &os, const contenuto_float &aFloat) {
        os << aFloat._dato;
        return os;
    }

private:
    float _dato;
};


#endif //PROJECT_IDEASS_CONTENUTO_FLOAT_H
