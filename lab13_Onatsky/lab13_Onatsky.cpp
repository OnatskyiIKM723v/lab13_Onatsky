#include <iostream>

int main() 
{
    setlocale(LC_CTYPE, "ukr"); // дозволити використання української мови

    int n;
    std::cout << "введіть номер члена ряду: ";
    std::cin >> n;

    double result = 200.0; // перший член ряду
    int factor = 1;
    for (int i = 1; i <= n; ++i) 
    {
        if (factor == 1) 
        {
            result /= 2.0;
        }
        else 
        {
            result /= factor * 2.0;
        }
        factor *= 2;
    }

    std::cout << "n-й член ряду: " << result << std::endl;

    return 0;
}
