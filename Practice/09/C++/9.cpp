#include <iostream>
int h1, m1, h2, m2, x, t, i;
char a;
int main()
{
    std::cin >> (h1) >> (a) >> (m1);
    std::cin >> (h2) >> (a) >> (m2);
    if (0 <= h1 <= 23 && 0 <= m1 <= 59) {
        x = h1 + m1;
        t = h2 + m2;
        i = t - x;
    }
    else
        std::cout << ("��");
    if (i < 15)
        std::cout << ("������� ���������");
    else
        std::cout << ("������� �� ���������");
    return 0;
}