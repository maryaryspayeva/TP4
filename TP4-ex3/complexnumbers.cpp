#include "complexnumbers.h"
#include <iostream>
using namespace std;

ComplexNumbers::ComplexNumbers(){

}

void ComplexNumbers::setValue(){

    cin>>real;
    cin>>imag;

}

void ComplexNumbers::addition(ComplexNumbers complex1, ComplexNumbers complex2){

    realResult = complex1.getReal()+complex2.getReal();
    imagResult = complex1.getImag()+complex2.getImag();

}

void ComplexNumbers::display()
{
   cout<<realResult<<"+"<<imagResult<<"i"<<endl;
}


int ComplexNumbers::getReal()
{
    return real;
}

int ComplexNumbers::getImag()
{
   return imag;
}
