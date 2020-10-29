#include <iostream>
float a = 9.8;
float x0, v0, t, x;
int main()
{
    std::cin >> (x0) >> (v0) >> (t);
    x = x0 + v0 * t - a * t * t / 2;
    std::cout << (x);
    return 0;
}
