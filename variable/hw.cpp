#include <iostream>
using namespace std;
int main()
{
    const int num1 = 150;
    const int num2 = 100;

    const int additionOfTwoNumbers = num1 + num2;
    const int subtractionOfTwoNumbers = num1 - num2;
    const float multiplyOfTwoNumbers = num1 * num2;

    cout << "Addition1: " << additionOfTwoNumbers << endl;
    cout << "Subtraction1: " << subtractionOfTwoNumbers << endl;
    cout << "multiply1: " << multiplyOfTwoNumbers << endl;

    int a = 80;
    int b = 50;
    cout << "addition: " << a + b << endl;
    cout << "subtraction: " << a - b << endl;
    cout << "multiply: " << a * b;

    return 0;
}