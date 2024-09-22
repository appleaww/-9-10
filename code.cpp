#include <iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
std::cout << "Введите число a\n";
std::cin >>a;
std::cout << "Введите число c\n";
std::cin >>c;
std::cout << "Введите число b\n";
std::cin >>b;
std::cout << "Сумма чисел равна " << a+b+c << "\n";
std::cout << "Разность чисел равна " << a-b-c;
return 0;
}
