// Директива препроцессора
#include <iostream>
#include <math.h>

int main() 
{
	short S = 99; // Площадь основания
	short h = 15; // Высота

	std::cout << "S = " << S << ", H = " << h << ". Result: V = " << S * h / 3 << std::endl; 
	
	return 0;
}