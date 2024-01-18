#include <iostream>
using namespace std;
int main()
{
    int fNum, sNum;
    cout << "Enter two number: ";
    cin >> fNum >> sNum;
    const int sum = fNum + sNum;
    cout << "Sum of two number: " << sum;

    return 0;
}