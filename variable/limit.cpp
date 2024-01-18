#include <iostream>
#include <limits>
using namespace std;
int main()
{
    std::cout << "limit for unsigned int: " << numeric_limits<int>::min() << endl;
    std::cout << "limit for signed int max : " << numeric_limits<int>::max() << endl;
}