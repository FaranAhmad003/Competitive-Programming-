#include <iostream>
using namespace std;
struct cal
{
private:
    int num1, num2, result;

public:
    void setValues(int _a = 0, int _b = 0)
    {
        num1 = _a;
        num2 = _b;
    }
    int add()
    {
        result = num1 + num2;
        return result;
    }
    int subtract()
    {
        result = num1 - num2;
        return result;
    }
    void display()
    {
        cout << "The value of num 1 is : " << num1 << endl;
        cout << "The value of num 2 is : " << num2 << endl;
    }
    int setNum1()
    {
        cout<<"Enter the desired Number : ";
        int c;
        cin>>c;
        num1=c;
        return num1;
    }
    int setNum2()
    {
        cout << "Enter the desired Number : ";
        int c;
        cin >> c;
        num2 = c;
        return num2;
    }
    
};

int main()
{
    cal c;
    int a = c.setNum1();
    int b = c.setNum2();
    c.display();
    cout << "Sum of Numbers is " << c.add() << endl;
    cout << "Diff of Numbers is " << c.subtract() << endl;
}
