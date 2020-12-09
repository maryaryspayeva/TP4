#include <QCoreApplication>
#include <rectangle.h>
#include <iostream>
using namespace std;

int main()
{
    int result;
    Rectangle Rectangle;

    result = Rectangle.areaRectangle(30, 20);
    cout << "The result of area rectangular is " <<result<< endl;
    return 0;
}
