#include "Kabanova.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Сумма = " << Sum(12.5, 24.8) << endl;
	float b = Sum(14.8, 72.5);
	cout << "Сумма = " << b << endl;
	int c = Sum(4, 8);
	cout << "Сумма = " << c << endl;
	cout << "Разность = " << Dif(33, 24.8) << endl;
	cout << "Произведение = " << Mult(12.5, 24.8) << endl;
	cout << "Частное = " << Div(12.5, 24.8) << endl;
	cout << "Минимальное = " << _Min(3.6, 2.5) << endl;
	cout << "Максимальное = " << _Max(3.6, 2.5) << endl;
	cout << "Положит эл-т: " << poz(4) << endl;
	cout << "Отрицат эл-т: " << neg(4) << endl;
	cout << "Ср знач: " << sr(4, 6) << endl;
	cout << "Четн эл-т: " << chet(4) << endl;
	cout << "Нечет эл-т: " << nechet(4) << endl;
	int data[] = { 12,4,7,18,22,6,15,19,21,23,6,4,7,32,31,31,12 };
	int razmer = size(data);
	cout << _sum_arr(data, razmer) << endl;
	cout << _ostatok_ot_arr(200, data, razmer) << endl;
}
