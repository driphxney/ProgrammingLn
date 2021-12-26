#include <iostream>

/**
 * \brief Эта функция выполняет вычисления по заданной формуле
 * \param a параметр a
 * \param b параметр b
 * \return значение функции
 */
double getA(double x, double y);

/**
 * \brief Эта функция выполняет вычисления по заданной формуле
 * \param a параметр a
 * \param b параметр b
 * \return значение функции
 */
double getB(double x, double y);

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 – в случае успеха).
 */
int main()
{
    double x = 0;
    double y = 0;
    std::cin >> x;
    std::cin >> y;
    const double a = getA(x, y);
    const double b = getB(x, y);
    std::cout << "x = " << x << " y = " << y << " Arithmetic mean = " << a << " Geometric mean = " << b << std::endl;
    return 0;
}

double getA(double x, double y)
{
    return (x + y) / 2;
}

double getB(double x, double y)
{
    return sqrt(fabs(x * y));
}
