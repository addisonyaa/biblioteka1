#pragma once
#include <string>
using namespace std;
float Sum(float a, float b)
{
	return a + b;
}
float Dif(float a, float b)
{
	return a - b;
}
float Mult(float a, float b)
{
	return a * b;
}
float Div(float a, float b)
{
	return a / b;
}

float _Min(float a, float b)
{
	if (a < b)
	{
		return a;
	}
	else if (a > b)
	{
		return b;
	}
	else if (a == b)
	{
		return 0;
	}
}
float _Max(float a, float b)
{
	if (a > b)
	{
		return a;
	}
	else if (a < b)
	{
		return b;
	}
	else if (a == b)
	{
		return 0;
	}
}

float poz(float a)
{
	if (a >= 0)
	{
		return a;
	}
	else
	{
		return 0;
	}
}
float neg(float a)
{
	if (a < 0)
	{
		return a;
	}
	else
	{
		return 0;
	}
}

float sr(float a, float b)
{
	return (a + b) / 2;
}

int chet(int a)
{
	if (a % 2 == 0)
	{
		return a;
	}
	else
	{
		return 0;
	}
}
int nechet(int b)
{
	if (b % 2 != 0)
	{
		return b;
	}
	else
	{
		return 0;
	}
}

int _sum_arr(int arr[], int _size)
{
	int sum = 0;
	for (size_t i = 0; i < _size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int _ostatok_ot_arr(int obsh_kol, int arr[], int _size)
{
	int sum = 0;
	for (size_t i = 0; i < _size; i++)
	{
		sum += arr[i];
	}
	return obsh_kol - sum;
}

void _sort_arr(int* arr, int razmer)
{
	int kor = 0;
	int temp = 0;
	for (int i = 0; i < razmer; i++);
}
