#include <iostream>
#include "contenuto.h"
#include "contenuto_char.h"
#include "contenuto_float.h"
#include "contenuto_int.h"
#include "contenuto_txt.h"
#include <vector>
#include <memory>
#include <list>

using namespace std;

int main() {
    vector<contenuto*> riga;

    int intero = 4;
    float decimale = 4.5;
    char carattere = 'c';
    string testo = "ciao merde";

    //aggiungi.int()
    contenuto_int c1 = contenuto_int(intero);
    auto* ptr1 = new contenuto_int;
    ptr1 = &c1;
    riga.push_back(ptr1);

    contenuto_float c2 = contenuto_float(decimale);
    auto* ptr2 = new contenuto_float;
    ptr2 = &c2;
    riga.push_back(ptr2);

    contenuto_char c3 = contenuto_char(carattere);
    auto* ptr3 = new contenuto_char;
    ptr3 = &c3;
    riga.push_back(ptr3);

    contenuto_txt c4 = contenuto_txt(static_cast<string &&>(testo));
    auto* ptr4 = new contenuto_txt;
    ptr4 = &c4;
    riga.push_back(ptr4);

    cout << riga.size() << endl;
    cout << (static_cast<contenuto_int*>(riga[0]))->get() << endl;
    cout << (static_cast<contenuto_float*>(riga[1]))->get() << endl;
    cout << (static_cast<contenuto_char*>(riga[2]))->get() << endl;
    cout << (static_cast<contenuto_txt*>(riga[3]))->get() << endl;


    return 0;
}
