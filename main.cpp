#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p;
    // para invocar a los métodos de la instancia
    // usando usando la misma instancia se utiliza . (punto)
    p.print();

    Point *ptr = &p; // ptr tiene la dirección de memoria de p
    // para invocar a los métodos de la instancia
    // usando el puntero se utiliza el operador -> (flechita)
    ptr->print();

    ptr->setX(5);
    ptr->print();

}