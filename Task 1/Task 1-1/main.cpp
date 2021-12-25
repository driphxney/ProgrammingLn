#include <cmath>
#include <iomanip>
#include <iostream>
/**
 * \brief ��� ������� ��������� ���������� �� �������� �������
 * \param x �������� �
 * \param y �������� y
 * \param z �������� z
 * \return �������� �������
 */
double getA(const double x, const double y, const double z);
/**
 * \brief ��� ������� ��������� ���������� �� �������� �������
 * \param x �������� �
 * \param y �������� y
 * \param z �������� z
 * \return �������� �������
 */
double getB(const double x, const double y, const double z);
/**
 * \brief ����� ����� � ���������
 * \return 0  � ������ ������
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