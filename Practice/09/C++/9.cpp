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
        std::cout << ("ГГ");
    if (i < 15)
        std::cout << ("Встреча состоится");
    else
        std::cout << ("Встреча НЕ состоится");
    return 0;
}