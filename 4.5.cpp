#include <iostream>

int main()
{
	int number1;
	int number2;
	int remainder;
	std::cout << "This programm will check is a number devisible or not \n";
	std::cout << "Enter number 1: ";
	std::cin >> number1;
	std::cout << "Enter number 2: ";
	std::cin >> number2;

	if (number2 == 0) {
		std::cout << "U cannot devide by 0. Choose another one: ";
		std::cin >> number2;
	}

	remainder = number1 % number2;

	if (remainder == 0) {
		std::cout << number1 << " is divided by " << number2 << " whitout remainder. \n";
	}
	else
	{
		std::cout << number1 << " does not divided by " << number2 << " whitout remainder. \n";
	}
}
