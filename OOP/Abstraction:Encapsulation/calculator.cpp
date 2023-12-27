// calculator.cpp
#include <iostream>
#include "calculator.h"
using namespace std;
void cal::setValues(int _a, int _b)
{
    num1 = _a;
    num2 = _b;
}

int cal::add()
{
    result = num1 + num2;
    return result;
}

int cal::subtract()
{
    result = num1 - num2;
    return result;
}

void cal::display()
{
    cout << "The value of num 1 is: " << num1 << std::endl;
    cout << "The value of num 2 is: " << num2 << std::endl;
}

int cal::setNum1()
{
    cout << "Enter the desired Number: ";
    int c;
    cin >> c;
    num1 = c;
    return num1;
}

int cal::setNum2()
{
    cout << "Enter the desired Number: ";
    int c;
    cin >> c;
    num2 = c;
    return num2;
}
int cal::multiply()
{
    result = num1*num2;
    return result;
}
int cal::divide()
{
    result = num1 / num2;
    return result;
}
