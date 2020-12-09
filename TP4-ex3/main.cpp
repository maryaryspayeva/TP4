#include <QCoreApplication>
#include "complexnumbers.h"
#include <iostream>
using namespace std;


int main()
{
    cout << "Input the first comlex number" << endl;
    ComplexNumbers complex1;
    complex1.setValue();

    cout << "Input the second comlex number" << endl;
    ComplexNumbers complex2;
    complex2.setValue();

    cout << "The result of two complex numbers is" << endl;
    ComplexNumbers result;
    result.addition(complex1,complex2);
    result.display();

    return 0;
}
