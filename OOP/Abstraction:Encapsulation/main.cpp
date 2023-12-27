#include<iostream>
#include"calculator.h"
using namespace std;
int main()
{
    cal c;
    int a = c.setNum1();
    int b = c.setNum2();
    c.display();
    cout << "Sum of Numbers is " << c.add() << endl;
    cout << "Diff of Numbers is " << c.subtract() << endl;
    cout<<"product of Numbers is : "<<c.multiply()<<endl;
    cout << "Divide of Numbers is : " << c.divide() << endl;
}