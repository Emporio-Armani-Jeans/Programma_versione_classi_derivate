//
// Created by jccx1 on 29/05/2020.
//

#ifndef PROJECT_IDEASS_CONTENUTO_INT_H
#define PROJECT_IDEASS_CONTENUTO_INT_H

#include <ostream>
#include "contenuto.h"

class contenuto_int : public contenuto {
public:
    contenuto_int() : _dato(0) {};
    explicit contenuto_int(int to_copy) {
        this->_dato=to_copy;
    }
     void set(int& to_set) {
         _dato = to_set;
     }
     int get() {
         return _dato;
     }
    friend std::ostream &operator<<(std::ostream &os, const contenuto_int &anInt) {
        os << anInt._dato;
        return os;
    }

private:
    int _dato;
};


#endif //PROJECT_IDEASS_CONTENUTO_INT_H
