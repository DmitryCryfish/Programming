
#include <iostream>
#include <math.h>

using namespace std;
double a, b, c, x, p, s;
int q, w, e, r, d, f;
int main()
{
    std::cout << ("Выберете способ") << "\n";
    std::cin >> x;
    if (x == 1)
    {
        std::cout << ("Введите длинны сторон") << "\n";
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        std::cout << (s) << "\n";
    }
    else
    {
        std::cout << ("Введите координаты вершин") << "\n";
        std::cout << "\n x1="; std::cin >> q;
        std::cout << "\n x2="; std::cin >> w;
        std::cout << "\n x3="; std::cin >> e;
        std::cout << "\n y1="; std::cin >> r;
        std::cout << "\n y2="; std::cin >> d;
        std::cout << "\n y3="; std::cin >> f;
        a = sqrt((q - w) ^ 2 + (r - d) ^ 2);
        b = sqrt((q - e) ^ 2 + (r - f) ^ 2);
        c = sqrt((w - e) ^ 2 + (d - f) ^ 2);
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        std::cout << (s) << "\n";

    }
    if (s <= 0)
        std::cout << "\n Неверный ввод";

}
