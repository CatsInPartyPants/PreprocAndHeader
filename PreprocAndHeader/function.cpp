#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "function.h"

void fill_array_int(int* arr, int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % (999 - 1);
	}
}
void fill_array_double(double* arr, int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = (double)1 + rand() % (999 - 1) * 0.2;
	}
}
void fill_array_char(char* arr, int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = (char)97 + rand() % (122 - 97);
	}
}

void show_array_int(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void show_array_double(double* arr, int size)
{
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
}
void show_array_char(char* arr, int size)
{
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
}

int find_min_int(int* arr, int size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
double find_min_double(double* arr, int size)
{
	double min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
char find_min_char(char* arr, int size)
{
	char min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int find_max_int(int* arr, int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
double find_max_double(double* arr, int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
char find_max_char(char* arr, int size)
{
	char max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

void change_array_int(int* arr, int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter new " << i << " element of the array(int) ->";
		std::cin >> temp;
		arr[i] = temp;
	}
}
void change_array_double(double* arr, int size)
{
	double temp;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter new " << i << " element of the array(double) ->";
		std::cin >> temp;
		arr[i] = temp;
	}
}
void change_array_char(char* arr, int size)
{
	char temp;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter new " << i << " element of the array(char) ->";
		std::cin >> temp;
		arr[i] = temp;
	}
}

void sort_array_int(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
}
void sort_array_double(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
}
void sort_array_char(char* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				char b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
}
