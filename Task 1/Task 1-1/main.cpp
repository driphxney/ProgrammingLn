#include <cmath>
#include <iomanip>
#include <iostream>
/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \param z параметр z
 * \return значение функции
 */
double getA(const double x, const double y, const double z);
/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \param z параметр z
 * \return значение функции
 */
double getB(const double x, const double y, const double z);
/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    const double x = 2.2;
    const double y = 9.2;
    const double z = 10.2;

    const double a = getA(x, y, z);
    const double b = getB(x, y, z);

    std::cout << "x = " << x << " y = " << y << " z = " << z << " a = " << a << " b = " << b << std::endl;

    return 0;
}

double getA(const double x, const double y, const double z)
{
    return log(z + pow(x, 2) + pow(sin(x / y), 2));
}

double getB(const double x, const double y, const double z)
{
    return exp(-z) * x + sqrt(x + z)/x - (sqrt(fabs(x-y)));
}