#include <iostream>

/**
 * \brief ��� ������� ��������� ���������� �� �������� �������
 * \param a �������� a
 * \param b �������� b
 * \return �������� �������
  */
double getA(double x, double y);

/**
 * \brief ��� ������� ��������� ���������� �� �������� �������
 * \param a �������� a
 * \param b �������� b
 * \return �������� �������
  */
double getB(double x, double y);

/**
 * \brief ����� ����� � ���������
 * \return 0 � ������ ������
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