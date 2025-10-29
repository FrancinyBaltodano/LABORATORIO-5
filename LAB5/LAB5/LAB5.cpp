

#include <iostream>
#include "shape.h"
#include "square.h"

int main()


{

    Shape* soyUnafigura = new Square(2.0);
    double  resultado = soyUnafigura->calculateArea();

    std::cout << "Hola, el area del cuadrado de base 2 es  ";
    std::cout << resultado;
}
