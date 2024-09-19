#include <iostream>

int main() 
{
	short S, h;

	std::cout << "Enter S (0 < S < 100): ";
	std::cin >> S;
	std::cout << "Enter h (0 < S < 100): ";
	std::cin >> h;

	double result = (S * h) / 3.0;

	std::cout << "S = " << S << ", H = " << h << ". Result: V = " << result << std::endl; 
	
	return 0;
}