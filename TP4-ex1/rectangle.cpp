#include "rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::getParameters(int l, int w)
{
    length = l;
    width = w;
}
int Rectangle::areaRectangle(int l, int w){


     return l * w;
}
