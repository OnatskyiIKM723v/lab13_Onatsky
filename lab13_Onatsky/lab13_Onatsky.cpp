#include <iostream>

int main() 
{
    setlocale(LC_CTYPE, "ukr"); // ��������� ������������ ��������� ����

    int n;
    std::cout << "������ ����� ����� ����: ";
    std::cin >> n;

    double result = 200.0; // ������ ���� ����
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

    std::cout << "n-� ���� ����: " << result << std::endl;

    return 0;
}
