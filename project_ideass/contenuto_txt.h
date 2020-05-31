//
// Created by jccx1 on 29/05/2020.
//

#ifndef PROJECT_IDEASS_CONTENUTO_TXT_H
#define PROJECT_IDEASS_CONTENUTO_TXT_H

#include <string>
#include <ostream>
#include <utility>
#include "contenuto.h"

using namespace std;

class contenuto_txt : public contenuto {
public:
    contenuto_txt() : _dato(string()) {};
    explicit contenuto_txt(string&& to_copy) {
        this->_dato=std::move(to_copy);
    }
    void set(string & to_set) {
        _dato = to_set;
    }
    string & get() {
        return _dato;
    }
    friend ostream &operator<<(ostream &os, const contenuto_txt &txt) {
        os << txt._dato;
        return os;
    }
private:
    string _dato;
};


#endif //PROJECT_IDEASS_CONTENUTO_TXT_H
