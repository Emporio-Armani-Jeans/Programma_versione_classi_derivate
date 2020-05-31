//
// Created by jccx1 on 29/05/2020.
//

#ifndef PROJECT_IDEASS_CONTENUTO_CHAR_H
#define PROJECT_IDEASS_CONTENUTO_CHAR_H

#include <ostream>
#include "contenuto.h"

using namespace std;

class contenuto_char : public contenuto {
public:
    contenuto_char() : _dato('\0') {};
    explicit contenuto_char(char to_copy) {
        this->_dato=to_copy;
    }
    void set(char& to_set)  {
        _dato = to_set;
    }
    char& get() {
        return _dato;
    }
    friend std::ostream &operator<<(std::ostream &os, const contenuto_char &aChar) {
        os << aChar._dato;
        return os;
    }
private:
    char _dato;
};


#endif //PROJECT_IDEASS_CONTENUTO_CHAR_H
