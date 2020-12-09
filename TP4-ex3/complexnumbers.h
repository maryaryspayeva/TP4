#ifndef COMPLEXNUMBERS_H
#define COMPLEXNUMBERS_H


class ComplexNumbers
{
private:
     int real;
     int imag;
public:
     int realResult;
     int imagResult;

     ComplexNumbers();
     void setValue();
     int getImag();
     int getReal();
     void addition (ComplexNumbers, ComplexNumbers);
     void display();
};

#endif // COMPLEXNUMBERS_H
