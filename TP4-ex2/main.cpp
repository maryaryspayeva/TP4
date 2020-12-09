#include <QCoreApplication>
#include <exercise2.h>
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Input the first number: " << endl;
    cin >> a;

    cout << "Input the second number: " << endl;
    cin >> b;
    Exercise2 result (a, b);

    cout << "The addition result is: "<< result.Addition()<< endl;

    return 0;

}
